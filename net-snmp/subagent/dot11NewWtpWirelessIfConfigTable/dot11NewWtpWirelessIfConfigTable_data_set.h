/*
 * Note: this file originally auto-generated by mib2c using
 *       version : 1.18 $ of : mfd-data-set.m2c,v $ 
 *
 * $Id:$
 */
#ifndef DOT11NEWWTPWIRELESSIFCONFIGTABLE_DATA_SET_H
#define DOT11NEWWTPWIRELESSIFCONFIGTABLE_DATA_SET_H

#ifdef __cplusplus
extern "C" {
#endif

/* *********************************************************************
 * SET function declarations
 */

/* *********************************************************************
 * SET Table declarations
 */
/**********************************************************************
 **********************************************************************
 ***
 *** Table dot11NewWtpWirelessIfConfigTable
 ***
 **********************************************************************
 **********************************************************************/
/*
 * dot11NewWtpWirelessIfConfigTable is subid 9 of wtpInterface.
 * Its status is Current.
 * OID: .1.3.6.1.4.1.31656.6.1.1.3.9, length: 12
*/
int NewwtpID_check_index( dot11NewWtpWirelessIfConfigTable_rowreq_ctx *rowreq_ctx ); /* internal */
int NewapWirelessIfIndex_check_index( dot11NewWtpWirelessIfConfigTable_rowreq_ctx *rowreq_ctx ); /* internal */


int dot11NewWtpWirelessIfConfigTable_undo_setup( dot11NewWtpWirelessIfConfigTable_rowreq_ctx *rowreq_ctx);
int dot11NewWtpWirelessIfConfigTable_undo_cleanup( dot11NewWtpWirelessIfConfigTable_rowreq_ctx *rowreq_ctx);
int dot11NewWtpWirelessIfConfigTable_commit( dot11NewWtpWirelessIfConfigTable_rowreq_ctx *rowreq_ctx);
int dot11NewWtpWirelessIfConfigTable_undo_commit( dot11NewWtpWirelessIfConfigTable_rowreq_ctx *rowreq_ctx);


int NewwtpWirelessIfBeaconIntvl_check_value( dot11NewWtpWirelessIfConfigTable_rowreq_ctx *rowreq_ctx, long NewwtpWirelessIfBeaconIntvl_val);
int NewwtpWirelessIfBeaconIntvl_undo_setup( dot11NewWtpWirelessIfConfigTable_rowreq_ctx *rowreq_ctx );
int NewwtpWirelessIfBeaconIntvl_set( dot11NewWtpWirelessIfConfigTable_rowreq_ctx *rowreq_ctx, long NewwtpWirelessIfBeaconIntvl_val );
int NewwtpWirelessIfBeaconIntvl_undo( dot11NewWtpWirelessIfConfigTable_rowreq_ctx *rowreq_ctx );

int NewwtpWirelessIfDtimIntvl_check_value( dot11NewWtpWirelessIfConfigTable_rowreq_ctx *rowreq_ctx, long NewwtpWirelessIfDtimIntvl_val);
int NewwtpWirelessIfDtimIntvl_undo_setup( dot11NewWtpWirelessIfConfigTable_rowreq_ctx *rowreq_ctx );
int NewwtpWirelessIfDtimIntvl_set( dot11NewWtpWirelessIfConfigTable_rowreq_ctx *rowreq_ctx, long NewwtpWirelessIfDtimIntvl_val );
int NewwtpWirelessIfDtimIntvl_undo( dot11NewWtpWirelessIfConfigTable_rowreq_ctx *rowreq_ctx );

int NewwtpWirelessIfShtRetryThld_check_value( dot11NewWtpWirelessIfConfigTable_rowreq_ctx *rowreq_ctx, long NewwtpWirelessIfShtRetryThld_val);
int NewwtpWirelessIfShtRetryThld_undo_setup( dot11NewWtpWirelessIfConfigTable_rowreq_ctx *rowreq_ctx );
int NewwtpWirelessIfShtRetryThld_set( dot11NewWtpWirelessIfConfigTable_rowreq_ctx *rowreq_ctx, long NewwtpWirelessIfShtRetryThld_val );
int NewwtpWirelessIfShtRetryThld_undo( dot11NewWtpWirelessIfConfigTable_rowreq_ctx *rowreq_ctx );

int NewwtpWirelessIfLongRetryThld_check_value( dot11NewWtpWirelessIfConfigTable_rowreq_ctx *rowreq_ctx, long NewwtpWirelessIfLongRetryThld_val);
int NewwtpWirelessIfLongRetryThld_undo_setup( dot11NewWtpWirelessIfConfigTable_rowreq_ctx *rowreq_ctx );
int NewwtpWirelessIfLongRetryThld_set( dot11NewWtpWirelessIfConfigTable_rowreq_ctx *rowreq_ctx, long NewwtpWirelessIfLongRetryThld_val );
int NewwtpWirelessIfLongRetryThld_undo( dot11NewWtpWirelessIfConfigTable_rowreq_ctx *rowreq_ctx );

int NewwtpWirelessIfMaxRxLifetime_check_value( dot11NewWtpWirelessIfConfigTable_rowreq_ctx *rowreq_ctx, u_long NewwtpWirelessIfMaxRxLifetime_val);
int NewwtpWirelessIfMaxRxLifetime_undo_setup( dot11NewWtpWirelessIfConfigTable_rowreq_ctx *rowreq_ctx );
int NewwtpWirelessIfMaxRxLifetime_set( dot11NewWtpWirelessIfConfigTable_rowreq_ctx *rowreq_ctx, u_long NewwtpWirelessIfMaxRxLifetime_val );
int NewwtpWirelessIfMaxRxLifetime_undo( dot11NewWtpWirelessIfConfigTable_rowreq_ctx *rowreq_ctx );

int NewWtpPreambleLen_check_value( dot11NewWtpWirelessIfConfigTable_rowreq_ctx *rowreq_ctx, u_long NewWtpPreambleLen_val);
int NewWtpPreambleLen_undo_setup( dot11NewWtpWirelessIfConfigTable_rowreq_ctx *rowreq_ctx );
int NewWtpPreambleLen_set( dot11NewWtpWirelessIfConfigTable_rowreq_ctx *rowreq_ctx, u_long NewWtpPreambleLen_val );
int NewWtpPreambleLen_undo( dot11NewWtpWirelessIfConfigTable_rowreq_ctx *rowreq_ctx );

int NewRtsThreshold_check_value( dot11NewWtpWirelessIfConfigTable_rowreq_ctx *rowreq_ctx, long NewRtsThreshold_val);
int NewRtsThreshold_undo_setup( dot11NewWtpWirelessIfConfigTable_rowreq_ctx *rowreq_ctx );
int NewRtsThreshold_set( dot11NewWtpWirelessIfConfigTable_rowreq_ctx *rowreq_ctx, long NewRtsThreshold_val );
int NewRtsThreshold_undo( dot11NewWtpWirelessIfConfigTable_rowreq_ctx *rowreq_ctx );

int NewFragThreshlod_check_value( dot11NewWtpWirelessIfConfigTable_rowreq_ctx *rowreq_ctx, long NewFragThreshlod_val);
int NewFragThreshlod_undo_setup( dot11NewWtpWirelessIfConfigTable_rowreq_ctx *rowreq_ctx );
int NewFragThreshlod_set( dot11NewWtpWirelessIfConfigTable_rowreq_ctx *rowreq_ctx, long NewFragThreshlod_val );
int NewFragThreshlod_undo( dot11NewWtpWirelessIfConfigTable_rowreq_ctx *rowreq_ctx );


int dot11NewWtpWirelessIfConfigTable_check_dependencies(dot11NewWtpWirelessIfConfigTable_rowreq_ctx *ctx);


#ifdef __cplusplus
}
#endif

#endif /* DOT11NEWWTPWIRELESSIFCONFIGTABLE_DATA_SET_H */
