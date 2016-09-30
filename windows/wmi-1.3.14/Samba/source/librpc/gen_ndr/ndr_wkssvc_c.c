/* client functions auto-generated by pidl */

#include "includes.h"
#include "librpc/gen_ndr/ndr_wkssvc.h"
#include "librpc/gen_ndr/ndr_wkssvc_c.h"

/* wkssvc - client functions generated by pidl */


struct rpc_request *dcerpc_wkssvc_NetWkstaGetInfo_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct wkssvc_NetWkstaGetInfo *r)
{
	if (p->conn->flags & DCERPC_DEBUG_PRINT_IN) {
		NDR_PRINT_IN_DEBUG(wkssvc_NetWkstaGetInfo, r);
	}
	
	return dcerpc_ndr_request_send(p, NULL, &dcerpc_table_wkssvc, DCERPC_WKSSVC_NETWKSTAGETINFO, mem_ctx, r);
}

NTSTATUS dcerpc_wkssvc_NetWkstaGetInfo(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct wkssvc_NetWkstaGetInfo *r)
{
	struct rpc_request *req;
	NTSTATUS status;
	
	req = dcerpc_wkssvc_NetWkstaGetInfo_send(p, mem_ctx, r);
	if (req == NULL) return NT_STATUS_NO_MEMORY;

	status = dcerpc_ndr_request_recv(req);

	if (NT_STATUS_IS_OK(status) && (p->conn->flags & DCERPC_DEBUG_PRINT_OUT)) {
		NDR_PRINT_OUT_DEBUG(wkssvc_NetWkstaGetInfo, r);		
	}

	return status;
}

struct rpc_request *dcerpc_wkssvc_NetWkstaSetInfo_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct wkssvc_NetWkstaSetInfo *r)
{
	if (p->conn->flags & DCERPC_DEBUG_PRINT_IN) {
		NDR_PRINT_IN_DEBUG(wkssvc_NetWkstaSetInfo, r);
	}
	
	return dcerpc_ndr_request_send(p, NULL, &dcerpc_table_wkssvc, DCERPC_WKSSVC_NETWKSTASETINFO, mem_ctx, r);
}

NTSTATUS dcerpc_wkssvc_NetWkstaSetInfo(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct wkssvc_NetWkstaSetInfo *r)
{
	struct rpc_request *req;
	NTSTATUS status;
	
	req = dcerpc_wkssvc_NetWkstaSetInfo_send(p, mem_ctx, r);
	if (req == NULL) return NT_STATUS_NO_MEMORY;

	status = dcerpc_ndr_request_recv(req);

	if (NT_STATUS_IS_OK(status) && (p->conn->flags & DCERPC_DEBUG_PRINT_OUT)) {
		NDR_PRINT_OUT_DEBUG(wkssvc_NetWkstaSetInfo, r);		
	}

	return status;
}

struct rpc_request *dcerpc_wkssvc_NetWkstaEnumUsers_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct wkssvc_NetWkstaEnumUsers *r)
{
	if (p->conn->flags & DCERPC_DEBUG_PRINT_IN) {
		NDR_PRINT_IN_DEBUG(wkssvc_NetWkstaEnumUsers, r);
	}
	
	return dcerpc_ndr_request_send(p, NULL, &dcerpc_table_wkssvc, DCERPC_WKSSVC_NETWKSTAENUMUSERS, mem_ctx, r);
}

NTSTATUS dcerpc_wkssvc_NetWkstaEnumUsers(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct wkssvc_NetWkstaEnumUsers *r)
{
	struct rpc_request *req;
	NTSTATUS status;
	
	req = dcerpc_wkssvc_NetWkstaEnumUsers_send(p, mem_ctx, r);
	if (req == NULL) return NT_STATUS_NO_MEMORY;

	status = dcerpc_ndr_request_recv(req);

	if (NT_STATUS_IS_OK(status) && (p->conn->flags & DCERPC_DEBUG_PRINT_OUT)) {
		NDR_PRINT_OUT_DEBUG(wkssvc_NetWkstaEnumUsers, r);		
	}

	return status;
}

struct rpc_request *dcerpc_WKSSVC_NETRWKSTAUSERGETINFO_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WKSSVC_NETRWKSTAUSERGETINFO *r)
{
	if (p->conn->flags & DCERPC_DEBUG_PRINT_IN) {
		NDR_PRINT_IN_DEBUG(WKSSVC_NETRWKSTAUSERGETINFO, r);
	}
	
	return dcerpc_ndr_request_send(p, NULL, &dcerpc_table_wkssvc, DCERPC_WKSSVC_NETRWKSTAUSERGETINFO, mem_ctx, r);
}

NTSTATUS dcerpc_WKSSVC_NETRWKSTAUSERGETINFO(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WKSSVC_NETRWKSTAUSERGETINFO *r)
{
	struct rpc_request *req;
	NTSTATUS status;
	
	req = dcerpc_WKSSVC_NETRWKSTAUSERGETINFO_send(p, mem_ctx, r);
	if (req == NULL) return NT_STATUS_NO_MEMORY;

	status = dcerpc_ndr_request_recv(req);

	if (NT_STATUS_IS_OK(status) && (p->conn->flags & DCERPC_DEBUG_PRINT_OUT)) {
		NDR_PRINT_OUT_DEBUG(WKSSVC_NETRWKSTAUSERGETINFO, r);		
	}

	return status;
}

struct rpc_request *dcerpc_WKSSVC_NETRWKSTAUSERSETINFO_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WKSSVC_NETRWKSTAUSERSETINFO *r)
{
	if (p->conn->flags & DCERPC_DEBUG_PRINT_IN) {
		NDR_PRINT_IN_DEBUG(WKSSVC_NETRWKSTAUSERSETINFO, r);
	}
	
	return dcerpc_ndr_request_send(p, NULL, &dcerpc_table_wkssvc, DCERPC_WKSSVC_NETRWKSTAUSERSETINFO, mem_ctx, r);
}

NTSTATUS dcerpc_WKSSVC_NETRWKSTAUSERSETINFO(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WKSSVC_NETRWKSTAUSERSETINFO *r)
{
	struct rpc_request *req;
	NTSTATUS status;
	
	req = dcerpc_WKSSVC_NETRWKSTAUSERSETINFO_send(p, mem_ctx, r);
	if (req == NULL) return NT_STATUS_NO_MEMORY;

	status = dcerpc_ndr_request_recv(req);

	if (NT_STATUS_IS_OK(status) && (p->conn->flags & DCERPC_DEBUG_PRINT_OUT)) {
		NDR_PRINT_OUT_DEBUG(WKSSVC_NETRWKSTAUSERSETINFO, r);		
	}

	return status;
}

struct rpc_request *dcerpc_wkssvc_NetWkstaTransportEnum_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct wkssvc_NetWkstaTransportEnum *r)
{
	if (p->conn->flags & DCERPC_DEBUG_PRINT_IN) {
		NDR_PRINT_IN_DEBUG(wkssvc_NetWkstaTransportEnum, r);
	}
	
	return dcerpc_ndr_request_send(p, NULL, &dcerpc_table_wkssvc, DCERPC_WKSSVC_NETWKSTATRANSPORTENUM, mem_ctx, r);
}

NTSTATUS dcerpc_wkssvc_NetWkstaTransportEnum(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct wkssvc_NetWkstaTransportEnum *r)
{
	struct rpc_request *req;
	NTSTATUS status;
	
	req = dcerpc_wkssvc_NetWkstaTransportEnum_send(p, mem_ctx, r);
	if (req == NULL) return NT_STATUS_NO_MEMORY;

	status = dcerpc_ndr_request_recv(req);

	if (NT_STATUS_IS_OK(status) && (p->conn->flags & DCERPC_DEBUG_PRINT_OUT)) {
		NDR_PRINT_OUT_DEBUG(wkssvc_NetWkstaTransportEnum, r);		
	}

	return status;
}

struct rpc_request *dcerpc_WKSSVC_NETRWKSTATRANSPORTADD_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WKSSVC_NETRWKSTATRANSPORTADD *r)
{
	if (p->conn->flags & DCERPC_DEBUG_PRINT_IN) {
		NDR_PRINT_IN_DEBUG(WKSSVC_NETRWKSTATRANSPORTADD, r);
	}
	
	return dcerpc_ndr_request_send(p, NULL, &dcerpc_table_wkssvc, DCERPC_WKSSVC_NETRWKSTATRANSPORTADD, mem_ctx, r);
}

NTSTATUS dcerpc_WKSSVC_NETRWKSTATRANSPORTADD(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WKSSVC_NETRWKSTATRANSPORTADD *r)
{
	struct rpc_request *req;
	NTSTATUS status;
	
	req = dcerpc_WKSSVC_NETRWKSTATRANSPORTADD_send(p, mem_ctx, r);
	if (req == NULL) return NT_STATUS_NO_MEMORY;

	status = dcerpc_ndr_request_recv(req);

	if (NT_STATUS_IS_OK(status) && (p->conn->flags & DCERPC_DEBUG_PRINT_OUT)) {
		NDR_PRINT_OUT_DEBUG(WKSSVC_NETRWKSTATRANSPORTADD, r);		
	}

	return status;
}

struct rpc_request *dcerpc_WKSSVC_NETRWKSTATRANSPORTDEL_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WKSSVC_NETRWKSTATRANSPORTDEL *r)
{
	if (p->conn->flags & DCERPC_DEBUG_PRINT_IN) {
		NDR_PRINT_IN_DEBUG(WKSSVC_NETRWKSTATRANSPORTDEL, r);
	}
	
	return dcerpc_ndr_request_send(p, NULL, &dcerpc_table_wkssvc, DCERPC_WKSSVC_NETRWKSTATRANSPORTDEL, mem_ctx, r);
}

NTSTATUS dcerpc_WKSSVC_NETRWKSTATRANSPORTDEL(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WKSSVC_NETRWKSTATRANSPORTDEL *r)
{
	struct rpc_request *req;
	NTSTATUS status;
	
	req = dcerpc_WKSSVC_NETRWKSTATRANSPORTDEL_send(p, mem_ctx, r);
	if (req == NULL) return NT_STATUS_NO_MEMORY;

	status = dcerpc_ndr_request_recv(req);

	if (NT_STATUS_IS_OK(status) && (p->conn->flags & DCERPC_DEBUG_PRINT_OUT)) {
		NDR_PRINT_OUT_DEBUG(WKSSVC_NETRWKSTATRANSPORTDEL, r);		
	}

	return status;
}

struct rpc_request *dcerpc_WKSSVC_NETRUSEADD_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WKSSVC_NETRUSEADD *r)
{
	if (p->conn->flags & DCERPC_DEBUG_PRINT_IN) {
		NDR_PRINT_IN_DEBUG(WKSSVC_NETRUSEADD, r);
	}
	
	return dcerpc_ndr_request_send(p, NULL, &dcerpc_table_wkssvc, DCERPC_WKSSVC_NETRUSEADD, mem_ctx, r);
}

NTSTATUS dcerpc_WKSSVC_NETRUSEADD(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WKSSVC_NETRUSEADD *r)
{
	struct rpc_request *req;
	NTSTATUS status;
	
	req = dcerpc_WKSSVC_NETRUSEADD_send(p, mem_ctx, r);
	if (req == NULL) return NT_STATUS_NO_MEMORY;

	status = dcerpc_ndr_request_recv(req);

	if (NT_STATUS_IS_OK(status) && (p->conn->flags & DCERPC_DEBUG_PRINT_OUT)) {
		NDR_PRINT_OUT_DEBUG(WKSSVC_NETRUSEADD, r);		
	}

	return status;
}

struct rpc_request *dcerpc_WKSSVC_NETRUSEGETINFO_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WKSSVC_NETRUSEGETINFO *r)
{
	if (p->conn->flags & DCERPC_DEBUG_PRINT_IN) {
		NDR_PRINT_IN_DEBUG(WKSSVC_NETRUSEGETINFO, r);
	}
	
	return dcerpc_ndr_request_send(p, NULL, &dcerpc_table_wkssvc, DCERPC_WKSSVC_NETRUSEGETINFO, mem_ctx, r);
}

NTSTATUS dcerpc_WKSSVC_NETRUSEGETINFO(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WKSSVC_NETRUSEGETINFO *r)
{
	struct rpc_request *req;
	NTSTATUS status;
	
	req = dcerpc_WKSSVC_NETRUSEGETINFO_send(p, mem_ctx, r);
	if (req == NULL) return NT_STATUS_NO_MEMORY;

	status = dcerpc_ndr_request_recv(req);

	if (NT_STATUS_IS_OK(status) && (p->conn->flags & DCERPC_DEBUG_PRINT_OUT)) {
		NDR_PRINT_OUT_DEBUG(WKSSVC_NETRUSEGETINFO, r);		
	}

	return status;
}

struct rpc_request *dcerpc_WKSSVC_NETRUSEDEL_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WKSSVC_NETRUSEDEL *r)
{
	if (p->conn->flags & DCERPC_DEBUG_PRINT_IN) {
		NDR_PRINT_IN_DEBUG(WKSSVC_NETRUSEDEL, r);
	}
	
	return dcerpc_ndr_request_send(p, NULL, &dcerpc_table_wkssvc, DCERPC_WKSSVC_NETRUSEDEL, mem_ctx, r);
}

NTSTATUS dcerpc_WKSSVC_NETRUSEDEL(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WKSSVC_NETRUSEDEL *r)
{
	struct rpc_request *req;
	NTSTATUS status;
	
	req = dcerpc_WKSSVC_NETRUSEDEL_send(p, mem_ctx, r);
	if (req == NULL) return NT_STATUS_NO_MEMORY;

	status = dcerpc_ndr_request_recv(req);

	if (NT_STATUS_IS_OK(status) && (p->conn->flags & DCERPC_DEBUG_PRINT_OUT)) {
		NDR_PRINT_OUT_DEBUG(WKSSVC_NETRUSEDEL, r);		
	}

	return status;
}

struct rpc_request *dcerpc_WKSSVC_NETRUSEENUM_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WKSSVC_NETRUSEENUM *r)
{
	if (p->conn->flags & DCERPC_DEBUG_PRINT_IN) {
		NDR_PRINT_IN_DEBUG(WKSSVC_NETRUSEENUM, r);
	}
	
	return dcerpc_ndr_request_send(p, NULL, &dcerpc_table_wkssvc, DCERPC_WKSSVC_NETRUSEENUM, mem_ctx, r);
}

NTSTATUS dcerpc_WKSSVC_NETRUSEENUM(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WKSSVC_NETRUSEENUM *r)
{
	struct rpc_request *req;
	NTSTATUS status;
	
	req = dcerpc_WKSSVC_NETRUSEENUM_send(p, mem_ctx, r);
	if (req == NULL) return NT_STATUS_NO_MEMORY;

	status = dcerpc_ndr_request_recv(req);

	if (NT_STATUS_IS_OK(status) && (p->conn->flags & DCERPC_DEBUG_PRINT_OUT)) {
		NDR_PRINT_OUT_DEBUG(WKSSVC_NETRUSEENUM, r);		
	}

	return status;
}

struct rpc_request *dcerpc_WKSSVC_NETRMESSAGEBUFFERSEND_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WKSSVC_NETRMESSAGEBUFFERSEND *r)
{
	if (p->conn->flags & DCERPC_DEBUG_PRINT_IN) {
		NDR_PRINT_IN_DEBUG(WKSSVC_NETRMESSAGEBUFFERSEND, r);
	}
	
	return dcerpc_ndr_request_send(p, NULL, &dcerpc_table_wkssvc, DCERPC_WKSSVC_NETRMESSAGEBUFFERSEND, mem_ctx, r);
}

NTSTATUS dcerpc_WKSSVC_NETRMESSAGEBUFFERSEND(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WKSSVC_NETRMESSAGEBUFFERSEND *r)
{
	struct rpc_request *req;
	NTSTATUS status;
	
	req = dcerpc_WKSSVC_NETRMESSAGEBUFFERSEND_send(p, mem_ctx, r);
	if (req == NULL) return NT_STATUS_NO_MEMORY;

	status = dcerpc_ndr_request_recv(req);

	if (NT_STATUS_IS_OK(status) && (p->conn->flags & DCERPC_DEBUG_PRINT_OUT)) {
		NDR_PRINT_OUT_DEBUG(WKSSVC_NETRMESSAGEBUFFERSEND, r);		
	}

	return status;
}

struct rpc_request *dcerpc_WKSSVC_NETRWORKSTATIONSTATISTICSGET_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WKSSVC_NETRWORKSTATIONSTATISTICSGET *r)
{
	if (p->conn->flags & DCERPC_DEBUG_PRINT_IN) {
		NDR_PRINT_IN_DEBUG(WKSSVC_NETRWORKSTATIONSTATISTICSGET, r);
	}
	
	return dcerpc_ndr_request_send(p, NULL, &dcerpc_table_wkssvc, DCERPC_WKSSVC_NETRWORKSTATIONSTATISTICSGET, mem_ctx, r);
}

NTSTATUS dcerpc_WKSSVC_NETRWORKSTATIONSTATISTICSGET(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WKSSVC_NETRWORKSTATIONSTATISTICSGET *r)
{
	struct rpc_request *req;
	NTSTATUS status;
	
	req = dcerpc_WKSSVC_NETRWORKSTATIONSTATISTICSGET_send(p, mem_ctx, r);
	if (req == NULL) return NT_STATUS_NO_MEMORY;

	status = dcerpc_ndr_request_recv(req);

	if (NT_STATUS_IS_OK(status) && (p->conn->flags & DCERPC_DEBUG_PRINT_OUT)) {
		NDR_PRINT_OUT_DEBUG(WKSSVC_NETRWORKSTATIONSTATISTICSGET, r);		
	}

	return status;
}

struct rpc_request *dcerpc_WKSSVC_NETRLOGONDOMAINNAMEADD_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WKSSVC_NETRLOGONDOMAINNAMEADD *r)
{
	if (p->conn->flags & DCERPC_DEBUG_PRINT_IN) {
		NDR_PRINT_IN_DEBUG(WKSSVC_NETRLOGONDOMAINNAMEADD, r);
	}
	
	return dcerpc_ndr_request_send(p, NULL, &dcerpc_table_wkssvc, DCERPC_WKSSVC_NETRLOGONDOMAINNAMEADD, mem_ctx, r);
}

NTSTATUS dcerpc_WKSSVC_NETRLOGONDOMAINNAMEADD(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WKSSVC_NETRLOGONDOMAINNAMEADD *r)
{
	struct rpc_request *req;
	NTSTATUS status;
	
	req = dcerpc_WKSSVC_NETRLOGONDOMAINNAMEADD_send(p, mem_ctx, r);
	if (req == NULL) return NT_STATUS_NO_MEMORY;

	status = dcerpc_ndr_request_recv(req);

	if (NT_STATUS_IS_OK(status) && (p->conn->flags & DCERPC_DEBUG_PRINT_OUT)) {
		NDR_PRINT_OUT_DEBUG(WKSSVC_NETRLOGONDOMAINNAMEADD, r);		
	}

	return status;
}

struct rpc_request *dcerpc_WKSSVC_NETRLOGONDOMAINNAMEDEL_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WKSSVC_NETRLOGONDOMAINNAMEDEL *r)
{
	if (p->conn->flags & DCERPC_DEBUG_PRINT_IN) {
		NDR_PRINT_IN_DEBUG(WKSSVC_NETRLOGONDOMAINNAMEDEL, r);
	}
	
	return dcerpc_ndr_request_send(p, NULL, &dcerpc_table_wkssvc, DCERPC_WKSSVC_NETRLOGONDOMAINNAMEDEL, mem_ctx, r);
}

NTSTATUS dcerpc_WKSSVC_NETRLOGONDOMAINNAMEDEL(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WKSSVC_NETRLOGONDOMAINNAMEDEL *r)
{
	struct rpc_request *req;
	NTSTATUS status;
	
	req = dcerpc_WKSSVC_NETRLOGONDOMAINNAMEDEL_send(p, mem_ctx, r);
	if (req == NULL) return NT_STATUS_NO_MEMORY;

	status = dcerpc_ndr_request_recv(req);

	if (NT_STATUS_IS_OK(status) && (p->conn->flags & DCERPC_DEBUG_PRINT_OUT)) {
		NDR_PRINT_OUT_DEBUG(WKSSVC_NETRLOGONDOMAINNAMEDEL, r);		
	}

	return status;
}

struct rpc_request *dcerpc_WKSSVC_NETRJOINDOMAIN_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WKSSVC_NETRJOINDOMAIN *r)
{
	if (p->conn->flags & DCERPC_DEBUG_PRINT_IN) {
		NDR_PRINT_IN_DEBUG(WKSSVC_NETRJOINDOMAIN, r);
	}
	
	return dcerpc_ndr_request_send(p, NULL, &dcerpc_table_wkssvc, DCERPC_WKSSVC_NETRJOINDOMAIN, mem_ctx, r);
}

NTSTATUS dcerpc_WKSSVC_NETRJOINDOMAIN(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WKSSVC_NETRJOINDOMAIN *r)
{
	struct rpc_request *req;
	NTSTATUS status;
	
	req = dcerpc_WKSSVC_NETRJOINDOMAIN_send(p, mem_ctx, r);
	if (req == NULL) return NT_STATUS_NO_MEMORY;

	status = dcerpc_ndr_request_recv(req);

	if (NT_STATUS_IS_OK(status) && (p->conn->flags & DCERPC_DEBUG_PRINT_OUT)) {
		NDR_PRINT_OUT_DEBUG(WKSSVC_NETRJOINDOMAIN, r);		
	}

	return status;
}

struct rpc_request *dcerpc_WKSSVC_NETRUNJOINDOMAIN_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WKSSVC_NETRUNJOINDOMAIN *r)
{
	if (p->conn->flags & DCERPC_DEBUG_PRINT_IN) {
		NDR_PRINT_IN_DEBUG(WKSSVC_NETRUNJOINDOMAIN, r);
	}
	
	return dcerpc_ndr_request_send(p, NULL, &dcerpc_table_wkssvc, DCERPC_WKSSVC_NETRUNJOINDOMAIN, mem_ctx, r);
}

NTSTATUS dcerpc_WKSSVC_NETRUNJOINDOMAIN(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WKSSVC_NETRUNJOINDOMAIN *r)
{
	struct rpc_request *req;
	NTSTATUS status;
	
	req = dcerpc_WKSSVC_NETRUNJOINDOMAIN_send(p, mem_ctx, r);
	if (req == NULL) return NT_STATUS_NO_MEMORY;

	status = dcerpc_ndr_request_recv(req);

	if (NT_STATUS_IS_OK(status) && (p->conn->flags & DCERPC_DEBUG_PRINT_OUT)) {
		NDR_PRINT_OUT_DEBUG(WKSSVC_NETRUNJOINDOMAIN, r);		
	}

	return status;
}

struct rpc_request *dcerpc_WKSSVC_NETRRENAMEMACHINEINDOMAIN_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WKSSVC_NETRRENAMEMACHINEINDOMAIN *r)
{
	if (p->conn->flags & DCERPC_DEBUG_PRINT_IN) {
		NDR_PRINT_IN_DEBUG(WKSSVC_NETRRENAMEMACHINEINDOMAIN, r);
	}
	
	return dcerpc_ndr_request_send(p, NULL, &dcerpc_table_wkssvc, DCERPC_WKSSVC_NETRRENAMEMACHINEINDOMAIN, mem_ctx, r);
}

NTSTATUS dcerpc_WKSSVC_NETRRENAMEMACHINEINDOMAIN(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WKSSVC_NETRRENAMEMACHINEINDOMAIN *r)
{
	struct rpc_request *req;
	NTSTATUS status;
	
	req = dcerpc_WKSSVC_NETRRENAMEMACHINEINDOMAIN_send(p, mem_ctx, r);
	if (req == NULL) return NT_STATUS_NO_MEMORY;

	status = dcerpc_ndr_request_recv(req);

	if (NT_STATUS_IS_OK(status) && (p->conn->flags & DCERPC_DEBUG_PRINT_OUT)) {
		NDR_PRINT_OUT_DEBUG(WKSSVC_NETRRENAMEMACHINEINDOMAIN, r);		
	}

	return status;
}

struct rpc_request *dcerpc_WKSSVC_NETRVALIDATENAME_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WKSSVC_NETRVALIDATENAME *r)
{
	if (p->conn->flags & DCERPC_DEBUG_PRINT_IN) {
		NDR_PRINT_IN_DEBUG(WKSSVC_NETRVALIDATENAME, r);
	}
	
	return dcerpc_ndr_request_send(p, NULL, &dcerpc_table_wkssvc, DCERPC_WKSSVC_NETRVALIDATENAME, mem_ctx, r);
}

NTSTATUS dcerpc_WKSSVC_NETRVALIDATENAME(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WKSSVC_NETRVALIDATENAME *r)
{
	struct rpc_request *req;
	NTSTATUS status;
	
	req = dcerpc_WKSSVC_NETRVALIDATENAME_send(p, mem_ctx, r);
	if (req == NULL) return NT_STATUS_NO_MEMORY;

	status = dcerpc_ndr_request_recv(req);

	if (NT_STATUS_IS_OK(status) && (p->conn->flags & DCERPC_DEBUG_PRINT_OUT)) {
		NDR_PRINT_OUT_DEBUG(WKSSVC_NETRVALIDATENAME, r);		
	}

	return status;
}

struct rpc_request *dcerpc_WKSSVC_NETRGETJOININFORMATION_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WKSSVC_NETRGETJOININFORMATION *r)
{
	if (p->conn->flags & DCERPC_DEBUG_PRINT_IN) {
		NDR_PRINT_IN_DEBUG(WKSSVC_NETRGETJOININFORMATION, r);
	}
	
	return dcerpc_ndr_request_send(p, NULL, &dcerpc_table_wkssvc, DCERPC_WKSSVC_NETRGETJOININFORMATION, mem_ctx, r);
}

NTSTATUS dcerpc_WKSSVC_NETRGETJOININFORMATION(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WKSSVC_NETRGETJOININFORMATION *r)
{
	struct rpc_request *req;
	NTSTATUS status;
	
	req = dcerpc_WKSSVC_NETRGETJOININFORMATION_send(p, mem_ctx, r);
	if (req == NULL) return NT_STATUS_NO_MEMORY;

	status = dcerpc_ndr_request_recv(req);

	if (NT_STATUS_IS_OK(status) && (p->conn->flags & DCERPC_DEBUG_PRINT_OUT)) {
		NDR_PRINT_OUT_DEBUG(WKSSVC_NETRGETJOININFORMATION, r);		
	}

	return status;
}

struct rpc_request *dcerpc_WKSSVC_NETRGETJOINABLEOUS_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WKSSVC_NETRGETJOINABLEOUS *r)
{
	if (p->conn->flags & DCERPC_DEBUG_PRINT_IN) {
		NDR_PRINT_IN_DEBUG(WKSSVC_NETRGETJOINABLEOUS, r);
	}
	
	return dcerpc_ndr_request_send(p, NULL, &dcerpc_table_wkssvc, DCERPC_WKSSVC_NETRGETJOINABLEOUS, mem_ctx, r);
}

NTSTATUS dcerpc_WKSSVC_NETRGETJOINABLEOUS(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WKSSVC_NETRGETJOINABLEOUS *r)
{
	struct rpc_request *req;
	NTSTATUS status;
	
	req = dcerpc_WKSSVC_NETRGETJOINABLEOUS_send(p, mem_ctx, r);
	if (req == NULL) return NT_STATUS_NO_MEMORY;

	status = dcerpc_ndr_request_recv(req);

	if (NT_STATUS_IS_OK(status) && (p->conn->flags & DCERPC_DEBUG_PRINT_OUT)) {
		NDR_PRINT_OUT_DEBUG(WKSSVC_NETRGETJOINABLEOUS, r);		
	}

	return status;
}

struct rpc_request *dcerpc_wkssvc_NetrJoinDomain2_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct wkssvc_NetrJoinDomain2 *r)
{
	if (p->conn->flags & DCERPC_DEBUG_PRINT_IN) {
		NDR_PRINT_IN_DEBUG(wkssvc_NetrJoinDomain2, r);
	}
	
	return dcerpc_ndr_request_send(p, NULL, &dcerpc_table_wkssvc, DCERPC_WKSSVC_NETRJOINDOMAIN2, mem_ctx, r);
}

NTSTATUS dcerpc_wkssvc_NetrJoinDomain2(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct wkssvc_NetrJoinDomain2 *r)
{
	struct rpc_request *req;
	NTSTATUS status;
	
	req = dcerpc_wkssvc_NetrJoinDomain2_send(p, mem_ctx, r);
	if (req == NULL) return NT_STATUS_NO_MEMORY;

	status = dcerpc_ndr_request_recv(req);

	if (NT_STATUS_IS_OK(status) && (p->conn->flags & DCERPC_DEBUG_PRINT_OUT)) {
		NDR_PRINT_OUT_DEBUG(wkssvc_NetrJoinDomain2, r);		
	}

	return status;
}

struct rpc_request *dcerpc_wkssvc_NetrUnjoinDomain2_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct wkssvc_NetrUnjoinDomain2 *r)
{
	if (p->conn->flags & DCERPC_DEBUG_PRINT_IN) {
		NDR_PRINT_IN_DEBUG(wkssvc_NetrUnjoinDomain2, r);
	}
	
	return dcerpc_ndr_request_send(p, NULL, &dcerpc_table_wkssvc, DCERPC_WKSSVC_NETRUNJOINDOMAIN2, mem_ctx, r);
}

NTSTATUS dcerpc_wkssvc_NetrUnjoinDomain2(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct wkssvc_NetrUnjoinDomain2 *r)
{
	struct rpc_request *req;
	NTSTATUS status;
	
	req = dcerpc_wkssvc_NetrUnjoinDomain2_send(p, mem_ctx, r);
	if (req == NULL) return NT_STATUS_NO_MEMORY;

	status = dcerpc_ndr_request_recv(req);

	if (NT_STATUS_IS_OK(status) && (p->conn->flags & DCERPC_DEBUG_PRINT_OUT)) {
		NDR_PRINT_OUT_DEBUG(wkssvc_NetrUnjoinDomain2, r);		
	}

	return status;
}

struct rpc_request *dcerpc_wkssvc_NetrRenameMachineInDomain2_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct wkssvc_NetrRenameMachineInDomain2 *r)
{
	if (p->conn->flags & DCERPC_DEBUG_PRINT_IN) {
		NDR_PRINT_IN_DEBUG(wkssvc_NetrRenameMachineInDomain2, r);
	}
	
	return dcerpc_ndr_request_send(p, NULL, &dcerpc_table_wkssvc, DCERPC_WKSSVC_NETRRENAMEMACHINEINDOMAIN2, mem_ctx, r);
}

NTSTATUS dcerpc_wkssvc_NetrRenameMachineInDomain2(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct wkssvc_NetrRenameMachineInDomain2 *r)
{
	struct rpc_request *req;
	NTSTATUS status;
	
	req = dcerpc_wkssvc_NetrRenameMachineInDomain2_send(p, mem_ctx, r);
	if (req == NULL) return NT_STATUS_NO_MEMORY;

	status = dcerpc_ndr_request_recv(req);

	if (NT_STATUS_IS_OK(status) && (p->conn->flags & DCERPC_DEBUG_PRINT_OUT)) {
		NDR_PRINT_OUT_DEBUG(wkssvc_NetrRenameMachineInDomain2, r);		
	}

	return status;
}

struct rpc_request *dcerpc_WKSSVC_NETRVALIDATENAME2_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WKSSVC_NETRVALIDATENAME2 *r)
{
	if (p->conn->flags & DCERPC_DEBUG_PRINT_IN) {
		NDR_PRINT_IN_DEBUG(WKSSVC_NETRVALIDATENAME2, r);
	}
	
	return dcerpc_ndr_request_send(p, NULL, &dcerpc_table_wkssvc, DCERPC_WKSSVC_NETRVALIDATENAME2, mem_ctx, r);
}

NTSTATUS dcerpc_WKSSVC_NETRVALIDATENAME2(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WKSSVC_NETRVALIDATENAME2 *r)
{
	struct rpc_request *req;
	NTSTATUS status;
	
	req = dcerpc_WKSSVC_NETRVALIDATENAME2_send(p, mem_ctx, r);
	if (req == NULL) return NT_STATUS_NO_MEMORY;

	status = dcerpc_ndr_request_recv(req);

	if (NT_STATUS_IS_OK(status) && (p->conn->flags & DCERPC_DEBUG_PRINT_OUT)) {
		NDR_PRINT_OUT_DEBUG(WKSSVC_NETRVALIDATENAME2, r);		
	}

	return status;
}

struct rpc_request *dcerpc_WKSSVC_NETRGETJOINABLEOUS2_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WKSSVC_NETRGETJOINABLEOUS2 *r)
{
	if (p->conn->flags & DCERPC_DEBUG_PRINT_IN) {
		NDR_PRINT_IN_DEBUG(WKSSVC_NETRGETJOINABLEOUS2, r);
	}
	
	return dcerpc_ndr_request_send(p, NULL, &dcerpc_table_wkssvc, DCERPC_WKSSVC_NETRGETJOINABLEOUS2, mem_ctx, r);
}

NTSTATUS dcerpc_WKSSVC_NETRGETJOINABLEOUS2(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WKSSVC_NETRGETJOINABLEOUS2 *r)
{
	struct rpc_request *req;
	NTSTATUS status;
	
	req = dcerpc_WKSSVC_NETRGETJOINABLEOUS2_send(p, mem_ctx, r);
	if (req == NULL) return NT_STATUS_NO_MEMORY;

	status = dcerpc_ndr_request_recv(req);

	if (NT_STATUS_IS_OK(status) && (p->conn->flags & DCERPC_DEBUG_PRINT_OUT)) {
		NDR_PRINT_OUT_DEBUG(WKSSVC_NETRGETJOINABLEOUS2, r);		
	}

	return status;
}

struct rpc_request *dcerpc_wkssvc_NetrAddAlternateComputerName_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct wkssvc_NetrAddAlternateComputerName *r)
{
	if (p->conn->flags & DCERPC_DEBUG_PRINT_IN) {
		NDR_PRINT_IN_DEBUG(wkssvc_NetrAddAlternateComputerName, r);
	}
	
	return dcerpc_ndr_request_send(p, NULL, &dcerpc_table_wkssvc, DCERPC_WKSSVC_NETRADDALTERNATECOMPUTERNAME, mem_ctx, r);
}

NTSTATUS dcerpc_wkssvc_NetrAddAlternateComputerName(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct wkssvc_NetrAddAlternateComputerName *r)
{
	struct rpc_request *req;
	NTSTATUS status;
	
	req = dcerpc_wkssvc_NetrAddAlternateComputerName_send(p, mem_ctx, r);
	if (req == NULL) return NT_STATUS_NO_MEMORY;

	status = dcerpc_ndr_request_recv(req);

	if (NT_STATUS_IS_OK(status) && (p->conn->flags & DCERPC_DEBUG_PRINT_OUT)) {
		NDR_PRINT_OUT_DEBUG(wkssvc_NetrAddAlternateComputerName, r);		
	}

	return status;
}

struct rpc_request *dcerpc_wkssvc_NetrRemoveAlternateComputerName_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct wkssvc_NetrRemoveAlternateComputerName *r)
{
	if (p->conn->flags & DCERPC_DEBUG_PRINT_IN) {
		NDR_PRINT_IN_DEBUG(wkssvc_NetrRemoveAlternateComputerName, r);
	}
	
	return dcerpc_ndr_request_send(p, NULL, &dcerpc_table_wkssvc, DCERPC_WKSSVC_NETRREMOVEALTERNATECOMPUTERNAME, mem_ctx, r);
}

NTSTATUS dcerpc_wkssvc_NetrRemoveAlternateComputerName(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct wkssvc_NetrRemoveAlternateComputerName *r)
{
	struct rpc_request *req;
	NTSTATUS status;
	
	req = dcerpc_wkssvc_NetrRemoveAlternateComputerName_send(p, mem_ctx, r);
	if (req == NULL) return NT_STATUS_NO_MEMORY;

	status = dcerpc_ndr_request_recv(req);

	if (NT_STATUS_IS_OK(status) && (p->conn->flags & DCERPC_DEBUG_PRINT_OUT)) {
		NDR_PRINT_OUT_DEBUG(wkssvc_NetrRemoveAlternateComputerName, r);		
	}

	return status;
}

struct rpc_request *dcerpc_WKSSVC_NETRSETPRIMARYCOMPUTERNAME_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WKSSVC_NETRSETPRIMARYCOMPUTERNAME *r)
{
	if (p->conn->flags & DCERPC_DEBUG_PRINT_IN) {
		NDR_PRINT_IN_DEBUG(WKSSVC_NETRSETPRIMARYCOMPUTERNAME, r);
	}
	
	return dcerpc_ndr_request_send(p, NULL, &dcerpc_table_wkssvc, DCERPC_WKSSVC_NETRSETPRIMARYCOMPUTERNAME, mem_ctx, r);
}

NTSTATUS dcerpc_WKSSVC_NETRSETPRIMARYCOMPUTERNAME(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WKSSVC_NETRSETPRIMARYCOMPUTERNAME *r)
{
	struct rpc_request *req;
	NTSTATUS status;
	
	req = dcerpc_WKSSVC_NETRSETPRIMARYCOMPUTERNAME_send(p, mem_ctx, r);
	if (req == NULL) return NT_STATUS_NO_MEMORY;

	status = dcerpc_ndr_request_recv(req);

	if (NT_STATUS_IS_OK(status) && (p->conn->flags & DCERPC_DEBUG_PRINT_OUT)) {
		NDR_PRINT_OUT_DEBUG(WKSSVC_NETRSETPRIMARYCOMPUTERNAME, r);		
	}

	return status;
}

struct rpc_request *dcerpc_WKSSVC_NETRENUMERATECOMPUTERNAMES_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WKSSVC_NETRENUMERATECOMPUTERNAMES *r)
{
	if (p->conn->flags & DCERPC_DEBUG_PRINT_IN) {
		NDR_PRINT_IN_DEBUG(WKSSVC_NETRENUMERATECOMPUTERNAMES, r);
	}
	
	return dcerpc_ndr_request_send(p, NULL, &dcerpc_table_wkssvc, DCERPC_WKSSVC_NETRENUMERATECOMPUTERNAMES, mem_ctx, r);
}

NTSTATUS dcerpc_WKSSVC_NETRENUMERATECOMPUTERNAMES(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WKSSVC_NETRENUMERATECOMPUTERNAMES *r)
{
	struct rpc_request *req;
	NTSTATUS status;
	
	req = dcerpc_WKSSVC_NETRENUMERATECOMPUTERNAMES_send(p, mem_ctx, r);
	if (req == NULL) return NT_STATUS_NO_MEMORY;

	status = dcerpc_ndr_request_recv(req);

	if (NT_STATUS_IS_OK(status) && (p->conn->flags & DCERPC_DEBUG_PRINT_OUT)) {
		NDR_PRINT_OUT_DEBUG(WKSSVC_NETRENUMERATECOMPUTERNAMES, r);		
	}

	return status;
}
