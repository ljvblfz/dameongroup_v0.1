/*
 * Note: this file originally auto-generated by mib2c using
 *       version : 1.12 $ of : mfd-data-access.m2c,v $ 
 *
 * $Id:$
 */
/* standard Net-SNMP includes */
#include <net-snmp/net-snmp-config.h>
#include <net-snmp/net-snmp-includes.h>
#include <net-snmp/agent/net-snmp-agent-includes.h>

/* include our parent header */
#include "dot11ConfTotalTrapGroupTable.h"


#include "dot11ConfTotalTrapGroupTable_data_access.h"

#include "ac_manage_def.h"
#include "ws_snmpd_engine.h"
#include "ws_snmpd_manual.h"
#include "ac_manage_interface.h"
#include "../mibs_public.h"

/** @defgroup data_access data_access: Routines to access data
 *
 * These routines are used to locate the data used to satisfy
 * requests.
 * 
 * @{
 */
/**********************************************************************
 **********************************************************************
 ***
 *** Table dot11ConfTotalTrapGroupTable
 ***
 **********************************************************************
 **********************************************************************/
/*
 * dot11ConfTotalTrapGroupTable is subid 1 of dot11ConfTotalTrapGroup.
 * Its status is Current.
 * OID: .1.3.6.1.4.1.31656.6.1.2.24.1, length: 12
*/

/**
 * initialization for dot11ConfTotalTrapGroupTable data access
 *
 * This function is called during startup to allow you to
 * allocate any resources you need for the data table.
 *
 * @param dot11ConfTotalTrapGroupTable_reg
 *        Pointer to dot11ConfTotalTrapGroupTable_registration
 *
 * @retval MFD_SUCCESS : success.
 * @retval MFD_ERROR   : unrecoverable error.
 */
int
dot11ConfTotalTrapGroupTable_init_data(dot11ConfTotalTrapGroupTable_registration_ptr dot11ConfTotalTrapGroupTable_reg)
{
    DEBUGMSGTL(("verbose:dot11ConfTotalTrapGroupTable:dot11ConfTotalTrapGroupTable_init_data","called\n"));

    /*
     * TODO:303:o: Initialize dot11ConfTotalTrapGroupTable data.
     */
    /*
    ***************************************************
    ***             START EXAMPLE CODE              ***
    ***---------------------------------------------***/
    /*
     * if you are the sole writer for the file, you could
     * open it here. However, as stated earlier, we are assuming
     * the worst case, which in this case means that the file is
     * written to by someone else, and might not even exist when
     * we start up. So we can't do anything here.
     */
    /*
    ***---------------------------------------------***
    ***              END  EXAMPLE CODE              ***
    ***************************************************/

    return MFD_SUCCESS;
} /* dot11ConfTotalTrapGroupTable_init_data */

/**
 * container-cached overview
 *
 */

/***********************************************************************
 *
 * cache
 *
 ***********************************************************************/
/**
 * container initialization
 *
 * @param container_ptr_ptr A pointer to a container pointer. If you
 *        create a custom container, use this parameter to return it
 *        to the MFD helper. If set to NULL, the MFD helper will
 *        allocate a container for you.
 * @param  cache A pointer to a cache structure. You can set the timeout
 *         and other cache flags using this pointer.
 *
 *  This function is called at startup to allow you to customize certain
 *  aspects of the access method. For the most part, it is for advanced
 *  users. The default code should suffice for most cases. If no custom
 *  container is allocated, the MFD code will create one for your.
 *
 *  This is also the place to set up cache behavior. The default, to
 *  simply set the cache timeout, will work well with the default
 *  container. If you are using a custom container, you may want to
 *  look at the cache helper documentation to see if there are any
 *  flags you want to set.
 *
 * @remark
 *  This would also be a good place to do any initialization needed
 *  for you data source. For example, opening a connection to another
 *  process that will supply the data, opening a database, etc.
 */
void
dot11ConfTotalTrapGroupTable_container_init(netsnmp_container **container_ptr_ptr,
                        netsnmp_cache *cache)
{
    DEBUGMSGTL(("verbose:dot11ConfTotalTrapGroupTable:dot11ConfTotalTrapGroupTable_container_init","called\n"));
    
    if((NULL == cache) || (NULL == container_ptr_ptr)) {
        snmp_log(LOG_ERR,"bad params to dot11ConfTotalTrapGroupTable_container_init\n");
        return;
    }

    /*
     * For advanced users, you can use a custom container. If you
     * do not create one, one will be created for you.
     */
    *container_ptr_ptr = NULL;

    /*
     * TODO:345:A: Set up dot11ConfTotalTrapGroupTable cache properties.
     *
     * Also for advanced users, you can set parameters for the
     * cache. Do not change the magic pointer, as it is used
     * by the MFD helper. To completely disable caching, set
     * cache->enabled to 0.
     */
    cache->timeout = DOT11CONFTOTALTRAPGROUPTABLE_CACHE_TIMEOUT; /* seconds */
} /* dot11ConfTotalTrapGroupTable_container_init */

/**
 * load cache data
 *
 * TODO:350:M: Implement dot11ConfTotalTrapGroupTable cache load
 *
 * @param container container to which items should be inserted
 *
 * @retval MFD_SUCCESS              : success.
 * @retval MFD_RESOURCE_UNAVAILABLE : Can't access data source
 * @retval MFD_ERROR                : other error.
 *
 *  This function is called to cache the index(es) (and data, optionally)
 *  for the every row in the data set.
 *
 * @remark
 *  While loading the cache, the only important thing is the indexes.
 *  If access to your data is cheap/fast (e.g. you have a pointer to a
 *  structure in memory), it would make sense to update the data here.
 *  If, however, the accessing the data invovles more work (e.g. parsing
 *  some other existing data, or peforming calculations to derive the data),
 *  then you can limit yourself to setting the indexes and saving any
 *  information you will need later. Then use the saved information in
 *  dot11ConfTotalTrapGroupTable_row_prep() for populating data.
 *
 * @note
 *  If you need consistency between rows (like you want statistics
 *  for each row to be from the same time frame), you should set all
 *  data here.
 *
 */
int
dot11ConfTotalTrapGroupTable_cache_load(netsnmp_container *container)
{
	snmp_log(LOG_DEBUG, "enter dot11ConfTotalTrapGroupTable_cache_load\n");

    dot11ConfTotalTrapGroupTable_rowreq_ctx *rowreq_ctx;
    size_t                 count = 0;
    
    /*
     * this example code is based on a data source that is a
     * text file to be read and parsed.
     */
    //FILE *filep;
    //char line[MAX_LINE_SIZE];
    /*
     * temporary storage for index values
     */
        /*
         * NewTrapIndex(1)/INTEGER/ASN_INTEGER/long(long)//l/A/w/e/r/d/h
         */
   long   NewTrapIndex;

    DEBUGMSGTL(("verbose:dot11ConfTotalTrapGroupTable:dot11ConfTotalTrapGroupTable_cache_load","called\n"));

    /*
    ***************************************************
    ***             START EXAMPLE CODE              ***
    ***---------------------------------------------***/
    /*
     * open our data file.
     */
    //filep = fopen("/etc/dummy.conf", "r");
    //if(NULL ==  filep) {
        //return MFD_RESOURCE_UNAVAILABLE;
    //}

    /*
    ***---------------------------------------------***
    ***              END  EXAMPLE CODE              ***
    ***************************************************/
    /*
     * TODO:351:M: |-> Load/update data in the dot11ConfTotalTrapGroupTable container.
     * loop over your dot11ConfTotalTrapGroupTable data, allocate a rowreq context,
     * set the index(es) [and data, optionally] and insert into
     * the container.
     */
    TRAP_DETAIL_CONFIG *trapDetail_array = NULL;
    unsigned int trapDetail_num = 0;
    
    int ret = ac_manage_show_trap_switch(ccgi_dbus_connection, &trapDetail_array, &trapDetail_num);
    if(AC_MANAGE_SUCCESS == ret) {
    
        int i = 0;
    	for(i = 0; i < trapDetail_num; i++) {	
    	    unsigned int trapSwitch = 0;
    		
			if(0 == trapDetail_array[i].trapSwitch)
			{
				trapSwitch = 2;
			}
			else if(1 == trapDetail_array[i].trapSwitch)
			{
				trapSwitch = 1;
			}	

		
    /*
    ***************************************************
    ***             START EXAMPLE CODE              ***
    ***---------------------------------------------***/
    /*
     * get a line (skip blank lines)
     */
    //do {
      //  if (!fgets(line, sizeof(line), filep)) {
            /* we're done */
        //    fclose(filep);
          //  filep = NULL;
        //}
    //} while (filep && (line[0] == '\n'));

    /*
     * check for end of data
     */
    //if(NULL == filep)
      //  break;

    /*
     * parse line into variables
     */
    /*
    ***---------------------------------------------***
    ***              END  EXAMPLE CODE              ***
    ***************************************************/

        /*
         * TODO:352:M: |   |-> set indexes in new dot11ConfTotalTrapGroupTable rowreq context.
         */
        rowreq_ctx = dot11ConfTotalTrapGroupTable_allocate_rowreq_ctx();
        if (NULL == rowreq_ctx) {
            snmp_log(LOG_ERR, "memory allocation failed\n");
			MANAGE_FREE(trapDetail_array);
            return MFD_RESOURCE_UNAVAILABLE;
        }

		NewTrapIndex = i+1;
        if(MFD_SUCCESS != dot11ConfTotalTrapGroupTable_indexes_set(rowreq_ctx
                               , NewTrapIndex
               )) {
            snmp_log(LOG_ERR,"error setting index while loading "
                     "dot11ConfTotalTrapGroupTable cache.\n");
            dot11ConfTotalTrapGroupTable_release_rowreq_ctx(rowreq_ctx);
            continue;
        }

        /*
         * TODO:352:r: |   |-> populate dot11ConfTotalTrapGroupTable data context.
         * Populate data context here. (optionally, delay until row prep)
         */
    /*
     * TRANSIENT or semi-TRANSIENT data:
     * copy data or save any info needed to do it in row_prep.
     */
    /*
     * setup/save data for NewTrapName
     * NewTrapName(2)/DisplayString/ASN_OCTET_STR/char(char)//L/A/w/e/R/d/H
     */
    /*
     * TODO:246:r: |-> Define NewTrapName mapping.
     * Map values between raw/native values and MIB values
     *
     * if(MFD_SUCCESS !=
     *    NewTrapName_map(&rowreq_ctx->data.NewTrapName, &rowreq_ctx->data.NewTrapName_len,
     *                NewTrapName, NewTrapName_len, 0)) {
     *    return MFD_ERROR;
     * }
     */
    /*
     * make sure there is enough space for NewTrapName data
     */
    /*if ((NULL == rowreq_ctx->data.NewTrapName) ||
        (rowreq_ctx->data.NewTrapName_len < (NewTrapName_len * sizeof(rowreq_ctx->data.NewTrapName[0])))) {
        snmp_log(LOG_ERR,"not enough space for value\n");
        return MFD_ERROR;
    }*/    

	unsigned int NewTrapName_len = MIN(strlen(trapDetail_array[i].trapName), sizeof( rowreq_ctx->data.NewTrapName) - 1);
    rowreq_ctx->data.NewTrapName_len = NewTrapName_len * sizeof(rowreq_ctx->data.NewTrapName[0]);
    memcpy( rowreq_ctx->data.NewTrapName, trapDetail_array[i].trapName, rowreq_ctx->data.NewTrapName_len );
    
    /*
     * setup/save data for NewTrapDescr
     * NewTrapDescr(3)/DisplayString/ASN_OCTET_STR/char(char)//L/A/W/e/R/d/H
     */
    /*
     * TODO:246:r: |-> Define NewTrapDescr mapping.
     * Map values between raw/native values and MIB values
     *
     * if(MFD_SUCCESS !=
     *    NewTrapDescr_map(&rowreq_ctx->data.NewTrapDescr, &rowreq_ctx->data.NewTrapDescr_len,
     *                NewTrapDescr, NewTrapDescr_len, 0)) {
     *    return MFD_ERROR;
     * }
     */
    /*
     * make sure there is enough space for NewTrapDescr data
     */
    /*if ((NULL == rowreq_ctx->data.NewTrapDescr) ||
        (rowreq_ctx->data.NewTrapDescr_len < (NewTrapDescr_len * sizeof(rowreq_ctx->data.NewTrapDescr[0])))) {
        snmp_log(LOG_ERR,"not enough space for value\n");
        return MFD_ERROR;
    }*/

	unsigned int NewTrapDescr_len = MIN(strlen(trapDetail_array[i].trapEDes), sizeof(rowreq_ctx->data.NewTrapDescr) - 1);
    rowreq_ctx->data.NewTrapDescr_len = NewTrapDescr_len * sizeof(rowreq_ctx->data.NewTrapDescr[0]);
    memcpy( rowreq_ctx->data.NewTrapDescr, trapDetail_array[i].trapEDes, rowreq_ctx->data.NewTrapDescr_len );
    
    /*
     * setup/save data for NewTrapOnOff
     * NewTrapOnOff(4)/INTEGER/ASN_INTEGER/long(u_long)//l/A/W/E/r/d/h
     */
    /*
     * TODO:246:r: |-> Define NewTrapOnOff mapping.
     * Map values between raw/native values and MIB values
     *
    * enums usually need mapping.
    */
    if(MFD_SUCCESS !=
       NewTrapOnOff_map(&rowreq_ctx->data.NewTrapOnOff, trapSwitch )) {
        return MFD_ERROR;
    }
    
        
        /*
         * insert into table container
         */
            if(CONTAINER_INSERT(container, rowreq_ctx))			
    		{
            	dot11ConfTotalTrapGroupTable_release_rowreq_ctx(rowreq_ctx);
            }
            ++count;
        }
		MANAGE_FREE(trapDetail_array);
    }

    /*
    ***************************************************
    ***             START EXAMPLE CODE              ***
    ***---------------------------------------------***/
    //if(NULL != filep)
        //fclose(filep);
    /*
    ***---------------------------------------------***
    ***              END  EXAMPLE CODE              ***
    ***************************************************/

    DEBUGMSGT(("verbose:dot11ConfTotalTrapGroupTable:dot11ConfTotalTrapGroupTable_cache_load",
               "inserted %d records\n", count));
	
	snmp_log(LOG_DEBUG, "exit dot11ConfTotalTrapGroupTable_cache_load\n");
    return MFD_SUCCESS;
} /* dot11ConfTotalTrapGroupTable_cache_load */

/**
 * cache clean up
 *
 * @param container container with all current items
 *
 *  This optional callback is called prior to all
 *  item's being removed from the container. If you
 *  need to do any processing before that, do it here.
 *
 * @note
 *  The MFD helper will take care of releasing all the row contexts.
 *
 */
void
dot11ConfTotalTrapGroupTable_cache_free(netsnmp_container *container)
{
    DEBUGMSGTL(("verbose:dot11ConfTotalTrapGroupTable:dot11ConfTotalTrapGroupTable_cache_free","called\n"));

    /*
     * TODO:380:M: Free dot11ConfTotalTrapGroupTable cache.
     */
} /* dot11ConfTotalTrapGroupTable_cache_free */

/**
 * prepare row for processing.
 *
 *  When the agent has located the row for a request, this function is
 *  called to prepare the row for processing. If you fully populated
 *  the data context during the index setup phase, you may not need to
 *  do anything.
 *
 * @param rowreq_ctx pointer to a context.
 *
 * @retval MFD_SUCCESS     : success.
 * @retval MFD_ERROR       : other error.
 */
int
dot11ConfTotalTrapGroupTable_row_prep( dot11ConfTotalTrapGroupTable_rowreq_ctx *rowreq_ctx)
{
    DEBUGMSGTL(("verbose:dot11ConfTotalTrapGroupTable:dot11ConfTotalTrapGroupTable_row_prep","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * TODO:390:o: Prepare row for request.
     * If populating row data was delayed, this is the place to
     * fill in the row for this request.
     */

    return MFD_SUCCESS;
} /* dot11ConfTotalTrapGroupTable_row_prep */

/** @} */
