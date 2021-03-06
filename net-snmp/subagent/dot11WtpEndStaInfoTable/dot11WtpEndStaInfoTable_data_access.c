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
#include "dot11WtpEndStaInfoTable.h"


#include "dot11WtpEndStaInfoTable_data_access.h"
#include "wcpss/asd/asd.h"
#include "wcpss/wid/WID.h"
#include "dbus/wcpss/ACDbusDef1.h"
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
 *** Table dot11WtpEndStaInfoTable
 ***
 **********************************************************************
 **********************************************************************/
/*
 * dot11WtpEndStaInfoTable is subid 2 of wtpStation.
 * Its status is Current.
 * OID: .1.3.6.1.4.1.31656.6.1.1.8.2, length: 12
*/

/**
 * initialization for dot11WtpEndStaInfoTable data access
 *
 * This function is called during startup to allow you to
 * allocate any resources you need for the data table.
 *
 * @param dot11WtpEndStaInfoTable_reg
 *        Pointer to dot11WtpEndStaInfoTable_registration
 *
 * @retval MFD_SUCCESS : success.
 * @retval MFD_ERROR   : unrecoverable error.
 */
int
dot11WtpEndStaInfoTable_init_data(dot11WtpEndStaInfoTable_registration_ptr dot11WtpEndStaInfoTable_reg)
{
    DEBUGMSGTL(("verbose:dot11WtpEndStaInfoTable:dot11WtpEndStaInfoTable_init_data","called\n"));

    /*
     * TODO:303:o: Initialize dot11WtpEndStaInfoTable data.
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
} /* dot11WtpEndStaInfoTable_init_data */

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
dot11WtpEndStaInfoTable_container_init(netsnmp_container **container_ptr_ptr,
                        netsnmp_cache *cache)
{
    DEBUGMSGTL(("verbose:dot11WtpEndStaInfoTable:dot11WtpEndStaInfoTable_container_init","called\n"));
    
    if((NULL == cache) || (NULL == container_ptr_ptr)) {
        snmp_log(LOG_ERR,"bad params to dot11WtpEndStaInfoTable_container_init\n");
        return;
    }

    /*
     * For advanced users, you can use a custom container. If you
     * do not create one, one will be created for you.
     */
    *container_ptr_ptr = NULL;
	

    /*
     * TODO:345:A: Set up dot11WtpEndStaInfoTable cache properties.
     *
     * Also for advanced users, you can set parameters for the
     * cache. Do not change the magic pointer, as it is used
     * by the MFD helper. To completely disable caching, set
     * cache->enabled to 0.
     */
    cache->timeout = DOT11WTPENDSTAINFOTABLE_CACHE_TIMEOUT; /* seconds */
} /* dot11WtpEndStaInfoTable_container_init */

/**
 * load cache data
 *
 * TODO:350:M: Implement dot11WtpEndStaInfoTable cache load
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
 *  dot11WtpEndStaInfoTable_row_prep() for populating data.
 *
 * @note
 *  If you need consistency between rows (like you want statistics
 *  for each row to be from the same time frame), you should set all
 *  data here.
 *
 */
int
dot11WtpEndStaInfoTable_cache_load(netsnmp_container *container)
{
	
	snmp_log(LOG_DEBUG, "enter dot11WtpEndStaInfoTable_cache_load\n");
	
    dot11WtpEndStaInfoTable_rowreq_ctx *rowreq_ctx;
    size_t                 count = 0;
    
    /*
     * this example code is based on a data source that is a
     * text file to be read and parsed.
     */
//    FILE *filep;
//    char line[MAX_LINE_SIZE];
    /*
     * temporary storage for index values
     */
        /*
         * wtpMacAddr(1)/Dot11BaseWtpIdTC/ASN_OCTET_STR/char(char)//L/A/w/e/r/d/h
         */
        /** 128 - 1(entry) - 1(col) - 1(other indexes) = 111 */
   char   wtpMacAddr[20];
   size_t      wtpMacAddr_len;
        /*
         * wtpStaMacAddr(1)/DisplayString/ASN_OCTET_STR/char(char)//L/A/w/e/R/d/H
         */
        /** 128 - 1(entry) - 1(col) - 1(other indexes) = 111 */
   char   wtpStaMacAddr[20];
   size_t      wtpStaMacAddr_len;

    DEBUGMSGTL(("verbose:dot11WtpEndStaInfoTable:dot11WtpEndStaInfoTable_cache_load","called\n"));

    /*
    ***************************************************
    ***             START EXAMPLE CODE              ***
    ***---------------------------------------------***/
    /*
     * open our data file.
     */
//    filep = fopen("/etc/dummy.conf", "r");
//    if(NULL ==  filep) {
//        return MFD_RESOURCE_UNAVAILABLE;
//    }

    /*
    ***---------------------------------------------***
    ***              END  EXAMPLE CODE              ***
    ***************************************************/
    /*
     * TODO:351:M: |-> Load/update data in the dot11WtpEndStaInfoTable container.
     * loop over your dot11WtpEndStaInfoTable data, allocate a rowreq context,
     * set the index(es) [and data, optionally] and insert into
     * the container.
     */
    char wtpStaSSIDName[255];
    size_t wtpStaSSIDName_len;
    int Entype = -1;
    
    snmpd_dbus_message *messageHead = NULL, *messageNode = NULL;
    
    snmp_log(LOG_DEBUG, "enter list_connection_call_dbus_method:show_all_wtp_terminal_information_cmd\n");
    messageHead = list_connection_call_dbus_method(show_all_wtp_terminal_information_cmd, SHOW_ALL_WTP_TABLE_METHOD);
    snmp_log(LOG_DEBUG, "exit list_connection_call_dbus_method:show_all_wtp_terminal_information_cmd,messageHead=%p\n", messageHead);
    
    
    if(messageHead)
    {
        for(messageNode = messageHead; NULL != messageNode; messageNode = messageNode->next)
        {
            struct WtpTerminalInfo *head = messageNode->message;
            if(head)
            {
                struct WtpTerminalInfo *ShowNode = NULL;
    			for(ShowNode=head; ShowNode!=NULL; ShowNode = ShowNode->next)
    			{
    				
    				memset(wtpMacAddr, 0, 20);
    				if(NULL != ShowNode->wtpMacAddr)
    				{
    					strncpy(wtpMacAddr, ShowNode->wtpMacAddr, strlen(ShowNode->wtpMacAddr));
    				}

                    struct Wtp_TerminalInfo *terminal_q = ShowNode->terminalInfo_list;
                    for(terminal_q = ShowNode->terminalInfo_list; NULL != terminal_q; terminal_q = terminal_q->next)
    				{
    					
    					memset(wtpStaMacAddr, 0, 20);
    					if(NULL != terminal_q->wtpTerminalMacAddr)
    					{
    						strncpy(wtpStaMacAddr, terminal_q->wtpTerminalMacAddr, strlen(terminal_q->wtpTerminalMacAddr));
    					}
								
    /*
    ***************************************************
    ***             START EXAMPLE CODE              ***
    ***---------------------------------------------***/
    /*
     * get a line (skip blank lines)
     */
//    do {
//        if (!fgets(line, sizeof(line), filep)) {
//            /* we're done */
//            fclose(filep);
//            filep = NULL;
//        }
//    } while (filep && (line[0] == '\n'));

    /*
     * check for end of data
     */
//    if(NULL == filep)
//        break;

    /*
     * parse line into variables
     */
    /*
    ***---------------------------------------------***
    ***              END  EXAMPLE CODE              ***
    ***************************************************/

        /*
         * TODO:352:M: |   |-> set indexes in new dot11WtpEndStaInfoTable rowreq context.
         */
        rowreq_ctx = dot11WtpEndStaInfoTable_allocate_rowreq_ctx();
        if (NULL == rowreq_ctx) {
            snmp_log(LOG_ERR, "memory allocation failed\n");
            free_dbus_message_list(&messageHead, Free_show_all_wtp_terminal_information_cmd);
            return MFD_RESOURCE_UNAVAILABLE;
        }


		wtpMacAddr_len = strlen(wtpMacAddr);
		wtpStaMacAddr_len = strlen(wtpStaMacAddr);

		
        if(MFD_SUCCESS != dot11WtpEndStaInfoTable_indexes_set(rowreq_ctx
                               , wtpMacAddr, wtpMacAddr_len
                               , wtpStaMacAddr, wtpStaMacAddr_len
               )) {
            snmp_log(LOG_ERR,"error setting index while loading "
                     "dot11WtpEndStaInfoTable cache.\n");
            dot11WtpEndStaInfoTable_release_rowreq_ctx(rowreq_ctx);
            continue;
        }

        /*
         * TODO:352:r: |   |-> populate dot11WtpEndStaInfoTable data context.
         * Populate data context here. (optionally, delay until row prep)
         */
    /*
     * TRANSIENT or semi-TRANSIENT data:
     * copy data or save any info needed to do it in row_prep.
     */
    /*
     * setup/save data for wtpEndWMMSta
     * wtpEndWMMSta(1)/INTEGER/ASN_INTEGER/long(long)//l/A/w/e/r/d/h
     */
    /*
     * TODO:246:r: |-> Define wtpEndWMMSta mapping.
     * Map values between raw/native values and MIB values
     *
     * Integer based value can usually just do a direct copy.
     */


    rowreq_ctx->data.wtpEndWMMSta = terminal_q->wtpEndWMMSta;
	
    
    /*
     * setup/save data for wtpStaIPAddress
     * wtpStaIPAddress(2)/IPADDR/ASN_IPADDRESS/u_long(u_long)//l/A/w/e/r/d/h
     */
    /*
     * TODO:246:r: |-> Define wtpStaIPAddress mapping.
     * Map values between raw/native values and MIB values
     *
     * Integer based value can usually just do a direct copy.
     */
    rowreq_ctx->data.wtpStaIPAddress = terminal_q->wtpStaIPAddress;
    
    /*
     * setup/save data for wtpStaRadioMode
     * wtpStaRadioMode(3)/INTEGER/ASN_INTEGER/long(u_long)//l/A/w/E/r/d/h
     */
    /*
     * TODO:246:r: |-> Define wtpStaRadioMode mapping.
     * Map values between raw/native values and MIB values
     *
    * enums usually need mapping.
    */

    unsigned long wtpStaRadioMode = 0;
    unsigned int flag_11n = 0;
    
    if(terminal_q->wtpStaRadioMode & IEEE80211_11N){
		flag_11n = 1;
    }
    
    if(terminal_q->wtpStaRadioMode & IEEE80211_11A) {
#if 0
        wtpStaRadioMode |= 0x1;           //a   
        if(flag_11n) { 
            wtpStaRadioMode |= 0x1 << 3;      //an
        }
#else        
        if(flag_11n) {            
            if(terminal_q->wtpStaRadioMode & IEEE80211_11AN) {
                wtpStaRadioMode |= 0x1;           //a      
            }     
            wtpStaRadioMode |= 0x1 << 3;      //an
        }
        else {
            wtpStaRadioMode |= 0x1;           //a      
        }
#endif    
    }

    if(terminal_q->wtpStaRadioMode & IEEE80211_11B) {
        wtpStaRadioMode |= 0x1 << 1;      //b        
    }

    if(terminal_q->wtpStaRadioMode & IEEE80211_11G) {
#if 0
        wtpStaRadioMode |= 0x1 << 2;      //g   
        if(flag_11n) {
            wtpStaRadioMode |= 0x1 << 4;      //gn
        }
#else
        if(flag_11n) {            
            if((terminal_q->wtpStaRadioMode & IEEE80211_11GN)
			|| (wtpStaRadioMode & (0x1 << 1))) {                
                wtpStaRadioMode |= 0x1 << 2;      //g   
            }
            wtpStaRadioMode |= 0x1 << 4;      //gn
        }
        else {
            wtpStaRadioMode |= 0x1 << 2;      //g   
        }
#endif            
    }

    /*if(MFD_SUCCESS !=
       wtpStaRadioMode_map(&rowreq_ctx->data.wtpStaRadioMode, RadioMode )) {
        return MFD_ERROR;
    }*/
    rowreq_ctx->data.wtpStaRadioMode = wtpStaRadioMode;
    
    /*
     * setup/save data for wtpStaRadioChannel
     * wtpStaRadioChannel(4)/INTEGER/ASN_INTEGER/long(long)//l/A/w/e/r/d/h
     */
    /*
     * TODO:246:r: |-> Define wtpStaRadioChannel mapping.
     * Map values between raw/native values and MIB values
     *
     * Integer based value can usually just do a direct copy.
     */
    rowreq_ctx->data.wtpStaRadioChannel = terminal_q->wtpStaRadioChannel;
    
    /*
     * setup/save data for wtpAPTxRates
     * wtpAPTxRates(5)/INTEGER/ASN_INTEGER/long(long)//l/A/w/e/r/d/h
     */
    /*
     * TODO:246:r: |-> Define wtpAPTxRates mapping.
     * Map values between raw/native values and MIB values
     *
     * Integer based value can usually just do a direct copy.
     */
    rowreq_ctx->data.wtpAPTxRates = terminal_q->wtpAPTxRates;
    
    /*
     * setup/save data for wtpStaPowerSaveMode
     * wtpStaPowerSaveMode(6)/INTEGER/ASN_INTEGER/long(u_long)//l/A/w/E/r/d/h
     */
    /*
     * TODO:246:r: |-> Define wtpStaPowerSaveMode mapping.
     * Map values between raw/native values and MIB values
     *
    * enums usually need mapping.
    */
//    if(MFD_SUCCESS !=
//       wtpStaPowerSaveMode_map(&rowreq_ctx->data.wtpStaPowerSaveMode, terminal_q->wtpStaPowerSaveMode )) {
//        return MFD_ERROR;
//    }

	rowreq_ctx->data.wtpStaPowerSaveMode = terminal_q->wtpStaPowerSaveMode + 1;
    
    /*
     * setup/save data for wtpStaVlanId
     * wtpStaVlanId(7)/INTEGER/ASN_INTEGER/long(long)//l/A/w/e/r/d/h
     */
    /*
     * TODO:246:r: |-> Define wtpStaVlanId mapping.
     * Map values between raw/native values and MIB values
     *
     * Integer based value can usually just do a direct copy.
     */

	
    rowreq_ctx->data.wtpStaVlanId = terminal_q->wtpStaVlanId;
    
    /*
     * setup/save data for wtpStaSSIDName
     * wtpStaSSIDName(8)/DisplayString/ASN_OCTET_STR/char(char)//L/A/w/e/R/d/H
     */
    /*
     * TODO:246:r: |-> Define wtpStaSSIDName mapping.
     * Map values between raw/native values and MIB values
     *
     * if(MFD_SUCCESS !=
     *    wtpStaSSIDName_map(&rowreq_ctx->data.wtpStaSSIDName, &rowreq_ctx->data.wtpStaSSIDName_len,
     *                wtpStaSSIDName, wtpStaSSIDName_len, 0)) {
     *    return MFD_ERROR;
     * }
     */
    /*
     * make sure there is enough space for wtpStaSSIDName data
     */



	
//    if ((NULL == rowreq_ctx->data.wtpStaSSIDName) ||
//        (rowreq_ctx->data.wtpStaSSIDName_len < (wtpStaSSIDName_len * sizeof(rowreq_ctx->data.wtpStaSSIDName[0])))) {
//        snmp_log(LOG_ERR,"not enough space for value\n");
//        return MFD_ERROR;
//    }



	if(terminal_q->wtpStaSSIDName)
	{
		wtpStaSSIDName_len = MIN(strlen(terminal_q->wtpStaSSIDName),sizeof(wtpStaSSIDName)-1);
		memset(wtpStaSSIDName,0,sizeof(wtpStaSSIDName));
		memcpy(wtpStaSSIDName,terminal_q->wtpStaSSIDName,wtpStaSSIDName_len);
	}

	
    rowreq_ctx->data.wtpStaSSIDName_len = wtpStaSSIDName_len * sizeof(rowreq_ctx->data.wtpStaSSIDName[0]);
    memcpy( rowreq_ctx->data.wtpStaSSIDName, wtpStaSSIDName, rowreq_ctx->data.wtpStaSSIDName_len );
    
    /*
     * setup/save data for wtpStaAuthenMode
     * wtpStaAuthenMode(9)/INTEGER/ASN_INTEGER/long(u_long)//l/A/w/E/r/d/h
     */
    /*
     * TODO:246:r: |-> Define wtpStaAuthenMode mapping.
     * Map values between raw/native values and MIB values
     *
    * enums usually need mapping.
    */
//    if(MFD_SUCCESS !=
//       wtpStaAuthenMode_map(&rowreq_ctx->data.wtpStaAuthenMode, terminal_q->wtpStaAuthenMode )) {
//        return MFD_ERROR;
//    }


	rowreq_ctx->data.wtpStaAuthenMode = terminal_q->wtpStaAuthenMode;


	
    /*
     * setup/save data for wtpStaSecurityCiphers
     * wtpStaSecurityCiphers(10)/INTEGER/ASN_INTEGER/long(u_long)//l/A/w/E/r/d/h
     */
    /*
     * TODO:246:r: |-> Define wtpStaSecurityCiphers mapping.
     * Map values between raw/native values and MIB values
     *
    * enums usually need mapping.
    */
//    if(MFD_SUCCESS !=
//       wtpStaSecurityCiphers_map(&rowreq_ctx->data.wtpStaSecurityCiphers, terminal_q->wtpStaSecurityCiphers )) {
//        return MFD_ERROR;
//    }

	rowreq_ctx->data.wtpStaSecurityCiphers= terminal_q->wtpStaSecurityCiphers;


	
    /*
     * setup/save data for wtpAuthenModel
     * wtpAuthenModel(11)/INTEGER/ASN_INTEGER/long(u_long)//l/A/w/E/r/d/h
     */
    /*
     * TODO:246:r: |-> Define wtpAuthenModel mapping.
     * Map values between raw/native values and MIB values
     *
    * enums usually need mapping.
    */
//    if(MFD_SUCCESS !=
//       wtpAuthenModel_map(&rowreq_ctx->data.wtpAuthenModel, terminal_q->wtpAutenModel )) {
//        return MFD_ERROR;
//    }

	rowreq_ctx->data.wtpAuthenModel= terminal_q->wtpAutenModel;


	
    /*
     * setup/save data for wtpSecurityCiphers
     * wtpSecurityCiphers(12)/INTEGER/ASN_INTEGER/long(u_long)//l/A/w/E/r/d/h
     */
    /*
     * TODO:246:r: |-> Define wtpSecurityCiphers mapping.
     * Map values between raw/native values and MIB values
     *
    * enums usually need mapping.
    */


   if(terminal_q->encryption_type == 0)
   {
	   Entype =0;
   }
   else if(terminal_q->encryption_type == 1)
   {
	   Entype = 1;
   }
   else if(terminal_q->encryption_type == 2)
   {
	   Entype = 4;
   }
   else if(terminal_q->encryption_type == 3)
   {
	   Entype = 3;
   }
   else if(terminal_q->encryption_type == 4)
   {
	   Entype = 5;
   }



	
//    if(MFD_SUCCESS !=
//       wtpSecurityCiphers_map(&rowreq_ctx->data.wtpSecurityCiphers, Entype + 1 )) {
//        return MFD_ERROR;
//    }


	rowreq_ctx->data.wtpSecurityCiphers= Entype + 1;

	
    
    /*
     * setup/save data for apEndStaID
     * apEndStaID(13)/INTEGER/ASN_INTEGER/long(long)//l/A/w/e/r/d/h
     */
    /*
     * TODO:246:r: |-> Define apEndStaID mapping.
     * Map values between raw/native values and MIB values
     *
     * Integer based value can usually just do a direct copy.
     */
    rowreq_ctx->data.apEndStaID = terminal_q->wtpEndStaID;
    
    /*
     * setup/save data for wtpStaIPV6Address
     * wtpStaIPV6Address(17)/InetAddressIPv6/ASN_OCTET_STR/char(char)//L/A/w/e/R/d/H
     */
    /** no mapping */
    /*
     * make sure there is enough space for wtpStaIPV6Address data
     */
    
	char wtpStaIPV6Address[128]={0};
	int  wtpStaIPV6Address_len= 0;
	memset(wtpStaIPV6Address, 0, sizeof(wtpStaIPV6Address));
	sprintf(wtpStaIPV6Address,"%x:%x:%x:%x:%x:%x:%x:%x",terminal_q->wtpStaIP6Address.s6_addr16[0],terminal_q->wtpStaIP6Address.s6_addr16[1]
							,terminal_q->wtpStaIP6Address.s6_addr16[2],terminal_q->wtpStaIP6Address.s6_addr16[3]
							,terminal_q->wtpStaIP6Address.s6_addr16[4],terminal_q->wtpStaIP6Address.s6_addr16[5]
							,terminal_q->wtpStaIP6Address.s6_addr16[6],terminal_q->wtpStaIP6Address.s6_addr16[7]);
	
	wtpStaIPV6Address_len = MIN(strlen(wtpStaIPV6Address),sizeof(rowreq_ctx->data.wtpStaIPV6Address)-1);
	rowreq_ctx->data.wtpStaIPV6Address_len = wtpStaIPV6Address_len* sizeof(rowreq_ctx->data.wtpStaIPV6Address[0]);
	memcpy( rowreq_ctx->data.wtpStaIPV6Address, wtpStaIPV6Address, wtpStaIPV6Address_len );
        
        /*
         * insert into table container
         */


        		        if(CONTAINER_INSERT(container, rowreq_ctx))
        		        {
        					dot11WtpEndStaInfoTable_release_rowreq_ctx(rowreq_ctx);
        		        }
        		        ++count;
        			}
        		}				
        	}
        }
        free_dbus_message_list(&messageHead, Free_show_all_wtp_terminal_information_cmd);
    }
    /*
    ***************************************************
    ***             START EXAMPLE CODE              ***
    ***---------------------------------------------***/
//    if(NULL != filep)
//        fclose(filep);
    /*
    ***---------------------------------------------***
    ***              END  EXAMPLE CODE              ***
    ***************************************************/

    DEBUGMSGT(("verbose:dot11WtpEndStaInfoTable:dot11WtpEndStaInfoTable_cache_load",
               "inserted %d records\n", count));

	snmp_log(LOG_DEBUG, "exit dot11WtpEndStaInfoTable_cache_load\n");
    return MFD_SUCCESS;
} /* dot11WtpEndStaInfoTable_cache_load */

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
dot11WtpEndStaInfoTable_cache_free(netsnmp_container *container)
{
    DEBUGMSGTL(("verbose:dot11WtpEndStaInfoTable:dot11WtpEndStaInfoTable_cache_free","called\n"));

    /*
     * TODO:380:M: Free dot11WtpEndStaInfoTable cache.
     */
} /* dot11WtpEndStaInfoTable_cache_free */

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
dot11WtpEndStaInfoTable_row_prep( dot11WtpEndStaInfoTable_rowreq_ctx *rowreq_ctx)
{
    DEBUGMSGTL(("verbose:dot11WtpEndStaInfoTable:dot11WtpEndStaInfoTable_row_prep","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * TODO:390:o: Prepare row for request.
     * If populating row data was delayed, this is the place to
     * fill in the row for this request.
     */

    return MFD_SUCCESS;
} /* dot11WtpEndStaInfoTable_row_prep */

/** @} */
