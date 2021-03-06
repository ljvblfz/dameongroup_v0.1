/*******************************************************************************
Copyright (C) Autelan Technology


This software file is owned and distributed by Autelan Technology 
********************************************************************************


THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND 
ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED 
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE 
DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR 
ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES 
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; 
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON 
ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT 
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS 
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
********************************************************************************
* facl_errcode.h
*
*
* CREATOR:
* autelan.software.xxx. team
*
* DESCRIPTION:
* xxx module main routine
*
*
*******************************************************************************/

#ifndef _FACL_ERRCODE_H
#define _FACL_ERRCODE_H

#include "nm_errcode.h"

#define FACL_TRUE			(NM_TRUE)
#define FACL_FALSE			(NM_FALSE)

#define FACL_RETURN_OK			(NM_RETURN_OK)

#define FACL_ERR_BASE			(NM_ERR_BASE-20000)

#define FACL_POLICY_NAME_ALREADY_EXIST	(FACL_ERR_BASE-1)
#define FACL_POLICY_NAME_NOT_EXIST	(FACL_ERR_BASE-2)
#define FACL_POLICY_TAG_ALREADY_EXIST	(FACL_ERR_BASE-3)
#define FACL_POLICY_TAG_NOT_EXIST		(FACL_ERR_BASE-4)
#define FACL_NAME_LEN_ERR				(FACL_ERR_BASE-5)
#define FACL_TAG_VALUE_ERR				(FACL_ERR_BASE-6)


#define FACL_INDEX_INPUT_ERR		(FACL_ERR_BASE-14)
#define FACL_INDEX_ALREADY_EXIST	(FACL_ERR_BASE-15)
#define FACL_INTF_FAILED		(FACL_ERR_BASE-16)
#define FACL_IP_FORMAT_ERR		(FACL_ERR_BASE-17)
#define FACL_PORT_FORMAT_ERR		(FACL_ERR_BASE-18)
#define FACL_PROTO_UNKNOWN		(FACL_ERR_BASE-19)
#define FACL_TOTAL_RULE_NUM_OVER	(FACL_ERR_BASE-20)


//#define FACL_INDEX_INPUT_ERR		(FACL_ERR_BASE-224)





#endif

