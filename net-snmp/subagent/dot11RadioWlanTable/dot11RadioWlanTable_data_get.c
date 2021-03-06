/*
 * Note: this file originally auto-generated by mib2c using
 *       version : 1.18.2.1 $ of : mfd-data-get.m2c,v $ 
 *
 * $Id:$
 */
/* standard Net-SNMP includes */
#include <net-snmp/net-snmp-config.h>
#include <net-snmp/net-snmp-includes.h>
#include <net-snmp/agent/net-snmp-agent-includes.h>

/* include our parent header */
#include "dot11RadioWlanTable.h"


/** @defgroup data_get data_get: Routines to get data
 *
 * TODO:230:M: Implement dot11RadioWlanTable get routines.
 * TODO:240:M: Implement dot11RadioWlanTable mapping routines (if any).
 *
 * These routine are used to get the value for individual objects. The
 * row context is passed, along with a pointer to the memory where the
 * value should be copied.
 *
 * @{
 */
/**********************************************************************
 **********************************************************************
 ***
 *** Table dot11RadioWlanTable
 ***
 **********************************************************************
 **********************************************************************/
/*
 * dot11RadioWlanTable is subid 5 of wtpRadio.
 * Its status is Current.
 * OID: .1.3.6.1.4.1.31656.6.1.1.4.5, length: 12
*/

/* ---------------------------------------------------------------------
 * TODO:200:r: Implement dot11RadioWlanTable data context functions.
 */

/*---------------------------------------------------------------------
 * DOT11-WTP-MIB::dot11RadioStatsEntry.wtpRadCurrID
 * wtpRadCurrID is subid 1 of dot11RadioStatsEntry.
 * Its status is Current, and its access level is ReadOnly.
 * OID: .1.3.6.1.4.1.31656.6.1.1.4.1.1.1
 * Description:
Current radio ID.
 *
 * Attributes:
 *   accessible 1     isscalar 0     enums  0      hasdefval 0
 *   readable   1     iscolumn 1     ranges 0      hashint   0
 *   settable   0
 *
 *
 * Its syntax is INTEGER (based on perltype INTEGER)
 * The net-snmp type is ASN_INTEGER. The C type decl is long (long)
 */
/**
 * map a value from its original native format to the MIB format.
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_ERROR           : Any other error
 *
 * @note parameters follow the memset convention (dest, src).
 *
 * @note generation and use of this function can be turned off by re-running
 * mib2c after adding the following line to the file
 * default-node-wtpRadCurrID.m2d :
 *   @eval $m2c_node_skip_mapping = 1@
 *
 * @remark
 *  If the values for your data type don't exactly match the
 *  possible values defined by the mib, you should map them here.
 *  Otherwise, just do a direct copy.
 */
int
wtpRadCurrID_map(long *mib_wtpRadCurrID_val_ptr, long raw_wtpRadCurrID_val)
{
    netsnmp_assert(NULL != mib_wtpRadCurrID_val_ptr);
    
    DEBUGMSGTL(("verbose:dot11RadioWlanTable:wtpRadCurrID_map","called\n"));
    
    /*
     * TODO:241:o: |-> Implement wtpRadCurrID mapping.
     * If the values for your data type don't exactly match the
     * possible values defined by the mib, you should map them here.
     */
    (*mib_wtpRadCurrID_val_ptr) = raw_wtpRadCurrID_val;

    return MFD_SUCCESS;
} /* wtpRadCurrID_map */

/*---------------------------------------------------------------------
 * DOT11-WTP-MIB::dot11RadioWlanEntry.BindWlanID
 * BindWlanID is subid 1 of dot11RadioWlanEntry.
 * Its status is Current, and its access level is ReadOnly.
 * OID: .1.3.6.1.4.1.31656.6.1.1.4.5.1.1
 * Description:
Radio bind WLAN ID.
 *
 * Attributes:
 *   accessible 1     isscalar 0     enums  0      hasdefval 0
 *   readable   1     iscolumn 1     ranges 0      hashint   0
 *   settable   0
 *
 *
 * Its syntax is INTEGER (based on perltype INTEGER)
 * The net-snmp type is ASN_INTEGER. The C type decl is long (long)
 */
/**
 * map a value from its original native format to the MIB format.
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_ERROR           : Any other error
 *
 * @note parameters follow the memset convention (dest, src).
 *
 * @note generation and use of this function can be turned off by re-running
 * mib2c after adding the following line to the file
 * default-node-BindWlanID.m2d :
 *   @eval $m2c_node_skip_mapping = 1@
 *
 * @remark
 *  If the values for your data type don't exactly match the
 *  possible values defined by the mib, you should map them here.
 *  Otherwise, just do a direct copy.
 */
int
BindWlanID_map(long *mib_BindWlanID_val_ptr, long raw_BindWlanID_val)
{
    netsnmp_assert(NULL != mib_BindWlanID_val_ptr);
    
    DEBUGMSGTL(("verbose:dot11RadioWlanTable:BindWlanID_map","called\n"));
    
    /*
     * TODO:241:o: |-> Implement BindWlanID mapping.
     * If the values for your data type don't exactly match the
     * possible values defined by the mib, you should map them here.
     */
    (*mib_BindWlanID_val_ptr) = raw_BindWlanID_val;

    return MFD_SUCCESS;
} /* BindWlanID_map */


/**
 * set mib index(es)
 *
 * @param tbl_idx mib index structure
 *
 * @retval MFD_SUCCESS     : success.
 * @retval MFD_ERROR       : other error.
 *
 * @remark
 *  This convenience function is useful for setting all the MIB index
 *  components with a single function call. It is assume that the C values
 *  have already been mapped from their native/rawformat to the MIB format.
 */
int
dot11RadioWlanTable_indexes_set_tbl_idx(dot11RadioWlanTable_mib_index *tbl_idx, long wtpRadCurrID_val, long BindWlanID_val)
{
    DEBUGMSGTL(("verbose:dot11RadioWlanTable:dot11RadioWlanTable_indexes_set_tbl_idx","called\n"));

    /* wtpRadCurrID(1)/INTEGER/ASN_INTEGER/long(long)//l/A/w/e/r/d/h */
    tbl_idx->wtpRadCurrID = wtpRadCurrID_val;
    
    /* BindWlanID(1)/INTEGER/ASN_INTEGER/long(long)//l/A/w/e/r/d/h */
    tbl_idx->BindWlanID = BindWlanID_val;
    

    return MFD_SUCCESS;
} /* dot11RadioWlanTable_indexes_set_tbl_idx */

/**
 * @internal
 * set row context indexes
 *
 * @param reqreq_ctx the row context that needs updated indexes
 *
 * @retval MFD_SUCCESS     : success.
 * @retval MFD_ERROR       : other error.
 *
 * @remark
 *  This function sets the mib indexs, then updates the oid indexs
 *  from the mib index.
 */
int
dot11RadioWlanTable_indexes_set(dot11RadioWlanTable_rowreq_ctx *rowreq_ctx, long wtpRadCurrID_val, long BindWlanID_val)
{
    DEBUGMSGTL(("verbose:dot11RadioWlanTable:dot11RadioWlanTable_indexes_set","called\n"));

    if(MFD_SUCCESS != dot11RadioWlanTable_indexes_set_tbl_idx(&rowreq_ctx->tbl_idx
                                   , wtpRadCurrID_val
                                   , BindWlanID_val
           ))
        return MFD_ERROR;

    /*
     * convert mib index to oid index
     */
    rowreq_ctx->oid_idx.len = sizeof(rowreq_ctx->oid_tmp) / sizeof(oid);
    if(0 != dot11RadioWlanTable_index_to_oid(&rowreq_ctx->oid_idx,
                                    &rowreq_ctx->tbl_idx)) {
        return MFD_ERROR;
    }

    return MFD_SUCCESS;
} /* dot11RadioWlanTable_indexes_set */


/*---------------------------------------------------------------------
 * DOT11-WTP-MIB::dot11RadioWlanEntry.TrafficLimitState
 * TrafficLimitState is subid 2 of dot11RadioWlanEntry.
 * Its status is Current, and its access level is ReadWrite.
 * OID: .1.3.6.1.4.1.31656.6.1.1.4.5.1.2
 * Description:
Traffic limit state.
 *
 * Attributes:
 *   accessible 1     isscalar 0     enums  1      hasdefval 0
 *   readable   1     iscolumn 1     ranges 0      hashint   0
 *   settable   1
 *
 * Enum range: 2/8. Values:  enable(1), disable(2)
 *
 * Its syntax is INTEGER (based on perltype INTEGER)
 * The net-snmp type is ASN_INTEGER. The C type decl is long (u_long)
 */
/**
 * map a value from its original native format to the MIB format.
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_ERROR           : Any other error
 *
 * @note parameters follow the memset convention (dest, src).
 *
 * @note generation and use of this function can be turned off by re-running
 * mib2c after adding the following line to the file
 * default-node-TrafficLimitState.m2d :
 *   @eval $m2c_node_skip_mapping = 1@
 *
 * @remark
 *  If the values for your data type don't exactly match the
 *  possible values defined by the mib, you should map them here.
 *  Otherwise, just do a direct copy.
 */
int
TrafficLimitState_map(u_long *mib_TrafficLimitState_val_ptr, u_long raw_TrafficLimitState_val)
{
    netsnmp_assert(NULL != mib_TrafficLimitState_val_ptr);
    
    DEBUGMSGTL(("verbose:dot11RadioWlanTable:TrafficLimitState_map","called\n"));
    
    /*
     * TODO:241:o: |-> Implement TrafficLimitState enum mapping.
     * uses INTERNAL_* macros defined in the header files
     */
    switch(raw_TrafficLimitState_val) {
        case INTERNAL_TRAFFICLIMITSTATE_ENABLE:
             *mib_TrafficLimitState_val_ptr = TRAFFICLIMITSTATE_ENABLE;
             break;

        case INTERNAL_TRAFFICLIMITSTATE_DISABLE:
             *mib_TrafficLimitState_val_ptr = TRAFFICLIMITSTATE_DISABLE;
             break;

             default:
                 snmp_log(LOG_ERR, "couldn't map value %ld for TrafficLimitState\n", raw_TrafficLimitState_val );
                 return MFD_ERROR;
    }

    return MFD_SUCCESS;
} /* TrafficLimitState_map */

/**
 * Extract the current value of the TrafficLimitState data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param TrafficLimitState_val_ptr
 *        Pointer to storage for a long variable
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
 */
int
TrafficLimitState_get( dot11RadioWlanTable_rowreq_ctx *rowreq_ctx, u_long * TrafficLimitState_val_ptr )
{
   /** we should have a non-NULL pointer */
   netsnmp_assert( NULL != TrafficLimitState_val_ptr );


    DEBUGMSGTL(("verbose:dot11RadioWlanTable:TrafficLimitState_get","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

/*
 * TODO:231:o: |-> Extract the current value of the TrafficLimitState data.
 * set (* TrafficLimitState_val_ptr ) from rowreq_ctx->data
 */
    (* TrafficLimitState_val_ptr ) = rowreq_ctx->data.TrafficLimitState;

    return MFD_SUCCESS;
} /* TrafficLimitState_get */

/*---------------------------------------------------------------------
 * DOT11-WTP-MIB::dot11RadioWlanEntry.TrafficLimitValue
 * TrafficLimitValue is subid 3 of dot11RadioWlanEntry.
 * Its status is Current, and its access level is ReadWrite.
 * OID: .1.3.6.1.4.1.31656.6.1.1.4.5.1.3
 * Description:
Traffic limit value.
 *
 * Attributes:
 *   accessible 1     isscalar 0     enums  0      hasdefval 0
 *   readable   1     iscolumn 1     ranges 0      hashint   0
 *   settable   1
 *
 *
 * Its syntax is INTEGER (based on perltype INTEGER)
 * The net-snmp type is ASN_INTEGER. The C type decl is long (long)
 */
/**
 * map a value from its original native format to the MIB format.
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_ERROR           : Any other error
 *
 * @note parameters follow the memset convention (dest, src).
 *
 * @note generation and use of this function can be turned off by re-running
 * mib2c after adding the following line to the file
 * default-node-TrafficLimitValue.m2d :
 *   @eval $m2c_node_skip_mapping = 1@
 *
 * @remark
 *  If the values for your data type don't exactly match the
 *  possible values defined by the mib, you should map them here.
 *  Otherwise, just do a direct copy.
 */
int
TrafficLimitValue_map(long *mib_TrafficLimitValue_val_ptr, long raw_TrafficLimitValue_val)
{
    netsnmp_assert(NULL != mib_TrafficLimitValue_val_ptr);
    
    DEBUGMSGTL(("verbose:dot11RadioWlanTable:TrafficLimitValue_map","called\n"));
    
    /*
     * TODO:241:o: |-> Implement TrafficLimitValue mapping.
     * If the values for your data type don't exactly match the
     * possible values defined by the mib, you should map them here.
     */
    (*mib_TrafficLimitValue_val_ptr) = raw_TrafficLimitValue_val;

    return MFD_SUCCESS;
} /* TrafficLimitValue_map */

/**
 * Extract the current value of the TrafficLimitValue data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param TrafficLimitValue_val_ptr
 *        Pointer to storage for a long variable
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
 */
int
TrafficLimitValue_get( dot11RadioWlanTable_rowreq_ctx *rowreq_ctx, long * TrafficLimitValue_val_ptr )
{
   /** we should have a non-NULL pointer */
   netsnmp_assert( NULL != TrafficLimitValue_val_ptr );


    DEBUGMSGTL(("verbose:dot11RadioWlanTable:TrafficLimitValue_get","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

/*
 * TODO:231:o: |-> Extract the current value of the TrafficLimitValue data.
 * set (* TrafficLimitValue_val_ptr ) from rowreq_ctx->data
 */
    (* TrafficLimitValue_val_ptr ) = rowreq_ctx->data.TrafficLimitValue;

    return MFD_SUCCESS;
} /* TrafficLimitValue_get */

/*---------------------------------------------------------------------
 * DOT11-WTP-MIB::dot11RadioWlanEntry.IsOnlyAllow11nStaAccess
 * IsOnlyAllow11nStaAccess is subid 4 of dot11RadioWlanEntry.
 * Its status is Current, and its access level is ReadWrite.
 * OID: .1.3.6.1.4.1.31656.6.1.1.4.5.1.4
 * Description:
Whether only allows 11N terminal access.
 *
 * Attributes:
 *   accessible 1     isscalar 0     enums  1      hasdefval 0
 *   readable   1     iscolumn 1     ranges 0      hashint   0
 *   settable   1
 *
 * Enum range: 2/8. Values:  true(1), false(2)
 *
 * Its syntax is TruthValue (based on perltype INTEGER)
 * The net-snmp type is ASN_INTEGER. The C type decl is long (u_long)
 */
/**
 * map a value from its original native format to the MIB format.
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_ERROR           : Any other error
 *
 * @note parameters follow the memset convention (dest, src).
 *
 * @note generation and use of this function can be turned off by re-running
 * mib2c after adding the following line to the file
 * default-node-IsOnlyAllow11nStaAccess.m2d :
 *   @eval $m2c_node_skip_mapping = 1@
 *
 * @remark
 *  If the values for your data type don't exactly match the
 *  possible values defined by the mib, you should map them here.
 *  Otherwise, just do a direct copy.
 */
int
IsOnlyAllow11nStaAccess_map(u_long *mib_IsOnlyAllow11nStaAccess_val_ptr, u_long raw_IsOnlyAllow11nStaAccess_val)
{
    netsnmp_assert(NULL != mib_IsOnlyAllow11nStaAccess_val_ptr);
    
    DEBUGMSGTL(("verbose:dot11RadioWlanTable:IsOnlyAllow11nStaAccess_map","called\n"));
    
    /*
     * TODO:241:o: |-> Implement IsOnlyAllow11nStaAccess enum mapping.
     * uses INTERNAL_* macros defined in the header files
     */
    switch(raw_IsOnlyAllow11nStaAccess_val) {
        case INTERNAL_ISONLYALLOW11NSTAACCESS_TRUE:
             *mib_IsOnlyAllow11nStaAccess_val_ptr = TRUTHVALUE_TRUE;
             break;

        case INTERNAL_ISONLYALLOW11NSTAACCESS_FALSE:
             *mib_IsOnlyAllow11nStaAccess_val_ptr = TRUTHVALUE_FALSE;
             break;

             default:
                 snmp_log(LOG_ERR, "couldn't map value %ld for IsOnlyAllow11nStaAccess\n", raw_IsOnlyAllow11nStaAccess_val );
                 return MFD_ERROR;
    }

    return MFD_SUCCESS;
} /* IsOnlyAllow11nStaAccess_map */

/**
 * Extract the current value of the IsOnlyAllow11nStaAccess data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param IsOnlyAllow11nStaAccess_val_ptr
 *        Pointer to storage for a long variable
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
 */
int
IsOnlyAllow11nStaAccess_get( dot11RadioWlanTable_rowreq_ctx *rowreq_ctx, u_long * IsOnlyAllow11nStaAccess_val_ptr )
{
   /** we should have a non-NULL pointer */
   netsnmp_assert( NULL != IsOnlyAllow11nStaAccess_val_ptr );


    DEBUGMSGTL(("verbose:dot11RadioWlanTable:IsOnlyAllow11nStaAccess_get","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

/*
 * TODO:231:o: |-> Extract the current value of the IsOnlyAllow11nStaAccess data.
 * set (* IsOnlyAllow11nStaAccess_val_ptr ) from rowreq_ctx->data
 */
    (* IsOnlyAllow11nStaAccess_val_ptr ) = rowreq_ctx->data.IsOnlyAllow11nStaAccess;

    return MFD_SUCCESS;
} /* IsOnlyAllow11nStaAccess_get */



/** @} */
