#include <signal.h> 
#include <sys/time.h> 

#ifndef TRUE 
#define TRUE    1 
#define FALSE   0 
#endif

typedef short int       int2; 
typedef int             int4; 
#define TIMER_SIGNAL_TYPE       Iuh_TIMER_INTERNAL_SIGNAL
#define TIMER_INTERVAL_TYPE     ITIMER_REAL 
struct itimerval timer_value;

static unsigned timer_set_timestamp;    /* this holds the value of */ 
                                        /* current_time() whenever an */ 
                                        /* interval timer is started */ 
/* The following definitions support conversions between the basic unit of 
time in the nip (which is tens-of-milliseconds) and time in all the 4.2BSD 
system calls (which is seconds and microseconds). 
*/ 
#define USECS_PER_MSEC          1000 
#define MSECS_PER_SEC           1000 
#define USECS_PER_SEC           1000000 
#define MANY_TENS_OF_MSECS      (~0)            /* unsigned, please */ 
/* useful for converting from 4.2BSD to nip units */ 
#define USECS_PER_TEN_MSECS     (USECS_PER_MSEC*10) 
#define TENS_OF_MSECS_PER_SEC   (MSECS_PER_SEC/10) 
/* useful for converting from nip units to 4.2 units */ 
#define SEC(x)                  (x/TENS_OF_MSECS_PER_SEC) 
#define USEC(x)					((x*USECS_PER_TEN_MSECS)%USECS_PER_SEC) 
/* 
A timer wakeup queue should be represented as a data structure that can 
do 
MIN, INSERT, DELETE and TRAVERSE operations in minimal time. 
 INSERT and 
DELETE are necessary to support declaring and cancelling of timers MIN 
is 
necessary to find out who has timed out and to decide what the next 
interval 
to timeout should be.  TRAVERSE is necessary for updating all the 
timers once 
a time period has elapsed.  Unfortunately, I forget what this optimal data 
structure is.  Until I remember, we shall use an array.   
The array is used as follows:  Each entry in the array has a timeout.   
We will constantly be waiting for the entry with the shortest timeout. 
When that times out, we will subtract from each timer's timeout, the time 
that 
has passed since we first started waiting for the current timer.   
When a timeout occurs, the event flag is set.  A timer is released from 
use when the timeout is 0 AND the event flag points to 0. 
*/

#define timer_inuse(t)  (t->timeout || t->event) 
struct timer { 
        unsigned int timeout;           /* clock ticks to wait for */ 
        int2 *event;                    /* set to TRUE when time out occurs */
		void (*ast)(void*, int);
		IuhTimerArg myArg;
} timerq[Iuh_TIMER_MAX];                   /* timer queue */ 
struct timer *next_timer;               /* timer we expect to run down next */ 
struct timer *shortest_timer(); 
int oldmask;                            /* signal mask */ 
sigset_t mask;

/* actually these just fiddle with the interrupt from the timer */ 
#define disable_interrupts()    pthread_sigmask(SIG_BLOCK, &mask, NULL); //oldmask = sigblock(1<<(TIMER_SIGNAL_TYPE-1))

#define enable_interrupts()    pthread_sigmask(SIG_UNBLOCK, &mask, NULL); 


/* used when cancelling timers (if that works) */ 
struct itimerval cancel_timer = {{ 0,0},{0,0}}; 

void _clkini();
int _setimr(unsigned int timeout, int2 *event, void (*ast)(void*, int), IuhTimerArg myArg, int4 arg, char *pname, IuhTimerID *idPtr);
int _cantim(IuhTimerID *idPtr);
void start_timer(struct timer *t); 
void cancel_itimer();
void update_all_timers_by(unsigned int time); 

__inline__ IuhBool IuhTimersInitLib() {
	sigemptyset(&mask);
    	sigaddset(&mask, SIGALRM);
	enable_interrupts();
	_clkini();
	
	return Iuh_TRUE;
}

void IuhTimersInit()
{
	memset(timerq, 0, sizeof(struct timer) * Iuh_TIMER_MAX);
}

// create a timer that expires after sec seconds. ID of the timer will be returned in *idPtr,
// hdl() will be called with argument arg when the timer expires.
__inline__ IuhBool IuhTimerCreate(int sec, IuhTimerID *idPtr, void (*hdl)(IuhTimerArg, IuhTimerID), IuhTimerArg arg) {
 	int2 ev;
	if(idPtr == NULL || hdl == NULL) return Iuh_FALSE;
	
	if(_setimr(sec*100, &ev, (void*) hdl, arg, 0, NULL, idPtr) == -1) {
		return Iuh_FALSE;
	}
	
	return Iuh_TRUE;
}

__inline__ IuhTimerArg IuhTimerGetArg(IuhTimerID *idPtr) 
{
	IuhTimerArg pResult;
	
	if(idPtr == NULL)
	{

		return (IuhTimerArg)NULL;
	}

	// From _cantim
	disable_interrupts(); 

	pResult = timerq[*idPtr].myArg;
	
	enable_interrupts(); 

	return pResult;
}

__inline__ IuhBool IuhTimerSetArg(IuhTimerID *idPtr, IuhTimerArg arg) 
{
	if(idPtr == NULL)
	{
		return Iuh_FALSE;
	}

	// From _cantim
	disable_interrupts(); 

	timerq[*idPtr].myArg = arg;
	
	enable_interrupts(); 

	return Iuh_TRUE;
}


__inline__ IuhBool IuhTimerDestroy(IuhTimerID *idPtr) {
	if(idPtr == NULL) return Iuh_FALSE;

	if(_cantim(idPtr) == TRUE) return Iuh_TRUE;
	else return Iuh_FALSE;
}

// CAPWAP note: don't use directly the following functions, just use the IuhTimer*() wrappers

void clk_isr(); 
unsigned int current_time();

stack_t new_stack;
struct sigaction siga;

// init timers
void _clkini() { 
        struct timer *t; 
        /* disable constant interval timing */
        timerclear(&timer_value.it_interval);
/*
	if (signal(TIMER_SIGNAL_TYPE, clk_isr) == SIG_ERR) { 
                perror("_clkini: signal failed\n"); 
                exit(-1); 
        }
*/
	if ((new_stack.ss_sp = malloc(SIGSTKSZ)) == NULL) {

		perror("impossibile allocare memeoria per il nuovo stack");
	}

	new_stack.ss_size = SIGSTKSZ;
	new_stack.ss_flags = 0;

	if (sigaltstack(&new_stack, NULL) < 0) {

    		perror("sigaltstack");
	}

	siga.sa_handler = clk_isr;
	sigfillset( &siga.sa_mask );
	siga.sa_flags = SA_ONSTACK;

	if ( sigaction(TIMER_SIGNAL_TYPE, &siga, NULL) ) {

		perror("_clkini: signal failed\n"); 
                exit(-1); 
	}

        for (t=timerq;t<&timerq[Iuh_TIMER_MAX];t++) { 
                t->timeout = 0; 
                t->event = 0; 
        } 
}


int _setimr(	unsigned int timeout,		/* time to wait in 10msec ticks */ 
		int2 *event,			/* event flag to set on runout */ 
		void (*ast)(void*, int),	/* routine to be called on runout or 0 */ 
		IuhTimerArg myArg,		
		int4 arg,			/* argument to be provided to timeout ast */ 
		char *pname,
		IuhTimerID *idPtr) { 
        struct timer *free_timer;       /* pointer to unused timer entry */ 
        struct timer *t; 
        *event = 0; 

        if (timeout == 0) { /* no time, so enable it and don't put on queue */ 
                *event = TRUE; 
                return(TRUE); 
        } 
        disable_interrupts(); 
        for (*idPtr = 0, t=timerq;t<&timerq[Iuh_TIMER_MAX];t++, (*idPtr)++) { 
                if (!timer_inuse(t)) { 
//                        IuhDebugLog("Found free timer"); 
			free_timer = t; 
                        break; 
                } 
        } 
        if (t == &timerq[Iuh_TIMER_MAX]) {
			enable_interrupts()
			return -1; // out of timers
        }
		
        /* install new timer */ 
        /* cannot initialize free timer here, because cancel_itimer() will */ 
        /* munge with it, so push it into the branches of the the if */ 

        if (!next_timer) {
//		IuhDebugLog("First Timer\n");
		/* no timers set at all, so this is shortest */ 
                free_timer->event = event; 
                free_timer->timeout = timeout; 
		free_timer->ast= ast;
		free_timer->myArg = myArg;
                start_timer(free_timer); 
        } else if ((timeout + current_time()) < 
                (next_timer->timeout + timer_set_timestamp)) { 
//				IuhDebugLog("Shorter Timer\n");
                /* new timer is shorter than current one, so */ 
                /* cancel current timer and set up new one */ 
                /* not sure if the next setitimer() is actually necessary */ 
                /* probably not, but I haven't tested to make sure */ 
                cancel_itimer(); 
                free_timer->event = event; 
                free_timer->timeout = timeout;
		free_timer->ast= ast;
		free_timer->myArg = myArg;
                start_timer(free_timer); 
        } else { 
                /* new timer is longer, than current one */ 
//		IuhDebugLog("Longer Timer (%d)\n", timeout);
                free_timer->event = event; 
                free_timer->timeout = timeout + (current_time() - timer_set_timestamp);
		free_timer->ast= ast;
		free_timer->myArg = myArg;
	}
		
        enable_interrupts(); 
        return(TRUE); 
} 

// cancel a timer
int _cantim(IuhTimerID *idPtr) { 
        struct timer *t; 

        disable_interrupts(); 
       // for (t=timerq;t<&timerq[Iuh_TIMER_MAX];t++) { 
                t = &timerq[*idPtr];
				//if (t->event == event) { 
                        t->timeout = 0; 
                        t->event = 0;
						t->myArg = 0;
                        /* check if we were waiting on this one */ 
                        if (t == next_timer) { 
                                cancel_itimer(); 
                                start_timer(shortest_timer()); 
                        } 
                        enable_interrupts(); 
                        return(TRUE); 
                //} 
        //} 
        enable_interrupts(); 
        return(FALSE); 
} 

/* clock interrupt handler */ 
/* this routine is executed when an alarm signal occurs */ 
void clk_isr() { 
        /* the following condition could be set up, 
        if the interrupt was delivered while we were in cantim, cancelling 
        the last timer */ 
		//printf("\n\n\n%d\n\n", pthread_self());
        update_all_timers_by(current_time() - timer_set_timestamp);
		if (next_timer == 0) return;
		  /* start timer for next shortest guy if one exists */ 
        start_timer(shortest_timer()); 
} 
/* subtract time from all timers, enabling any that run out along the way */ 
void update_all_timers_by(unsigned int time) { 
	struct timer *t; int id;
        for (id=0, t=timerq;t<&timerq[Iuh_TIMER_MAX];t++, id++) { 
		if (t->timeout) {
//			IuhDebugLog("~~~~~~~~~timer set, index:%d, timeout:%d~~~~~~~~~~~~", id, t->timeout);
                        if (time < t->timeout) { 
			//	IuhDebugLog("timeout(%d) - time(%d)\n", t->timeout, time);
				t->timeout -= time;
			//	IuhDebugLog("timeout(%d)\n", t->timeout);
                        } else {
			//	IuhDebugLog("(%d) %d vs %d\n", t, t->timeout, time);
//				IuhDebugLog("~~~~~~~è un segnale mio!~~~~~~~~~");
				t->timeout = 0;
				(t->ast)((void *)t->myArg, id);
				//	printf("%d vs %d\n", t->timeout, time);
                                /* if this has forced a timeout on */ 
                                /* anyone else, enable it */ 
                                *t->event = TRUE; 
                                t->event = 0;        /* remove timer */ 
                        } 
                } 
        } 
} 
struct timer *shortest_timer() { 
        struct timer *t, *s_t;  /* shortest_timer */ 
        unsigned int old_timer = MANY_TENS_OF_MSECS; 
        for (s_t = 0,t=timerq;t<&timerq[Iuh_TIMER_MAX];t++) { 
                if (t->timeout > 0 && t->timeout < old_timer) { 
                        old_timer = t->timeout; 
                        s_t = t; 
                } 
        } 
        return(s_t); 
} 
void start_timer(t) 
struct timer *t; 
{ 
        next_timer = t;         /* remember for _cantim and _setimr */ 
        if (!t) return; 
        timer_set_timestamp = current_time(); 
        timer_value.it_value.tv_sec = SEC(next_timer->timeout); 
        timer_value.it_value.tv_usec = USEC(next_timer->timeout);
//	IuhDebugLog("Start System Timer (%d,%d)", timer_value.it_value.tv_sec, timer_value.it_value.tv_usec);
        if (-1 == setitimer(TIMER_INTERVAL_TYPE,&timer_value, (struct itimerval *)0)) { 
                perror("start_timer: setitimer"); 
                exit(-1); 
        } 
}

/* return time in tens of milliseconds */ 
unsigned int 
current_time() 
{ 
        struct timeval tp; 
        (void) gettimeofday(&tp,(struct timezone *)0); 
        /* ignore overflow */ 
        return(tp.tv_sec*TENS_OF_MSECS_PER_SEC 
                + tp.tv_usec/USECS_PER_TEN_MSECS); 
}

void cancel_itimer() 
{ 
        if (-1 == setitimer(TIMER_INTERVAL_TYPE,&cancel_timer, 
                                       (struct itimerval *)0)) { 
                perror("_setimr: setitimer failed"); 
                exit(-1); 
        } 
        update_all_timers_by(current_time() - timer_set_timestamp); 
} 

