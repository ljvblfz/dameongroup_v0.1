#ifndef _STP_CLI_H__
#define _STP_CLI_H__

#define MAX_CLI_BUFF	80
#define MAXPARAMNUM     6
#define MAXPARAMLEN     40
#define MAX_CLI_PROMT	24
#define MAX_SELECTOR	12

typedef int CLI_CMD_CLBK (int argc, char** argv);

typedef enum {
  CMD_PAR_NUMBER,
  CMD_PAR_STRING,
  CMD_PAR_BOOL_YN,
  CMD_PAR_ENUM,
} CMD_PARAM_TYPE_T;

typedef struct cmd_par_number_limits_s {
  unsigned long min;
  unsigned long max;
} CMD_PAR_LIMITS;

typedef struct cmd_par_string_selector_s {
  char* string_value;
  char* string_help;
} CMD_PAR_SELECTOR;

typedef struct cmd_par_dscr_s {
  char*			param_help;
  CMD_PARAM_TYPE_T	param_type;
  CMD_PAR_LIMITS	number_limits;
  CMD_PAR_SELECTOR	string_selector[MAX_SELECTOR];
  char*			default_value;
} CMD_PAR_DSCR_T;

typedef struct cmd_dscr_s {
  char*			cmd_name;
  char*			cmd_help;
  CMD_PAR_DSCR_T	param[MAXPARAMNUM];
  CLI_CMD_CLBK*		clbk;
} CMD_DSCR_T;

#define THE_COMMAND(x, y)	{x, y, {
#define PARAM_NUMBER(x,zmin,zmax,def)	{x,CMD_PAR_NUMBER, {zmin, zmax}, {}, def},
#define PARAM_STRING(x, def)		{x,CMD_PAR_STRING, {},           {}, def},
#define PARAM_ENUM(x) 			{x,CMD_PAR_ENUM,   {},           {
#define PARAM_ENUM_SEL(x, y)		{x, y},
#define PARAM_ENUM_DEFAULT(def)		}, def},
#define PARAM_BOOL(x,yesd,nod,def)	{x, CMD_PAR_ENUM,  {}, {{"y",yesd},{"n",nod}},def}
#define THE_FUNC(x)			}, &x}, 
#define END_OF_LANG	{NULL,NULL}

char *stp_mngr_get_prompt (void); /* this function not from the lib ! */

void stp_cli_debug_dump_args (char* title, int argc, char** argv);

void stp_cli_register_language (const CMD_DSCR_T* cmd_list);
void stp_cli_usage (void);
int stp_cli_execute_command (const char* line);
#ifdef OLD_READLINE
void stp_cli_rl_read_cli (void);
#else
void stp_cli_rl_read_cli (char *);
#endif
void stp_cli_rl_init (void);
void stp_cli_rl_shutdown (void);
char* stp_cli_sprint_time_stamp (void);

#endif /* _CLI_API__ */

