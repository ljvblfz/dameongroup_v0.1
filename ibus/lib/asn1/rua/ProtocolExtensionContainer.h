/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "RUA-Containers"
 * 	found in "RUA-Containers.asn"
 */

#ifndef	_ProtocolExtensionContainer_H_
#define	_ProtocolExtensionContainer_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include "ProtocolIE-ID.h"
#include "Criticality.h"
#include <ANY.h>
#include <constr_SEQUENCE.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif
struct ProtocolExtensionContainerMember {
		ProtocolIE_ID_t	 id;
		Criticality_t	 criticality;
		ANY_t	 extensionValue;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
};

/* ProtocolExtensionContainer */
typedef struct ProtocolExtensionContainer_151P0 {
	A_SEQUENCE_OF(struct ProtocolExtensionContainerMember) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolExtensionContainer_151P0_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ProtocolExtensionContainer_151P0;

#ifdef __cplusplus
}
#endif

#endif	/* _ProtocolExtensionContainer_H_ */
#include <asn_internal.h>
