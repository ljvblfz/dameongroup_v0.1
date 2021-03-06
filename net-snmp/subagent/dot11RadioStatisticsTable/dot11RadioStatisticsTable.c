/*
 * Note: this file originally auto-generated by mib2c using
 *       version : 1.32.2.3 $ of : mfd-top.m2c,v $ 
 *
 * $Id:$
 */
/** \mainpage MFD helper for dot11RadioStatisticsTable
 *
 * \section intro Introduction
 * Introductory text.
 *
 */
/* standard Net-SNMP includes */
#include <net-snmp/net-snmp-config.h>
#include <net-snmp/net-snmp-includes.h>
#include <net-snmp/agent/net-snmp-agent-includes.h>

/* include our parent header */
#include "dot11RadioStatisticsTable.h"

#include <net-snmp/agent/mib_modules.h>

#include "dot11RadioStatisticsTable_interface.h"
#include "autelanWtpGroup.h"

#define RADIOSTATISTICS "1.4.4"

oid dot11RadioStatisticsTable_oid[128] = { 0 };
int dot11RadioStatisticsTable_oid_size = 0;

void initialize_table_dot11RadioStatisticsTable(void);


/**
 * Initializes the dot11RadioStatisticsTable module
 */
void
init_dot11RadioStatisticsTable(void)
{
    DEBUGMSGTL(("verbose:dot11RadioStatisticsTable:init_dot11RadioStatisticsTable","called\n"));

    /*
     * TODO:300:o: Perform dot11RadioStatisticsTable one-time module initialization.
     */
     
    /*
     * here we initialize all the tables we're planning on supporting
     */
    if (should_init("dot11RadioStatisticsTable"))
        initialize_table_dot11RadioStatisticsTable();

} /* init_dot11RadioStatisticsTable */

/**
 * Initialize the table dot11RadioStatisticsTable 
 *    (Define its contents and how it's structured)
 */
void
initialize_table_dot11RadioStatisticsTable(void)
{
    dot11RadioStatisticsTable_registration_ptr user_context;
    u_long flags;

    DEBUGMSGTL(("verbose:dot11RadioStatisticsTable:initialize_table_dot11RadioStatisticsTable","called\n"));

    /*
     * TODO:301:o: Perform dot11RadioStatisticsTable one-time table initialization.
     */

    /*
     * TODO:302:o: |->Initialize dot11RadioStatisticsTable user context
     * if you'd like to pass in a pointer to some data for this
     * table, allocate or set it up here.
     */
    /*
     * a netsnmp_data_list is a simple way to store void pointers. A simple
     * string token is used to add, find or remove pointers.
     */
    user_context = netsnmp_create_data_list("dot11RadioStatisticsTable", NULL, NULL);
    
    /*
     * No support for any flags yet, but in the future you would
     * set any flags here.
     */
    flags = 0;
    
    /*
     * call interface initialization code
     */
    
	mad_dev_oid(dot11RadioStatisticsTable_oid, RADIOSTATISTICS, &dot11RadioStatisticsTable_oid_size,enterprise_pvivate_oid);
    _dot11RadioStatisticsTable_initialize_interface(user_context, flags);
} /* initialize_table_dot11RadioStatisticsTable */

/**
 * pre-request callback
 *
 *
 * @retval MFD_SUCCESS              : success.
 * @retval MFD_ERROR                : other error
 */
int
dot11RadioStatisticsTable_pre_request(dot11RadioStatisticsTable_registration_ptr user_context)
{
    DEBUGMSGTL(("verbose:dot11RadioStatisticsTable:dot11RadioStatisticsTable_pre_request","called\n"));

    /*
     * TODO:510:o: Perform dot11RadioStatisticsTable pre-request actions.
     */

    return MFD_SUCCESS;
} /* dot11RadioStatisticsTable_pre_request */

/**
 * post-request callback
 *
 *
 * @retval MFD_SUCCESS : success.
 * @retval MFD_ERROR   : other error (ignored)
 */
int
dot11RadioStatisticsTable_post_request(dot11RadioStatisticsTable_registration_ptr user_context)
{
    DEBUGMSGTL(("verbose:dot11RadioStatisticsTable:dot11RadioStatisticsTable_post_request","called\n"));

    /*
     * TODO:511:o: Perform dot11RadioStatisticsTable pos-request actions.
     */

    return MFD_SUCCESS;
} /* dot11RadioStatisticsTable_post_request */


/** @{ */
