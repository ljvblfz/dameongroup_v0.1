/*
 * Note: this file originally auto-generated by mib2c using
 *       version : 1.32.2.3 $ of : mfd-top.m2c,v $
 *
 * $Id:$
 */
#ifndef DOT11CONFIGEAGSERVERGROUPTABLE_H
#define DOT11CONFIGEAGSERVERGROUPTABLE_H

#ifdef __cplusplus
extern "C" {
#endif


/** @defgroup misc misc: Miscelaneous routines
 *
 * @{
 */
#include <net-snmp/library/asn1.h>

/* other required module components */
    /* *INDENT-OFF*  */
config_require(DOT11-AC-MIB/dot11ConfigEagServerGroupTable/dot11ConfigEagServerGroupTable_interface);
config_require(DOT11-AC-MIB/dot11ConfigEagServerGroupTable/dot11ConfigEagServerGroupTable_data_access);
config_require(DOT11-AC-MIB/dot11ConfigEagServerGroupTable/dot11ConfigEagServerGroupTable_data_get);
config_require(DOT11-AC-MIB/dot11ConfigEagServerGroupTable/dot11ConfigEagServerGroupTable_data_set);
    /* *INDENT-ON*  */

/* OID and column number definitions for  */
#include "dot11ConfigEagServerGroupTable_oids.h"

/* enum definions */
#include "dot11ConfigEagServerGroupTable_enums.h"
#include "ws_dbus_list_interface.h"

/* *********************************************************************
 * function declarations
 */
void init_dot11ConfigEagServerGroupTable(void);

/* *********************************************************************
 * Table declarations
 */
/**********************************************************************
 **********************************************************************
 ***
 *** Table dot11ConfigEagServerGroupTable
 ***
 **********************************************************************
 **********************************************************************/
/*
 * dot11ConfigEagServerGroupTable is subid 4 of dot11ConfigPortalServerGroup.
 * Its status is Current.
 * OID: .1.3.6.1.4.1.31656.6.1.2.23.4, length: 12
*/
/* *********************************************************************
 * When you register your mib, you get to provide a generic
 * pointer that will be passed back to you for most of the
 * functions calls.
 *
 * TODO:100:r: Review all context structures
 */
    /*
     * TODO:101:o: |-> Review dot11ConfigEagServerGroupTable registration context.
     */
typedef netsnmp_data_list * dot11ConfigEagServerGroupTable_registration_ptr;

/**********************************************************************/
/*
 * TODO:110:r: |-> Review dot11ConfigEagServerGroupTable data context structure.
 * This structure is used to represent the data for dot11ConfigEagServerGroupTable.
 */
/*
 * This structure contains storage for all the columns defined in the
 * dot11ConfigEagServerGroupTable.
 */
typedef struct dot11ConfigEagServerGroupTable_data_s {
   dbus_parameter parameter;
        /*
         * RedirListen(2)/IPADDR/ASN_IPADDRESS/u_long(u_long)//l/A/W/e/r/d/h
         */
   u_long   RedirListen;
    
        /*
         * RedirListenPort(3)/INTEGER/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
         */
   long   RedirListenPort;
    
        /*
         * EagEnable(4)/INTEGER/ASN_INTEGER/long(u_long)//l/A/W/E/r/d/h
         */
   u_long   EagEnable;
    
        /*
         * IdleTimeFunction(5)/INTEGER/ASN_INTEGER/long(u_long)//l/A/W/E/r/d/h
         */
   u_long   IdleTimeFunction;
    
        /*
         * DebugLog(6)/INTEGER/ASN_INTEGER/long(u_long)//l/A/W/E/r/d/h
         */
   u_long   DebugLog;
    
        /*
         * JustAllowWirelessUserLogin(7)/INTEGER/ASN_INTEGER/long(u_long)//l/A/W/E/r/d/h
         */
   u_long   JustAllowWirelessUserLogin;
    
        /*
         * RadiusAcctInterval(8)/INTEGER/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
         */
   long   RadiusAcctInterval;
    
        /*
         * MaxIdleTime(9)/INTEGER/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
         */
   long   MaxIdleTime;
    
        /*
         * MaxIdleFlow(10)/INTEGER/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
         */
   long   MaxIdleFlow;
    
        /*
         * VrrpId(11)/INTEGER/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
         */
   long   VrrpId;
    
        /*
         * PortalInteractivePort(12)/INTEGER/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
         */
   long   PortalInteractivePort;
    
        /*
         * MaxHttpResponse(13)/INTEGER/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
         */
   long   MaxHttpResponse;
    
        /*
         * AutoCreateUserSession(14)/INTEGER/ASN_INTEGER/long(u_long)//l/A/W/E/r/d/h
         */
   u_long   AutoCreateUserSession;
    
} dot11ConfigEagServerGroupTable_data;


/* *********************************************************************
 * TODO:115:o: |-> Review dot11ConfigEagServerGroupTable undo context.
 * We're just going to use the same data structure for our
 * undo_context. If you want to do something more efficent,
 * define your typedef here.
 */
typedef dot11ConfigEagServerGroupTable_data dot11ConfigEagServerGroupTable_undo_data;

/*
 * TODO:120:r: |-> Review dot11ConfigEagServerGroupTable mib index.
 * This structure is used to represent the index for dot11ConfigEagServerGroupTable.
 */
typedef struct dot11ConfigEagServerGroupTable_mib_index_s {

        /*
         * InstanceId(1)/INTEGER/ASN_INTEGER/long(long)//l/A/w/e/r/d/h
         */
   long   InstanceId;


} dot11ConfigEagServerGroupTable_mib_index;

    /*
     * TODO:121:r: |   |-> Review dot11ConfigEagServerGroupTable max index length.
     * If you KNOW that your indexes will never exceed a certain
     * length, update this macro to that length.
*/
#define MAX_dot11ConfigEagServerGroupTable_IDX_LEN     1


/* *********************************************************************
 * TODO:130:o: |-> Review dot11ConfigEagServerGroupTable Row request (rowreq) context.
 * When your functions are called, you will be passed a
 * dot11ConfigEagServerGroupTable_rowreq_ctx pointer.
 */
typedef struct dot11ConfigEagServerGroupTable_rowreq_ctx_s {

    /** this must be first for container compare to work */
    netsnmp_index        oid_idx;
    oid                  oid_tmp[MAX_dot11ConfigEagServerGroupTable_IDX_LEN];
    
    dot11ConfigEagServerGroupTable_mib_index        tbl_idx;
    
    dot11ConfigEagServerGroupTable_data              data;
    dot11ConfigEagServerGroupTable_undo_data       * undo;
    unsigned int                column_set_flags; /* flags for set columns */


    /*
     * flags per row. Currently, the first (lower) 8 bits are reserved
     * for the user. See mfd.h for other flags.
     */
    u_int                       rowreq_flags;

    /*
     * implementor's context pointer (provided during registration)
     */
    dot11ConfigEagServerGroupTable_registration_ptr dot11ConfigEagServerGroupTable_reg;

    /*
     * TODO:131:o: |   |-> Add useful data to dot11ConfigEagServerGroupTable rowreq context.
     */
    
    /*
     * storage for future expansion
     */
    netsnmp_data_list             *dot11ConfigEagServerGroupTable_data_list;

} dot11ConfigEagServerGroupTable_rowreq_ctx;

typedef struct dot11ConfigEagServerGroupTable_ref_rowreq_ctx_s {
    dot11ConfigEagServerGroupTable_rowreq_ctx *rowreq_ctx;
} dot11ConfigEagServerGroupTable_ref_rowreq_ctx;

/* *********************************************************************
 * function prototypes
 */
    int dot11ConfigEagServerGroupTable_pre_request(dot11ConfigEagServerGroupTable_registration_ptr user_context);
    int dot11ConfigEagServerGroupTable_post_request(dot11ConfigEagServerGroupTable_registration_ptr user_context);

    int dot11ConfigEagServerGroupTable_check_dependencies(dot11ConfigEagServerGroupTable_rowreq_ctx * rowreq_ctx); 
    int dot11ConfigEagServerGroupTable_commit(dot11ConfigEagServerGroupTable_rowreq_ctx * rowreq_ctx);

extern oid dot11ConfigEagServerGroupTable_oid[];
extern int dot11ConfigEagServerGroupTable_oid_size;


#include "dot11ConfigEagServerGroupTable_interface.h"
#include "dot11ConfigEagServerGroupTable_data_access.h"
#include "dot11ConfigEagServerGroupTable_data_get.h"
#include "dot11ConfigEagServerGroupTable_data_set.h"

/*
 * DUMMY markers, ignore
 *
 * TODO:099:x: *************************************************************
 * TODO:199:x: *************************************************************
 * TODO:299:x: *************************************************************
 * TODO:399:x: *************************************************************
 * TODO:499:x: *************************************************************
 */

#ifdef __cplusplus
}
#endif

#endif /* DOT11CONFIGEAGSERVERGROUPTABLE_H */
