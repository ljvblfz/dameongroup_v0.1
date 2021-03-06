/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "RANAP-IEs"
 * 	found in "RANAP-IEs.asn"
 */

#ifndef	_PermittedEncryptionAlgorithms_H_
#define	_PermittedEncryptionAlgorithms_H_


#include <asn_application.h>

/* Including external dependencies */
#include "EncryptionAlgorithm.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* PermittedEncryptionAlgorithms */
typedef struct PermittedEncryptionAlgorithms {
	A_SEQUENCE_OF(EncryptionAlgorithm_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PermittedEncryptionAlgorithms_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PermittedEncryptionAlgorithms;

#ifdef __cplusplus
}
#endif

#endif	/* _PermittedEncryptionAlgorithms_H_ */
#include <asn_internal.h>
