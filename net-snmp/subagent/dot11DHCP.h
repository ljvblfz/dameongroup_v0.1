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
* dot11DHCP.h
*
*
* CREATOR:
* autelan.software.Network Dep. team
*
* DESCRIPTION:
* 
*
*
*******************************************************************************/

#ifndef DOT11DHCP_H
#define DOT11DHCP_H

/* function declarations */
void init_dot11DHCP(void);
Netsnmp_Node_Handler handle_DHCPIPPoolUsage;
Netsnmp_Node_Handler handle_DHCPReqTimes;
Netsnmp_Node_Handler handle_DHCPReqSucTimes;
Netsnmp_Node_Handler handle_DHCPAvgUsage;
Netsnmp_Node_Handler handle_DHCPPeakUsage;
Netsnmp_Node_Handler handle_DHCPIpNum;
Netsnmp_Node_Handler handle_DHCPDiscoverTimes;
Netsnmp_Node_Handler handle_DHCPOfferTimes;
/**wangchao add**/
Netsnmp_Node_Handler handle_Ipv6DHCPReqTimes;
Netsnmp_Node_Handler handle_Ipv6DHCPReqSucTimes;

#endif /* DOT11DHCP_H */
