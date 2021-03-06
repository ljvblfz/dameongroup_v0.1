/*
 * Note: this file originally auto-generated by mib2c using
 *       version : 1.12 $ of : mfd-data-access.m2c,v $
 *
 * $Id:$
 */
#ifndef DOT11NEWNASPORTTABLE_DATA_ACCESS_H
#define DOT11NEWNASPORTTABLE_DATA_ACCESS_H

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
 *** Table dot11NewNasPortTable
 ***
 **********************************************************************
 **********************************************************************/
/*
 * dot11NewNasPortTable is subid 3 of dot11ConfigNasGroup.
 * Its status is Current.
 * OID: .1.3.6.1.4.1.31656.6.1.2.21.3, length: 12
*/


    int dot11NewNasPortTable_init_data(dot11NewNasPortTable_registration_ptr dot11NewNasPortTable_reg);


/*
 * TODO:180:o: Review dot11NewNasPortTable cache timeout.
 * The number of seconds before the cache times out
 */
#define DOT11NEWNASPORTTABLE_CACHE_TIMEOUT   DOT1DTPFDBTABLE_CACHE_TIMEOUT

void dot11NewNasPortTable_container_init(netsnmp_container **container_ptr_ptr,
                             netsnmp_cache *cache);
int dot11NewNasPortTable_cache_load(netsnmp_container *container);
void dot11NewNasPortTable_cache_free(netsnmp_container *container);

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
    int dot11NewNasPortTable_row_prep( dot11NewNasPortTable_rowreq_ctx *rowreq_ctx);


#ifdef __cplusplus
}
#endif

#endif /* DOT11NEWNASPORTTABLE_DATA_ACCESS_H */
