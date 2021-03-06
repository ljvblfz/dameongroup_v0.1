/*
 * Note: this file originally auto-generated by mib2c using
 *       version : 1.12 $ of : mfd-data-access.m2c,v $
 *
 * $Id:$
 */
#ifndef DOT11BSSWAPIPERFORMANCESTATSTABLE_DATA_ACCESS_H
#define DOT11BSSWAPIPERFORMANCESTATSTABLE_DATA_ACCESS_H

#ifdef __cplusplus
extern "C" {
#endif

#include "autelanWtpGroup.h"

/* *********************************************************************
 * function declarations
 */

/* *********************************************************************
 * Table declarations
 */
/**********************************************************************
 **********************************************************************
 ***
 *** Table dot11BssWAPIPerformanceStatsTable
 ***
 **********************************************************************
 **********************************************************************/
/*
 * dot11BssWAPIPerformanceStatsTable is subid 5 of wtpWAPI.
 * Its status is Current.
 * OID: .1.3.6.1.4.1.33050.6.1.1.10.5, length: 12
*/


    int dot11BssWAPIPerformanceStatsTable_init_data(dot11BssWAPIPerformanceStatsTable_registration_ptr dot11BssWAPIPerformanceStatsTable_reg);


/*
 * TODO:180:o: Review dot11BssWAPIPerformanceStatsTable cache timeout.
 * The number of seconds before the cache times out
 */
#define DOT11BSSWAPIPERFORMANCESTATSTABLE_CACHE_TIMEOUT   DOT1DTPFDBTABLE_CACHE_TIMEOUT

void dot11BssWAPIPerformanceStatsTable_container_init(netsnmp_container **container_ptr_ptr,
                             netsnmp_cache *cache);
int dot11BssWAPIPerformanceStatsTable_cache_load(netsnmp_container *container);
void dot11BssWAPIPerformanceStatsTable_cache_free(netsnmp_container *container);

    /*
    ***************************************************
    ***             START EXAMPLE CODE              ***
    ***---------------------------------------------***/
/* *********************************************************************
 * Since we have no idea how you really access your data, we'll go with
 * a worst case example: a flat text file.
 */
#define MAX_LINE_SIZE 256
    /*
    ***---------------------------------------------***
    ***              END  EXAMPLE CODE              ***
    ***************************************************/
    int dot11BssWAPIPerformanceStatsTable_row_prep( dot11BssWAPIPerformanceStatsTable_rowreq_ctx *rowreq_ctx);


#ifdef __cplusplus
}
#endif

#endif /* DOT11BSSWAPIPERFORMANCESTATSTABLE_DATA_ACCESS_H */
