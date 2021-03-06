/*
 * Note: this file originally auto-generated by mib2c using
 *       version : 15899 $ of $
 *
 * $Id:$
 */
/** @ingroup interface: Routines to interface to Net-SNMP
 *
 * \warning This code should not be modified, called directly,
 *          or used to interpret functionality. It is subject to
 *          change at any time.
 * 
 * @{
 */
/*
 * *********************************************************************
 * *********************************************************************
 * *********************************************************************
 * ***                                                               ***
 * ***  NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE  ***
 * ***                                                               ***
 * ***                                                               ***
 * ***       THIS FILE DOES NOT CONTAIN ANY USER EDITABLE CODE.      ***
 * ***                                                               ***
 * ***                                                               ***
 * ***       THE GENERATED CODE IS INTERNAL IMPLEMENTATION, AND      ***
 * ***                                                               ***
 * ***                                                               ***
 * ***    IS SUBJECT TO CHANGE WITHOUT WARNING IN FUTURE RELEASES.   ***
 * ***                                                               ***
 * ***                                                               ***
 * *********************************************************************
 * *********************************************************************
 * *********************************************************************
 */
#ifndef DOT11SSIDCONFIGTABLE_INTERFACE_H
#define DOT11SSIDCONFIGTABLE_INTERFACE_H

#ifdef __cplusplus
extern "C" {
#endif


#include "dot11SSIDConfigTable.h"


/* ********************************************************************
 * Table declarations
 */

/* PUBLIC interface initialization routine */
void _dot11SSIDConfigTable_initialize_interface(dot11SSIDConfigTable_registration * user_ctx,
                                    u_long flags);
void _dot11SSIDConfigTable_shutdown_interface(dot11SSIDConfigTable_registration * user_ctx);

dot11SSIDConfigTable_registration *
dot11SSIDConfigTable_registration_get( void );

dot11SSIDConfigTable_registration *
dot11SSIDConfigTable_registration_set( dot11SSIDConfigTable_registration * newreg );

netsnmp_container *dot11SSIDConfigTable_container_get( void );
int dot11SSIDConfigTable_container_size( void );

u_int dot11SSIDConfigTable_dirty_get( void );
void dot11SSIDConfigTable_dirty_set( u_int status );

    dot11SSIDConfigTable_rowreq_ctx * dot11SSIDConfigTable_allocate_rowreq_ctx(void *);
void dot11SSIDConfigTable_release_rowreq_ctx(dot11SSIDConfigTable_rowreq_ctx *rowreq_ctx);

int dot11SSIDConfigTable_index_to_oid(netsnmp_index *oid_idx,
                            dot11SSIDConfigTable_mib_index *mib_idx);
int dot11SSIDConfigTable_index_from_oid(netsnmp_index *oid_idx,
                              dot11SSIDConfigTable_mib_index *mib_idx);

/* *********************************************************************
 * Persistent declarations
 */
/*
 * persistence
 */
#define LINE_TERM_CHAR '$'

void dot11SSIDConfigTable_container_init_persistence( netsnmp_container * container );
int dot11SSIDConfigTable_container_should_save(dot11SSIDConfigTable_rowreq_ctx * rowreq_ctx);


/*
 * access to certain internals. use with caution!
 */
void dot11SSIDConfigTable_valid_columns_set(netsnmp_column_info *vc);


#ifdef __cplusplus
}
#endif

#endif /* DOT11SSIDCONFIGTABLE_INTERFACE_H */
/** @} */
