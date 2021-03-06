/*
 * Note: this file originally auto-generated by mib2c using
 *       version : 14170 $ of $ 
 *
 * $Id:$
 */
/* standard Net-SNMP includes */
#include <net-snmp/net-snmp-config.h>
#include <net-snmp/net-snmp-includes.h>
#include <net-snmp/agent/net-snmp-agent-includes.h>

/* include our parent header */
#include "dot11WtpWirelessAuthTable.h"


#include "dot11WtpWirelessAuthTable_data_access.h"

#include "wcpss/asd/asd.h"
#include "wcpss/wid/WID.h"
#include "dbus/wcpss/dcli_wid_wtp.h"
#include "dbus/wcpss/dcli_wid_wlan.h"
#include "ws_dbus_list_interface.h"


/** @ingroup interface
 * @addtogroup data_access data_access: Routines to access data
 *
 * These routines are used to locate the data used to satisfy
 * requests.
 * 
 * @{
 */
/**********************************************************************
 **********************************************************************
 ***
 *** Table dot11WtpWirelessAuthTable
 ***
 **********************************************************************
 **********************************************************************/
/*
 * DOT11-WTP-MIB::dot11WtpWirelessAuthTable is subid 5 of wlanPortal.
 * Its status is Current.
 * OID: .1.3.6.1.4.1.31656.6.1.1.17.5, length: 12
*/

/**
 * initialization for dot11WtpWirelessAuthTable data access
 *
 * This function is called during startup to allow you to
 * allocate any resources you need for the data table.
 *
 * @param dot11WtpWirelessAuthTable_reg
 *        Pointer to dot11WtpWirelessAuthTable_registration
 *
 * @retval MFD_SUCCESS : success.
 * @retval MFD_ERROR   : unrecoverable error.
 */
int
dot11WtpWirelessAuthTable_init_data(dot11WtpWirelessAuthTable_registration * dot11WtpWirelessAuthTable_reg)
{
    DEBUGMSGTL(("verbose:dot11WtpWirelessAuthTable:dot11WtpWirelessAuthTable_init_data","called\n"));

    /*
     * TODO:303:o: Initialize dot11WtpWirelessAuthTable data.
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
} /* dot11WtpWirelessAuthTable_init_data */

/**
 * container overview
 *
 */

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
dot11WtpWirelessAuthTable_container_init(netsnmp_container **container_ptr_ptr,
                             netsnmp_cache *cache)
{
    DEBUGMSGTL(("verbose:dot11WtpWirelessAuthTable:dot11WtpWirelessAuthTable_container_init","called\n"));
    
    if (NULL == container_ptr_ptr) {
        snmp_log(LOG_ERR,"bad container param to dot11WtpWirelessAuthTable_container_init\n");
        return;
    }

    /*
     * For advanced users, you can use a custom container. If you
     * do not create one, one will be created for you.
     */
    *container_ptr_ptr = NULL;

    if (NULL == cache) {
        snmp_log(LOG_ERR,"bad cache param to dot11WtpWirelessAuthTable_container_init\n");
        return;
    }

    /*
     * TODO:345:A: Set up dot11WtpWirelessAuthTable cache properties.
     *
     * Also for advanced users, you can set parameters for the
     * cache. Do not change the magic pointer, as it is used
     * by the MFD helper. To completely disable caching, set
     * cache->enabled to 0.
     */
    cache->timeout = DOT11WTPWIRELESSAUTHTABLE_CACHE_TIMEOUT; /* seconds */
} /* dot11WtpWirelessAuthTable_container_init */

/**
 * container shutdown
 *
 * @param container_ptr A pointer to the container.
 *
 *  This function is called at shutdown to allow you to customize certain
 *  aspects of the access method. For the most part, it is for advanced
 *  users. The default code should suffice for most cases.
 *
 *  This function is called before dot11WtpWirelessAuthTable_container_free().
 *
 * @remark
 *  This would also be a good place to do any cleanup needed
 *  for you data source. For example, closing a connection to another
 *  process that supplied the data, closing a database, etc.
 */
void
dot11WtpWirelessAuthTable_container_shutdown(netsnmp_container *container_ptr)
{
    DEBUGMSGTL(("verbose:dot11WtpWirelessAuthTable:dot11WtpWirelessAuthTable_container_shutdown","called\n"));
    
    if (NULL == container_ptr) {
        snmp_log(LOG_ERR,"bad params to dot11WtpWirelessAuthTable_container_shutdown\n");
        return;
    }

} /* dot11WtpWirelessAuthTable_container_shutdown */

/**
 * load initial data
 *
 * TODO:350:M: Implement dot11WtpWirelessAuthTable data load
 * This function will also be called by the cache helper to load
 * the container again (after the container free function has been
 * called to free the previous contents).
 *
 * @param container container to which items should be inserted
 *
 * @retval MFD_SUCCESS              : success.
 * @retval MFD_RESOURCE_UNAVAILABLE : Can't access data source
 * @retval MFD_ERROR                : other error.
 *
 *  This function is called to load the index(es) (and data, optionally)
 *  for the every row in the data set.
 *
 * @remark
 *  While loading the data, the only important thing is the indexes.
 *  If access to your data is cheap/fast (e.g. you have a pointer to a
 *  structure in memory), it would make sense to update the data here.
 *  If, however, the accessing the data invovles more work (e.g. parsing
 *  some other existing data, or peforming calculations to derive the data),
 *  then you can limit yourself to setting the indexes and saving any
 *  information you will need later. Then use the saved information in
 *  dot11WtpWirelessAuthTable_row_prep() for populating data.
 *
 * @note
 *  If you need consistency between rows (like you want statistics
 *  for each row to be from the same time frame), you should set all
 *  data here.
 *
 */
int
dot11WtpWirelessAuthTable_container_load(netsnmp_container *container)
{
	snmp_log(LOG_DEBUG, "enter dot11WtpWirelessAuthTable_container_load\n");

    dot11WtpWirelessAuthTable_rowreq_ctx *rowreq_ctx;
    size_t                 count = 0;

	instance_parameter *paraHead = NULL;
	instance_parameter *pq = NULL;
    int ret = 0;    
    struct WtpStationinfo *wtpStaHead = NULL;

	snmp_log(LOG_DEBUG, "enter list_instance_parameter\n");
    list_instance_parameter(&paraHead, SNMPD_INSTANCE_MASTER); 
	snmp_log(LOG_DEBUG, "exit list_instance_parameter,paraHead=%p\n", paraHead);
	for(pq = paraHead; (NULL != pq); pq = pq->next)
	{
	    ret = show_all_wtp_station_statistic_information_cmd(pq->parameter, pq->connection, &wtpStaHead);
	    if(1 == ret && wtpStaHead) {
	        struct WtpStationinfo *wtpStaNode = NULL;
	        for(wtpStaNode = wtpStaHead; NULL != wtpStaNode; wtpStaNode = wtpStaNode->next) {

	        if(NULL == wtpStaNode->wtpMacAddr) {
	            continue;
	        }

	        size_t wtpMacAddr_len = strlen(wtpStaNode->wtpMacAddr);
	        
	        /*
	         * TODO:352:M: |   |-> set indexes in new dot11WtpWirelessAuthTable rowreq context.
	         * data context will be set from the param (unless NULL,
	         *      in which case a new data context will be allocated)
	         */
	        rowreq_ctx = dot11WtpWirelessAuthTable_allocate_rowreq_ctx(NULL);
	        if (NULL == rowreq_ctx) {
	            snmp_log(LOG_ERR, "memory allocation failed\n");
				Free_show_all_wtp_station_statistic_information_cmd(wtpStaHead);
				free_instance_parameter_list(&paraHead);
	            return MFD_RESOURCE_UNAVAILABLE;
	        }
	        if(MFD_SUCCESS != dot11WtpWirelessAuthTable_indexes_set(rowreq_ctx
	                               , wtpStaNode->wtpMacAddr, wtpMacAddr_len
	               )) {
	            snmp_log(LOG_ERR,"error setting index while loading "
	                     "dot11WtpWirelessAuthTable data.\n");
	            dot11WtpWirelessAuthTable_release_rowreq_ctx(rowreq_ctx);
	            continue;
	        }

	        /*
	         * TODO:352:r: |   |-> populate dot11WtpWirelessAuthTable data context.
	         * Populate data context here. (optionally, delay until row prep)
	         */
	    /*
	     * TRANSIENT or semi-TRANSIENT data:
	     * copy data or save any info needed to do it in row_prep.
	     */
	    /*
	     * setup/save data for authFreeCurusernum
	     * authFreeCurusernum(1)/COUNTER/ASN_COUNTER/u_long(u_long)//l/A/w/e/r/d/h
	     */
	    /** no mapping */
	    rowreq_ctx->data.authFreeCurusernum = wtpStaNode->no_auth_sta_num;
	    
	    /*
	     * setup/save data for authFreeErrLogoffnum
	     * authFreeErrLogoffnum(2)/COUNTER/ASN_COUNTER/u_long(u_long)//l/A/w/e/r/d/h
	     */
	    /** no mapping */
	    rowreq_ctx->data.authFreeErrLogoffnum = wtpStaNode->no_auth_sta_abnormal_down_num;
	    
	    /*
	     * setup/save data for authFreeAllUserOnlineTime
	     * authFreeAllUserOnlineTime(3)/TICKS/ASN_TIMETICKS/u_long(u_long)//l/A/w/e/r/d/h
	     */
	    /** no mapping */
	    rowreq_ctx->data.authFreeAllUserOnlineTime = wtpStaNode->no_auth_accessed_total_time;
	    
	    /*
	     * setup/save data for assocAuthCurusernum
	     * assocAuthCurusernum(4)/COUNTER/ASN_COUNTER/u_long(u_long)//l/A/w/e/r/d/h
	     */
	    /** no mapping */
	    rowreq_ctx->data.assocAuthCurusernum = wtpStaNode->assoc_auth_sta_num;
	    
	    /*
	     * setup/save data for assocAuthErrLogoffnum
	     * assocAuthErrLogoffnum(5)/COUNTER/ASN_COUNTER/u_long(u_long)//l/A/w/e/r/d/h
	     */
	    /** no mapping */
	    rowreq_ctx->data.assocAuthErrLogoffnum = wtpStaNode->assoc_auth_sta_abnormal_down_num;
	    
	    /*
	     * setup/save data for assocAuthReqnum
	     * assocAuthReqnum(6)/COUNTER/ASN_COUNTER/u_long(u_long)//l/A/w/e/r/d/h
	     */
	    /** no mapping */
	    rowreq_ctx->data.assocAuthReqnum = wtpStaNode->assoc_auth_req_num;
	    
	    /*
	     * setup/save data for assocAuthReqsuccnum
	     * assocAuthReqsuccnum(7)/COUNTER/ASN_COUNTER/u_long(u_long)//l/A/w/e/r/d/h
	     */
	    /** no mapping */
	    rowreq_ctx->data.assocAuthReqsuccnum = wtpStaNode->assoc_auth_succ_num;
	    
	    /*
	     * setup/save data for assocAuthReqfailnum
	     * assocAuthReqfailnum(8)/COUNTER/ASN_COUNTER/u_long(u_long)//l/A/w/e/r/d/h
	     */
	    /** no mapping */
	    rowreq_ctx->data.assocAuthReqfailnum = wtpStaNode->assoc_auth_fail_num;
	    
	    /*
	     * setup/save data for assocAuthAllUserOnlineTime
	     * assocAuthAllUserOnlineTime(9)/TICKS/ASN_TIMETICKS/u_long(u_long)//l/A/w/e/r/d/h
	     */
	    /** no mapping */
	    rowreq_ctx->data.assocAuthAllUserOnlineTime = wtpStaNode->assoc_auth_accessed_total_time;
	/*
		 * setup/save data for assocAuthOnlineUsernum
		 * assocAuthOnlineUsernum(10)/INTEGER/ASN_INTEGER/long(long)//l/A/w/e/r/d/h
		 */
		/** no mapping */
		rowreq_ctx->data.assocAuthOnlineUsernum = wtpStaNode->assoc_auth_online_sta_num;
		
		/*
		 * setup/save data for allAssociateAuthUserOnlineTime
		 * allAssociateAuthUserOnlineTime(11)/TICKS/ASN_TIMETICKS/u_long(u_long)//l/A/w/e/r/d/h
		 */
		/** no mapping */
		rowreq_ctx->data.allAssociateAuthUserOnlineTime = wtpStaNode->all_assoc_auth_sta_total_time*100;
		
		/*
		 * setup/save data for assocAuthUserLostConnectionCnt
		 * assocAuthUserLostConnectionCnt(12)/COUNTER/ASN_COUNTER/u_long(u_long)//l/A/w/e/r/d/h
		 */
		/** no mapping */
		rowreq_ctx->data.assocAuthUserLostConnectionCnt = wtpStaNode->assoc_auth_sta_drop_cnt;
		
		/*
		 * setup/save data for autoAuthOnlineUsernum
		 * autoAuthOnlineUsernum(13)/INTEGER/ASN_INTEGER/long(long)//l/A/w/e/r/d/h
		 */
		/** no mapping */
		rowreq_ctx->data.autoAuthOnlineUsernum = wtpStaNode->auto_auth_online_sta_num;
		
		/*
		 * setup/save data for allAutoAuthUserOnlineTime
		 * allAutoAuthUserOnlineTime(14)/TICKS/ASN_TIMETICKS/u_long(u_long)//l/A/w/e/r/d/h
		 */
		/** no mapping */
		rowreq_ctx->data.allAutoAuthUserOnlineTime = wtpStaNode->auto_auth_sta_total_time*100;
		
		/*
		 * setup/save data for autoAuthUserLostConnectionCnt
		 * autoAuthUserLostConnectionCnt(15)/COUNTER/ASN_COUNTER/u_long(u_long)//l/A/w/e/r/d/h
		 */
		/** no mapping */
		rowreq_ctx->data.autoAuthUserLostConnectionCnt = wtpStaNode->auto_auth_sta_drop_cnt;
		
		/*
		 * setup/save data for autoAuthReqCnt
		 * autoAuthReqCnt(16)/COUNTER/ASN_COUNTER/u_long(u_long)//l/A/w/e/r/d/h
		 */
		/** no mapping */
		rowreq_ctx->data.autoAuthReqCnt = wtpStaNode->auto_auth_req_cnt;
		
		/*
		 * setup/save data for autoAuthSucCnt
		 * autoAuthSucCnt(17)/COUNTER/ASN_COUNTER/u_long(u_long)//l/A/w/e/r/d/h
		 */
		/** no mapping */
		rowreq_ctx->data.autoAuthSucCnt = wtpStaNode->auto_auth_suc_cnt;
		
		/*
		 * setup/save data for autoAuthReqFailCnt
		 * autoAuthReqFailCnt(18)/COUNTER/ASN_COUNTER/u_long(u_long)//l/A/w/e/r/d/h
		 */
		/** no mapping */
		rowreq_ctx->data.autoAuthReqFailCnt = wtpStaNode->auto_auth_fail_cnt;        /*
	         * insert into table container
	         */
	            if(CONTAINER_INSERT(container, rowreq_ctx)) {
	                dot11WtpWirelessAuthTable_release_rowreq_ctx(rowreq_ctx);
	            }
	            ++count;
	        }
	        Free_show_all_wtp_station_statistic_information_cmd(wtpStaHead);
	    }	
	}
	free_instance_parameter_list(&paraHead);

    DEBUGMSGT(("verbose:dot11WtpWirelessAuthTable:dot11WtpWirelessAuthTable_container_load",
               "inserted %d records\n", count));

	snmp_log(LOG_DEBUG, "exit dot11WtpWirelessAuthTable_container_load, count = %d\n", count);
	
    return MFD_SUCCESS;
} /* dot11WtpWirelessAuthTable_container_load */

/**
 * container clean up
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
dot11WtpWirelessAuthTable_container_free(netsnmp_container *container)
{
    DEBUGMSGTL(("verbose:dot11WtpWirelessAuthTable:dot11WtpWirelessAuthTable_container_free","called\n"));

    /*
     * TODO:380:M: Free dot11WtpWirelessAuthTable container data.
     */
} /* dot11WtpWirelessAuthTable_container_free */

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
dot11WtpWirelessAuthTable_row_prep( dot11WtpWirelessAuthTable_rowreq_ctx *rowreq_ctx)
{
    DEBUGMSGTL(("verbose:dot11WtpWirelessAuthTable:dot11WtpWirelessAuthTable_row_prep","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * TODO:390:o: Prepare row for request.
     * If populating row data was delayed, this is the place to
     * fill in the row for this request.
     */

    return MFD_SUCCESS;
} /* dot11WtpWirelessAuthTable_row_prep */

/** @} */
