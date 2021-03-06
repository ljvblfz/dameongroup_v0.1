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
#include "dot11WtpWirelessIfstatsTable.h"
#include "dot11WtpWirelessIfstatsTable_data_access.h"
#include "wcpss/asd/asd.h"
#include "wcpss/wid/WID.h"
#include "dbus/wcpss/dcli_wid_wtp.h"
#include "dbus/wcpss/dcli_wid_wlan.h"
#include "ws_dcli_wlans.h"
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
 *** Table dot11WtpWirelessIfstatsTable
 ***
 **********************************************************************
 **********************************************************************/
/*
 * dot11WtpWirelessIfstatsTable is subid 5 of wtpInterface.
 * Its status is Current.
 * OID: .1.3.6.1.4.1.33050.6.1.1.3.5, length: 12
*/

/**
 * initialization for dot11WtpWirelessIfstatsTable data access
 *
 * This function is called during startup to allow you to
 * allocate any resources you need for the data table.
 *
 * @param dot11WtpWirelessIfstatsTable_reg
 *        Pointer to dot11WtpWirelessIfstatsTable_registration
 *
 * @retval MFD_SUCCESS : success.
 * @retval MFD_ERROR   : unrecoverable error.
 */
int
dot11WtpWirelessIfstatsTable_init_data(dot11WtpWirelessIfstatsTable_registration_ptr dot11WtpWirelessIfstatsTable_reg)
{
    DEBUGMSGTL(("verbose:dot11WtpWirelessIfstatsTable:dot11WtpWirelessIfstatsTable_init_data","called\n"));

    /*
     * TODO:303:o: Initialize dot11WtpWirelessIfstatsTable data.
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
} /* dot11WtpWirelessIfstatsTable_init_data */

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
dot11WtpWirelessIfstatsTable_container_init(netsnmp_container **container_ptr_ptr,
                        netsnmp_cache *cache)
{
    DEBUGMSGTL(("verbose:dot11WtpWirelessIfstatsTable:dot11WtpWirelessIfstatsTable_container_init","called\n"));
    
    if((NULL == cache) || (NULL == container_ptr_ptr)) {
        snmp_log(LOG_ERR,"bad params to dot11WtpWirelessIfstatsTable_container_init\n");
        return;
    }

    /*
     * For advanced users, you can use a custom container. If you
     * do not create one, one will be created for you.
     */
    *container_ptr_ptr = NULL;

    /*
     * TODO:345:A: Set up dot11WtpWirelessIfstatsTable cache properties.
     *
     * Also for advanced users, you can set parameters for the
     * cache. Do not change the magic pointer, as it is used
     * by the MFD helper. To completely disable caching, set
     * cache->enabled to 0.
     */
    cache->timeout = DOT11WTPWIRELESSIFSTATSTABLE_CACHE_TIMEOUT; /* seconds */
} /* dot11WtpWirelessIfstatsTable_container_init */

/**
 * load cache data
 *
 * TODO:350:M: Implement dot11WtpWirelessIfstatsTable cache load
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
 *  dot11WtpWirelessIfstatsTable_row_prep() for populating data.
 *
 * @note
 *  If you need consistency between rows (like you want statistics
 *  for each row to be from the same time frame), you should set all
 *  data here.
 *
 */
int
dot11WtpWirelessIfstatsTable_cache_load(netsnmp_container *container)
{
	snmp_log(LOG_DEBUG, "enter dot11WtpWirelessIfstatsTable_cache_load\n");

    dot11WtpWirelessIfstatsTable_rowreq_ctx *rowreq_ctx;
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
         * wtpMacAddr(1)/Dot11BaseWtpIdTC/ASN_OCTET_STR/char(char)//L/A/w/e/r/d/h
         */
        /** 128 - 1(entry) - 1(col) - 1(other indexes) = 111 */
   char   wtpMacAddr[20];
   size_t      wtpMacAddr_len = 0;
        /*
         * wtpWirelessIfIndex(1)/INTEGER/ASN_INTEGER/long(long)//l/A/w/e/r/d/h
         */
   long   wtpWirelessIfIndex = 0;

    DEBUGMSGTL(("verbose:dot11WtpWirelessIfstatsTable:dot11WtpWirelessIfstatsTable_cache_load","called\n"));

    /*
    ***************************************************
    ***             START EXAMPLE CODE              ***
    ***---------------------------------------------***/
    /*
     * open our data file.
     */
    //filep = fopen("/etc/dummy.conf", "r");
    //if(NULL ==  filep) {
      //  return MFD_RESOURCE_UNAVAILABLE;
    //}

    /*
    ***---------------------------------------------***
    ***              END  EXAMPLE CODE              ***
    ***************************************************/
    /*
     * TODO:351:M: |-> Load/update data in the dot11WtpWirelessIfstatsTable container.
     * loop over your dot11WtpWirelessIfstatsTable data, allocate a rowreq context,
     * set the index(es) [and data, optionally] and insert into
     * the container.
     */
    snmpd_dbus_message *messageHead = NULL, *messageNode = NULL;
    
    snmp_log(LOG_DEBUG, "enter list_connection_call_dbus_method:show_all_wtp_wirelessifstats_information_cmd\n");
    messageHead = list_connection_call_dbus_method(show_all_wtp_wirelessifstats_information_cmd, SHOW_ALL_WTP_TABLE_METHOD);
	snmp_log(LOG_DEBUG, "exit list_connection_call_dbus_method:show_all_wtp_wirelessifstats_information_cmd,messageHead=%p\n", messageHead);

	
	if(messageHead)
	{
		for(messageNode = messageHead; NULL != messageNode; messageNode = messageNode->next)
		{
		    struct WtpWirelessIfstatsInfo *WtpHead = messageNode->message;
		    if(WtpHead)
		    {
                struct WtpWirelessIfstatsInfo *q = NULL;	
        		for(q = WtpHead->WtpWirelessIfstatsInfo_list; q != NULL; q = q->next)
        		{
        			memset(wtpMacAddr,0,20);
					if(q->wtpMacAddr)
					{
						snprintf(wtpMacAddr,sizeof(wtpMacAddr)-1,"%02X:%02X:%02X:%02X:%02X:%02X",q->wtpMacAddr[0],q->wtpMacAddr[1],q->wtpMacAddr[2],q->wtpMacAddr[3],q->wtpMacAddr[4],q->wtpMacAddr[5]);
					}

        			struct WtpWirelessIfstatsInfo_radio *sub_radio = q->wireless_sub_radio_head;;
                    int i = 0;
        			for(i=0;i<q->wtp_radio_num;i++)
        			{
        				wtpWirelessIfIndex = sub_radio->wtpWirelessIfIndex + 1;
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
         * TODO:352:M: |   |-> set indexes in new dot11WtpWirelessIfstatsTable rowreq context.
         */
        rowreq_ctx = dot11WtpWirelessIfstatsTable_allocate_rowreq_ctx();
        if (NULL == rowreq_ctx) {
            snmp_log(LOG_ERR, "memory allocation failed\n");
            free_dbus_message_list(&messageHead, Free_show_all_wtp_wirelessifstats_information_cmd);
            return MFD_RESOURCE_UNAVAILABLE;
        }
		
		wtpMacAddr_len = strlen(wtpMacAddr);
        if(MFD_SUCCESS != dot11WtpWirelessIfstatsTable_indexes_set(rowreq_ctx
                               , wtpMacAddr, wtpMacAddr_len
                               , wtpWirelessIfIndex
               )) {
            snmp_log(LOG_ERR,"error setting index while loading "
                     "dot11WtpWirelessIfstatsTable cache.\n");
            dot11WtpWirelessIfstatsTable_release_rowreq_ctx(rowreq_ctx);
			sub_radio = sub_radio->next;
            continue;
        }

        /*
         * TODO:352:r: |   |-> populate dot11WtpWirelessIfstatsTable data context.
         * Populate data context here. (optionally, delay until row prep)
         */
    /*
     * TRANSIENT or semi-TRANSIENT data:
     * copy data or save any info needed to do it in row_prep.
     */
    /*
     * setup/save data for wirelessIfAvgRxSignalStrength
     * wirelessIfAvgRxSignalStrength(1)/INTEGER/ASN_INTEGER/long(long)//l/A/w/e/r/d/h
     */
    /*
     * TODO:246:r: |-> Define wirelessIfAvgRxSignalStrength mapping.
     * Map values between raw/native values and MIB values
     *
     * Integer based value can usually just do a direct copy.
     */
    rowreq_ctx->data.wirelessIfAvgRxSignalStrength = (long)sub_radio->radio_aver_snr;//qiuchen copy from v1.3
    
    /*
     * setup/save data for wirelessIfHighestRxSignalStrength
     * wirelessIfHighestRxSignalStrength(2)/INTEGER/ASN_INTEGER/long(long)//l/A/w/e/r/d/h
     */
    /*
     * TODO:246:r: |-> Define wirelessIfHighestRxSignalStrength mapping.
     * Map values between raw/native values and MIB values
     *
     * Integer based value can usually just do a direct copy.
     */
    rowreq_ctx->data.wirelessIfHighestRxSignalStrength = (long)sub_radio->radio_max_snr2;//qiuchen copy from v1.3
    
    /*
     * setup/save data for wirelessIfLowestRxSignalStrength
     * wirelessIfLowestRxSignalStrength(3)/INTEGER/ASN_INTEGER/long(long)//l/A/w/e/r/d/h
     */
    /*
     * TODO:246:r: |-> Define wirelessIfLowestRxSignalStrength mapping.
     * Map values between raw/native values and MIB values
     *
     * Integer based value can usually just do a direct copy.
     */

//	if(q->wirelessIfLowestRxSignalStrength == 100)
//	{
//		wirelessIfLowestRxSignalStrength = 0;
//	}
//	else
//	{
//		wirelessIfLowestRxSignalStrength = q->wirelessIfLowestRxSignalStrength2;
//	}
		
    rowreq_ctx->data.wirelessIfLowestRxSignalStrength = (long)sub_radio->radio_min_snr2;//qiuchen copy from v1.3
    
    /*
     * setup/save data for wirelessIfUpdownTimes
     * wirelessIfUpdownTimes(4)/INTEGER/ASN_INTEGER/long(long)//l/A/w/e/r/d/h
     */
    /*
     * TODO:246:r: |-> Define wirelessIfUpdownTimes mapping.
     * Map values between raw/native values and MIB values
     *
     * Integer based value can usually just do a direct copy.
     */
    rowreq_ctx->data.wirelessIfUpdownTimes = sub_radio->wirelessIfUpdownTimes;
    
    /*
     * setup/save data for wirelessIfChStatsNumStations
     * wirelessIfChStatsNumStations(5)/INTEGER/ASN_INTEGER/long(long)//l/A/w/e/r/d/h
     */
    /*
     * TODO:246:r: |-> Define wirelessIfChStatsNumStations mapping.
     * Map values between raw/native values and MIB values
     *
     * Integer based value can usually just do a direct copy.
     */
    rowreq_ctx->data.wirelessIfChStatsNumStations = sub_radio->wirelessIfChStatsNumStations;
    
    /*
     * setup/save data for wirelessIfTxSignalPkts
     * wirelessIfTxSignalPkts(6)/INTEGER/ASN_INTEGER/long(long)//l/A/w/e/r/d/h
     */
    /*
     * TODO:246:r: |-> Define wirelessIfTxSignalPkts mapping.
     * Map values between raw/native values and MIB values
     *
     * Integer based value can usually just do a direct copy.
     */
    rowreq_ctx->data.wirelessIfTxSignalPkts = sub_radio->wirelessIfTxSignalPkts;
    
    /*
     * setup/save data for wirelessIfRxSignalPkts
     * wirelessIfRxSignalPkts(7)/INTEGER/ASN_INTEGER/long(long)//l/A/w/e/r/d/h
     */
    /*
     * TODO:246:r: |-> Define wirelessIfRxSignalPkts mapping.
     * Map values between raw/native values and MIB values
     *
     * Integer based value can usually just do a direct copy.
     */
    rowreq_ctx->data.wirelessIfRxSignalPkts = sub_radio->wirelessIfRxSignalPkts;
    
    /*
     * setup/save data for wirelessIfTxDataPkts
     * wirelessIfTxDataPkts(8)/INTEGER/ASN_INTEGER/long(long)//l/A/w/e/r/d/h
     */
    /*
     * TODO:246:r: |-> Define wirelessIfTxDataPkts mapping.
     * Map values between raw/native values and MIB values
     *
     * Integer based value can usually just do a direct copy.
     */
    rowreq_ctx->data.wirelessIfTxDataPkts = sub_radio->sub_wirelessIfTxDataPkts;
    
    /*
     * setup/save data for wirelessIfRxDataPkts
     * wirelessIfRxDataPkts(9)/INTEGER/ASN_INTEGER/long(long)//l/A/w/e/r/d/h
     */
    /*
     * TODO:246:r: |-> Define wirelessIfRxDataPkts mapping.
     * Map values between raw/native values and MIB values
     *
     * Integer based value can usually just do a direct copy.
     */
    rowreq_ctx->data.wirelessIfRxDataPkts = sub_radio->sub_wirelessIfRxDataPkts;
    
    /*
     * setup/save data for wirelessIfRxDataOctets
     * wirelessIfRxDataOctets(10)/INTEGER/ASN_INTEGER/long(long)//l/A/w/e/r/d/h
     */
    /*
     * TODO:246:r: |-> Define wirelessIfRxDataOctets mapping.
     * Map values between raw/native values and MIB values
     *
     * Integer based value can usually just do a direct copy.
     */
    rowreq_ctx->data.wirelessIfRxDataOctets = sub_radio->sub_wirelessIfUplinkDataOctets;
    
    /*
     * setup/save data for wirelessIfTxDataOctets
     * wirelessIfTxDataOctets(11)/INTEGER/ASN_INTEGER/long(long)//l/A/w/e/r/d/h
     */
    /*
     * TODO:246:r: |-> Define wirelessIfTxDataOctets mapping.
     * Map values between raw/native values and MIB values
     *
     * Integer based value can usually just do a direct copy.
     */
    rowreq_ctx->data.wirelessIfTxDataOctets = sub_radio->sub_wirelessIfDwlinkDataOctets;
    
    /*
     * setup/save data for wirelessIfChStatsDwlinkTotRetryPkts
     * wirelessIfChStatsDwlinkTotRetryPkts(12)/INTEGER/ASN_INTEGER/long(long)//l/A/w/e/r/d/h
     */
    /*
     * TODO:246:r: |-> Define wirelessIfChStatsDwlinkTotRetryPkts mapping.
     * Map values between raw/native values and MIB values
     *
     * Integer based value can usually just do a direct copy.
     */
    rowreq_ctx->data.wirelessIfChStatsDwlinkTotRetryPkts = sub_radio->wirelessIfChStatsDwlinkTotRetryPkts;
    
    /*
     * setup/save data for wirelessIfChStatsUplinkUniFrameCnt
     * wirelessIfChStatsUplinkUniFrameCnt(13)/INTEGER/ASN_INTEGER/long(long)//l/A/w/e/r/d/h
     */
    /*
     * TODO:246:r: |-> Define wirelessIfChStatsUplinkUniFrameCnt mapping.
     * Map values between raw/native values and MIB values
     *
     * Integer based value can usually just do a direct copy.
     */
    rowreq_ctx->data.wirelessIfChStatsUplinkUniFrameCnt = sub_radio->wirelessIfChStatsUplinkUniFrameCnt;
    
    /*
     * setup/save data for wirelessIfChStatsDwlinkUniFrameCnt
     * wirelessIfChStatsDwlinkUniFrameCnt(14)/INTEGER/ASN_INTEGER/long(long)//l/A/w/e/r/d/h
     */
    /*
     * TODO:246:r: |-> Define wirelessIfChStatsDwlinkUniFrameCnt mapping.
     * Map values between raw/native values and MIB values
     *
     * Integer based value can usually just do a direct copy.
     */
    rowreq_ctx->data.wirelessIfChStatsDwlinkUniFrameCnt = sub_radio->wirelessIfChStatsDwlinkUniFrameCnt;
    
    /*
     * setup/save data for wirelessIfUpChStatsFrameNonUniFrameCnt
     * wirelessIfUpChStatsFrameNonUniFrameCnt(15)/INTEGER/ASN_INTEGER/long(long)//l/A/w/e/r/d/h
     */
    /*
     * TODO:246:r: |-> Define wirelessIfUpChStatsFrameNonUniFrameCnt mapping.
     * Map values between raw/native values and MIB values
     *
     * Integer based value can usually just do a direct copy.
     */
    rowreq_ctx->data.wirelessIfUpChStatsFrameNonUniFrameCnt = sub_radio->wirelessIfUpChStatsFrameNonUniFrameCnt;
    
    /*
     * setup/save data for wirelessIfDownChStatsFrameNonUniFrameCnt
     * wirelessIfDownChStatsFrameNonUniFrameCnt(16)/INTEGER/ASN_INTEGER/long(long)//l/A/w/e/r/d/h
     */
    /*
     * TODO:246:r: |-> Define wirelessIfDownChStatsFrameNonUniFrameCnt mapping.
     * Map values between raw/native values and MIB values
     *
     * Integer based value can usually just do a direct copy.
     */
    rowreq_ctx->data.wirelessIfDownChStatsFrameNonUniFrameCnt = sub_radio->wirelessIfDownChStatsFrameNonUniFrameCnt;
    
    /*
     * setup/save data for wirelessIfChStatsPhyErrPkts
     * wirelessIfChStatsPhyErrPkts(17)/INTEGER/ASN_INTEGER/long(long)//l/A/w/e/r/d/h
     */
    /*
     * TODO:246:r: |-> Define wirelessIfChStatsPhyErrPkts mapping.
     * Map values between raw/native values and MIB values
     *
     * Integer based value can usually just do a direct copy.
     */
    rowreq_ctx->data.wirelessIfChStatsPhyErrPkts = sub_radio->sub_wirelessIfChStatsPhyErrPkts;
    
    /*
     * setup/save data for wirelessIfChStatsMacFcsErrPkts
     * wirelessIfChStatsMacFcsErrPkts(18)/INTEGER/ASN_INTEGER/long(long)//l/A/w/e/r/d/h
     */
    /*
     * TODO:246:r: |-> Define wirelessIfChStatsMacFcsErrPkts mapping.
     * Map values between raw/native values and MIB values
     *
     * Integer based value can usually just do a direct copy.
     */
    rowreq_ctx->data.wirelessIfChStatsMacFcsErrPkts = sub_radio->sub_wirelessIfChStatsMacFcsErrPkts;
    
    /*
     * setup/save data for wirelessIfChStatsMacMicErrPkts
     * wirelessIfChStatsMacMicErrPkts(19)/INTEGER/ASN_INTEGER/long(long)//l/A/w/e/r/d/h
     */
    /*
     * TODO:246:r: |-> Define wirelessIfChStatsMacMicErrPkts mapping.
     * Map values between raw/native values and MIB values
     *
     * Integer based value can usually just do a direct copy.
     */
    rowreq_ctx->data.wirelessIfChStatsMacMicErrPkts = sub_radio->sub_wirelessIfChStatsMacMicErrPkts;
    
    /*
     * setup/save data for wirelessIfChStatsMacDecryptErrPkts
     * wirelessIfChStatsMacDecryptErrPkts(20)/INTEGER/ASN_INTEGER/long(long)//l/A/w/e/r/d/h
     */
    /*
     * TODO:246:r: |-> Define wirelessIfChStatsMacDecryptErrPkts mapping.
     * Map values between raw/native values and MIB values
     *
     * Integer based value can usually just do a direct copy.
     */
    rowreq_ctx->data.wirelessIfChStatsMacDecryptErrPkts = sub_radio->sub_wirelessIfChStatsMacDecryptErrPkts;
    
    /*
     * setup/save data for wirelessIfChStatsFrameErrorCnt
     * wirelessIfChStatsFrameErrorCnt(21)/INTEGER/ASN_INTEGER/long(long)//l/A/w/e/r/d/h
     */
    /*
     * TODO:246:r: |-> Define wirelessIfChStatsFrameErrorCnt mapping.
     * Map values between raw/native values and MIB values
     *
     * Integer based value can usually just do a direct copy.
     */
    rowreq_ctx->data.wirelessIfChStatsFrameErrorCnt = sub_radio->sub_wirelessIfChStatsFrameErrorCnt;
    
    /*
     * setup/save data for wirelessIfChStatsFrameRetryCnt
     * wirelessIfChStatsFrameRetryCnt(22)/INTEGER/ASN_INTEGER/long(long)//l/A/w/e/r/d/h
     */
    /*
     * TODO:246:r: |-> Define wirelessIfChStatsFrameRetryCnt mapping.
     * Map values between raw/native values and MIB values
     *
     * Integer based value can usually just do a direct copy.
     */
    rowreq_ctx->data.wirelessIfChStatsFrameRetryCnt = sub_radio->wirelessIfChStatsFrameRetryCnt;
    
    /*
     * setup/save data for wirelessIfApChStatsFrameFragRate
     * wirelessIfApChStatsFrameFragRate(23)/INTEGER/ASN_INTEGER/long(long)//l/A/w/e/r/d/h
     */
    /*
     * TODO:246:r: |-> Define wirelessIfApChStatsFrameFragRate mapping.
     * Map values between raw/native values and MIB values
     *
     * Integer based value can usually just do a direct copy.
     */
    rowreq_ctx->data.wirelessIfApChStatsFrameFragRate = sub_radio->wirelessIfApChStatsFrameFragRate;
    
    /*
     * setup/save data for wirelessIfRxMgmtFrameCnt
     * wirelessIfRxMgmtFrameCnt(24)/INTEGER/ASN_INTEGER/long(long)//l/A/w/e/r/d/h
     */
    /*
     * TODO:246:r: |-> Define wirelessIfRxMgmtFrameCnt mapping.
     * Map values between raw/native values and MIB values
     *
     * Integer based value can usually just do a direct copy.
     */
    rowreq_ctx->data.wirelessIfRxMgmtFrameCnt = sub_radio->sub_rx_pkt_mgmt;
    
    /*
     * setup/save data for wirelessIfRxCtrlFrameCnt
     * wirelessIfRxCtrlFrameCnt(25)/INTEGER/ASN_INTEGER/long(long)//l/A/w/e/r/d/h
     */
    /*
     * TODO:246:r: |-> Define wirelessIfRxCtrlFrameCnt mapping.
     * Map values between raw/native values and MIB values
     *
     * Integer based value can usually just do a direct copy.
     */
    rowreq_ctx->data.wirelessIfRxCtrlFrameCnt = sub_radio->wirelessIfRxCtrlFrameCnt;
    
    /*
     * setup/save data for wirelessIfRxDataFrameCnt
     * wirelessIfRxDataFrameCnt(26)/INTEGER/ASN_INTEGER/long(long)//l/A/w/e/r/d/h
     */
    /*
     * TODO:246:r: |-> Define wirelessIfRxDataFrameCnt mapping.
     * Map values between raw/native values and MIB values
     *
     * Integer based value can usually just do a direct copy.
     */
    rowreq_ctx->data.wirelessIfRxDataFrameCnt = sub_radio->wirelessIfRxDataFrameCnt;
    
    /*
     * setup/save data for wirelessIfRxAuthenFrameCnt
     * wirelessIfRxAuthenFrameCnt(27)/INTEGER/ASN_INTEGER/long(long)//l/A/w/e/r/d/h
     */
    /*
     * TODO:246:r: |-> Define wirelessIfRxAuthenFrameCnt mapping.
     * Map values between raw/native values and MIB values
     *
     * Integer based value can usually just do a direct copy.
     */
    rowreq_ctx->data.wirelessIfRxAuthenFrameCnt = sub_radio->wirelessIfRxAuthenFrameCnt;
    
    /*
     * setup/save data for wirelessIfRxAssociateFrameCnt
     * wirelessIfRxAssociateFrameCnt(28)/INTEGER/ASN_INTEGER/long(long)//l/A/w/e/r/d/h
     */
    /*
     * TODO:246:r: |-> Define wirelessIfRxAssociateFrameCnt mapping.
     * Map values between raw/native values and MIB values
     *
     * Integer based value can usually just do a direct copy.
     */
    rowreq_ctx->data.wirelessIfRxAssociateFrameCnt = sub_radio->wirelessIfRxAssociateFrameCnt;
    
    /*
     * setup/save data for wirelessIfTxMgmtFrameCnt
     * wirelessIfTxMgmtFrameCnt(29)/INTEGER/ASN_INTEGER/long(long)//l/A/w/e/r/d/h
     */
    /*
     * TODO:246:r: |-> Define wirelessIfTxMgmtFrameCnt mapping.
     * Map values between raw/native values and MIB values
     *
     * Integer based value can usually just do a direct copy.
     */
    rowreq_ctx->data.wirelessIfTxMgmtFrameCnt = sub_radio->sub_tx_pkt_mgmt;
    
    /*
     * setup/save data for wirelessIfTxCtrlFrameCnt
     * wirelessIfTxCtrlFrameCnt(30)/INTEGER/ASN_INTEGER/long(long)//l/A/w/e/r/d/h
     */
    /*
     * TODO:246:r: |-> Define wirelessIfTxCtrlFrameCnt mapping.
     * Map values between raw/native values and MIB values
     *
     * Integer based value can usually just do a direct copy.
     */
    rowreq_ctx->data.wirelessIfTxCtrlFrameCnt = sub_radio->wirelessIfTxCtrlFrameCnt;
    
    /*
     * setup/save data for wirelessIfTxDataFrameCnt
     * wirelessIfTxDataFrameCnt(31)/INTEGER/ASN_INTEGER/long(long)//l/A/w/e/r/d/h
     */
    /*
     * TODO:246:r: |-> Define wirelessIfTxDataFrameCnt mapping.
     * Map values between raw/native values and MIB values
     *
     * Integer based value can usually just do a direct copy.
     */
    rowreq_ctx->data.wirelessIfTxDataFrameCnt = sub_radio->wirelessIfTxDataFrameCnt;
    
    /*
     * setup/save data for wirelessIfTxAuthenFrameCnt
     * wirelessIfTxAuthenFrameCnt(32)/INTEGER/ASN_INTEGER/long(long)//l/A/w/e/r/d/h
     */
    /*
     * TODO:246:r: |-> Define wirelessIfTxAuthenFrameCnt mapping.
     * Map values between raw/native values and MIB values
     *
     * Integer based value can usually just do a direct copy.
     */
    rowreq_ctx->data.wirelessIfTxAuthenFrameCnt = sub_radio->wirelessIfTxAuthenFrameCnt;
    
    /*
     * setup/save data for wirelessIfTxAssociateFrameCnt
     * wirelessIfTxAssociateFrameCnt(33)/INTEGER/ASN_INTEGER/long(long)//l/A/w/e/r/d/h
     */
    /*
     * TODO:246:r: |-> Define wirelessIfTxAssociateFrameCnt mapping.
     * Map values between raw/native values and MIB values
     *
     * Integer based value can usually just do a direct copy.
     */
    rowreq_ctx->data.wirelessIfTxAssociateFrameCnt = sub_radio->wirelessIfTxAssociateFrameCnt;
    
    /*
     * setup/save data for wirelessIfTxManagePkts
     * wirelessIfTxManagePkts(34)/COUNTER/ASN_COUNTER/u_long(u_long)//l/A/w/e/r/d/h
     */
    /*
     * TODO:246:r: |-> Define wirelessIfTxManagePkts mapping.
     * Map values between raw/native values and MIB values
     *
     * Integer based value can usually just do a direct copy.
     */
    rowreq_ctx->data.wirelessIfTxManagePkts = (unsigned long )sub_radio->sub_tx_pkt_mgmt;
    
    /*
     * setup/save data for wirelessIfRxManagePkts
     * wirelessIfRxManagePkts(35)/COUNTER/ASN_COUNTER/u_long(u_long)//l/A/w/e/r/d/h
     */
    /*
     * TODO:246:r: |-> Define wirelessIfRxManagePkts mapping.
     * Map values between raw/native values and MIB values
     *
     * Integer based value can usually just do a direct copy.
     */
    rowreq_ctx->data.wirelessIfRxManagePkts = (unsigned long )sub_radio->sub_rx_pkt_mgmt;
    
    /*
     * setup/save data for wirelessIfTxManageOctets
     * wirelessIfTxManageOctets(36)/COUNTER64/ASN_COUNTER64/U64(U64)//l/A/w/e/r/d/h
     */
    /*
     * TODO:246:r: |-> Define wirelessIfTxManageOctets mapping.
     * Map values between raw/native values and MIB values
     *
     * Integer based value can usually just do a direct copy.
     */
  //  rowreq_ctx->data.wirelessIfUplinkManageOctets.high = wirelessIfUplinkManageOctets.high;
  //  rowreq_ctx->data.wirelessIfUplinkManageOctets.low = wirelessIfUplinkManageOctets.low;
   rowreq_ctx->data.wirelessIfTxManageOctets =  sub_radio->sub_tx_mgmt;
    /*
     * setup/save data for wirelessIfRxManageOctets
     * wirelessIfRxManageOctets(37)/COUNTER64/ASN_COUNTER64/U64(U64)//l/A/w/e/r/d/h
     */
    /*
     * TODO:246:r: |-> Define wirelessIfRxManageOctets mapping.
     * Map values between raw/native values and MIB values
     *
     * Integer based value can usually just do a direct copy.
     */
  //  rowreq_ctx->data.wirelessIfDwlinkManageOctets.high = wirelessIfDwlinkManageOctets.high;
  //  rowreq_ctx->data.wirelessIfDwlinkManageOctets.low = wirelessIfDwlinkManageOctets.low;
	rowreq_ctx->data.wirelessIfRxManageOctets =  sub_radio->sub_rx_mgmt;
    /*
     * setup/save data for wirelessIfTxTotalPkts
     * wirelessIfTxTotalPkts(38)/COUNTER/ASN_COUNTER/u_long(u_long)//l/A/w/e/r/d/h
     */
    /*
     * TODO:246:r: |-> Define wirelessIfTxTotalPkts mapping.
     * Map values between raw/native values and MIB values
     *
     * Integer based value can usually just do a direct copy.
     */
    rowreq_ctx->data.wirelessIfTxTotalPkts = sub_radio->sub_total_tx_pkt;
    
    /*
     * setup/save data for wirelessIfRxTotalPkts
     * wirelessIfRxTotalPkts(39)/COUNTER/ASN_COUNTER/u_long(u_long)//l/A/w/e/r/d/h
     */
    /*
     * TODO:246:r: |-> Define wirelessIfRxTotalPkts mapping.
     * Map values between raw/native values and MIB values
     *
     * Integer based value can usually just do a direct copy.
     */
    rowreq_ctx->data.wirelessIfRxTotalPkts = sub_radio->sub_total_rx_pkt;
    
    /*
     * setup/save data for wirelessIfTxTotalOctets
     * wirelessIfTxTotalOctets(40)/COUNTER64/ASN_COUNTER64/U64(U64)//l/A/w/e/r/d/h
     */
    /*
     * TODO:246:r: |-> Define wirelessIfTxTotalOctets mapping.
     * Map values between raw/native values and MIB values
     *
     * Integer based value can usually just do a direct copy.
     */
  //  rowreq_ctx->data.wirelessIfUplinkTotalOctets.high = wirelessIfUplinkTotalOctets.high;
  //  rowreq_ctx->data.wirelessIfUplinkTotalOctets.low = wirelessIfUplinkTotalOctets.low;
   rowreq_ctx->data.wirelessIfTxTotalOctets =  sub_radio->sub_total_tx_bytes;
    /*
     * setup/save data for wirelessIfRxTotalOctets
     * wirelessIfRxTotalOctets(41)/COUNTER64/ASN_COUNTER64/U64(U64)//l/A/w/e/r/d/h
     */
    /*
     * TODO:246:r: |-> Define wirelessIfRxTotalOctets mapping.
     * Map values between raw/native values and MIB values
     *
     * Integer based value can usually just do a direct copy.
     */
   // rowreq_ctx->data.wirelessIfDwlinkTotalOctets.high = wirelessIfDwlinkTotalOctets.high;
   // rowreq_ctx->data.wirelessIfDwlinkTotalOctets.low = wirelessIfDwlinkTotalOctets.low;
    rowreq_ctx->data.wirelessIfRxTotalOctets =  sub_radio->sub_total_rx_bytes;
    /*
     * setup/save data for wirelessIfRxDropPkts
     * wirelessIfRxDropPkts(42)/COUNTER/ASN_COUNTER/u_long(u_long)//l/A/w/e/r/d/h
     */
    /*
     * TODO:246:r: |-> Define wirelessIfRxDropPkts mapping.
     * Map values between raw/native values and MIB values
     *
     * Integer based value can usually just do a direct copy.
     */
    rowreq_ctx->data.wirelessIfRxDropPkts = sub_radio->sub_wirelessIfRxDropPkts;
    
    /*
     * setup/save data for wirelessIfTxDropPkts
     * wirelessIfTxDropPkts(43)/COUNTER/ASN_COUNTER/u_long(u_long)//l/A/w/e/r/d/h
     */
    /*
     * TODO:246:r: |-> Define wirelessIfTxDropPkts mapping.
     * Map values between raw/native values and MIB values
     *
     * Integer based value can usually just do a direct copy.
     */
    rowreq_ctx->data.wirelessIfTxDropPkts = sub_radio->sub_wirelessIfTxDropPkts;
    
    /*
     * setup/save data for wirelessIfRxErrPkts
     * wirelessIfRxErrPkts(44)/COUNTER/ASN_COUNTER/u_long(u_long)//l/A/w/e/r/d/h
     */
    /*
     * TODO:246:r: |-> Define wirelessIfRxErrPkts mapping.
     * Map values between raw/native values and MIB values
     *
     * Integer based value can usually just do a direct copy.
     */
    rowreq_ctx->data.wirelessIfRxErrPkts = sub_radio->sub_wirelessIfRxErrPkts;
    
    /*
     * setup/save data for wirelessIfTxErrPkts
     * wirelessIfTxErrPkts(45)/COUNTER/ASN_COUNTER/u_long(u_long)//l/A/w/e/r/d/h
     */
    /*
     * TODO:246:r: |-> Define wirelessIfTxErrPkts mapping.
     * Map values between raw/native values and MIB values
     *
     * Integer based value can usually just do a direct copy.
     */
    rowreq_ctx->data.wirelessIfTxErrPkts = sub_radio->sub_wirelessIfChStatsFrameErrorCnt;
    
    /*
     * setup/save data for wtpNeighborSSIDList
     * wtpNeighborSSIDList(46)/DisplayString/ASN_OCTET_STR/char(char)//L/A/w/e/R/d/H
     */
    /*
     * TODO:246:r: |-> Define wtpNeighborSSIDList mapping.
     * Map values between raw/native values and MIB values
     *
     * if(MFD_SUCCESS !=
     *    wtpNeighborSSIDList_map(&rowreq_ctx->data.wtpNeighborSSIDList, &rowreq_ctx->data.wtpNeighborSSIDList_len,
     *                wtpNeighborSSIDList, wtpNeighborSSIDList_len, 0)) {
     *    return MFD_ERROR;
     * }
     */
    /*
     * make sure there is enough space for wtpNeighborSSIDList data
     */
    //if ((NULL == rowreq_ctx->data.wtpNeighborSSIDList) ||
    //    (rowreq_ctx->data.wtpNeighborSSIDList_len < (wtpNeighborSSIDList_len * sizeof(rowreq_ctx->data.wtpNeighborSSIDList[0])))) {
    //    snmp_log(LOG_ERR,"not enough space for value\n");
    //    return MFD_ERROR;
    //}
    
	struct Neighbor_AP_ELE *neighbor_node = NULL;
	struct Neighbor_AP_ELE *cmp_neighbor_node = NULL;
	int j = 0;
	char wtpNeighborSSIDList[255] = {0};
	
	memset(wtpNeighborSSIDList,0,sizeof(wtpNeighborSSIDList));
	for(neighbor_node = q->neighbor_wtp,j=0;
		((NULL != neighbor_node)&&(j<q->neighbor_ap_count)); 
		neighbor_node = neighbor_node->next,j++)
	{
		int neighbor_flag = 0;
		for(cmp_neighbor_node = neighbor_node->next;NULL != cmp_neighbor_node; cmp_neighbor_node = cmp_neighbor_node->next)
		{
			if(0 == strcmp(neighbor_node->ESSID,cmp_neighbor_node->ESSID))
			{
				neighbor_flag = 1;
				break;
			}
		}

		if((0 == neighbor_flag)&&(strcmp(neighbor_node->ESSID,""))&&(strlen(neighbor_node->ESSID)<(sizeof(wtpNeighborSSIDList)-strlen(wtpNeighborSSIDList)-1)))
		{
			strncat(wtpNeighborSSIDList,neighbor_node->ESSID,sizeof(wtpNeighborSSIDList)-strlen(wtpNeighborSSIDList)-1);
			strncat(wtpNeighborSSIDList,";",sizeof(wtpNeighborSSIDList)-strlen(wtpNeighborSSIDList)-1);
		}

	}
    rowreq_ctx->data.wtpNeighborSSIDList_len = strlen(wtpNeighborSSIDList);
    memcpy( rowreq_ctx->data.wtpNeighborSSIDList, wtpNeighborSSIDList, rowreq_ctx->data.wtpNeighborSSIDList_len );
        
        /*
         * insert into table container
			         */
        			        if(CONTAINER_INSERT(container, rowreq_ctx))
        			        {
        						dot11WtpWirelessIfstatsTable_release_rowreq_ctx(rowreq_ctx);
        			        }
        			        ++count;		
        				sub_radio = sub_radio->next;
        			}
        		}
        	}
    	}
        free_dbus_message_list(&messageHead, Free_show_all_wtp_wirelessifstats_information_cmd);
	}


    /*
    ***************************************************
    ***             START EXAMPLE CODE              ***
    ***---------------------------------------------***/
    //if(NULL != filep)
       // fclose(filep);
    /*
    ***---------------------------------------------***
    ***              END  EXAMPLE CODE              ***
    ***************************************************/

    DEBUGMSGT(("verbose:dot11WtpWirelessIfstatsTable:dot11WtpWirelessIfstatsTable_cache_load",
               "inserted %d records\n", count));

	snmp_log(LOG_DEBUG, "exit dot11WtpWirelessIfstatsTable_cache_load\n");
    return MFD_SUCCESS;
} /* dot11WtpWirelessIfstatsTable_cache_load */

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
dot11WtpWirelessIfstatsTable_cache_free(netsnmp_container *container)
{
    DEBUGMSGTL(("verbose:dot11WtpWirelessIfstatsTable:dot11WtpWirelessIfstatsTable_cache_free","called\n"));

    /*
     * TODO:380:M: Free dot11WtpWirelessIfstatsTable cache.
     */
} /* dot11WtpWirelessIfstatsTable_cache_free */

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
dot11WtpWirelessIfstatsTable_row_prep( dot11WtpWirelessIfstatsTable_rowreq_ctx *rowreq_ctx)
{
    DEBUGMSGTL(("verbose:dot11WtpWirelessIfstatsTable:dot11WtpWirelessIfstatsTable_row_prep","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * TODO:390:o: Prepare row for request.
     * If populating row data was delayed, this is the place to
     * fill in the row for this request.
     */

    return MFD_SUCCESS;
} /* dot11WtpWirelessIfstatsTable_row_prep */

/** @} */
