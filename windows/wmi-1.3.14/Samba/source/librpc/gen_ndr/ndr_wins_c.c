/* client functions auto-generated by pidl */

#include "includes.h"
#include "librpc/gen_ndr/ndr_wins.h"
#include "librpc/gen_ndr/ndr_wins_c.h"

/* WinsPipe - client functions generated by pidl */


struct rpc_request *dcerpc_WinsRecordAction_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WinsRecordAction *r)
{
	if (p->conn->flags & DCERPC_DEBUG_PRINT_IN) {
		NDR_PRINT_IN_DEBUG(WinsRecordAction, r);
	}
	
	return dcerpc_ndr_request_send(p, NULL, &dcerpc_table_WinsPipe, DCERPC_WINSRECORDACTION, mem_ctx, r);
}

NTSTATUS dcerpc_WinsRecordAction(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WinsRecordAction *r)
{
	struct rpc_request *req;
	NTSTATUS status;
	
	req = dcerpc_WinsRecordAction_send(p, mem_ctx, r);
	if (req == NULL) return NT_STATUS_NO_MEMORY;

	status = dcerpc_ndr_request_recv(req);

	if (NT_STATUS_IS_OK(status) && (p->conn->flags & DCERPC_DEBUG_PRINT_OUT)) {
		NDR_PRINT_OUT_DEBUG(WinsRecordAction, r);		
	}

	return status;
}

struct rpc_request *dcerpc_WinsStatus_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WinsStatus *r)
{
	if (p->conn->flags & DCERPC_DEBUG_PRINT_IN) {
		NDR_PRINT_IN_DEBUG(WinsStatus, r);
	}
	
	return dcerpc_ndr_request_send(p, NULL, &dcerpc_table_WinsPipe, DCERPC_WINSSTATUS, mem_ctx, r);
}

NTSTATUS dcerpc_WinsStatus(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WinsStatus *r)
{
	struct rpc_request *req;
	NTSTATUS status;
	
	req = dcerpc_WinsStatus_send(p, mem_ctx, r);
	if (req == NULL) return NT_STATUS_NO_MEMORY;

	status = dcerpc_ndr_request_recv(req);

	if (NT_STATUS_IS_OK(status) && (p->conn->flags & DCERPC_DEBUG_PRINT_OUT)) {
		NDR_PRINT_OUT_DEBUG(WinsStatus, r);		
	}

	return status;
}

struct rpc_request *dcerpc_WinsTrigger_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WinsTrigger *r)
{
	if (p->conn->flags & DCERPC_DEBUG_PRINT_IN) {
		NDR_PRINT_IN_DEBUG(WinsTrigger, r);
	}
	
	return dcerpc_ndr_request_send(p, NULL, &dcerpc_table_WinsPipe, DCERPC_WINSTRIGGER, mem_ctx, r);
}

NTSTATUS dcerpc_WinsTrigger(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WinsTrigger *r)
{
	struct rpc_request *req;
	NTSTATUS status;
	
	req = dcerpc_WinsTrigger_send(p, mem_ctx, r);
	if (req == NULL) return NT_STATUS_NO_MEMORY;

	status = dcerpc_ndr_request_recv(req);

	if (NT_STATUS_IS_OK(status) && (p->conn->flags & DCERPC_DEBUG_PRINT_OUT)) {
		NDR_PRINT_OUT_DEBUG(WinsTrigger, r);		
	}

	return status;
}

struct rpc_request *dcerpc_WinsDoStaticInit_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WinsDoStaticInit *r)
{
	if (p->conn->flags & DCERPC_DEBUG_PRINT_IN) {
		NDR_PRINT_IN_DEBUG(WinsDoStaticInit, r);
	}
	
	return dcerpc_ndr_request_send(p, NULL, &dcerpc_table_WinsPipe, DCERPC_WINSDOSTATICINIT, mem_ctx, r);
}

NTSTATUS dcerpc_WinsDoStaticInit(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WinsDoStaticInit *r)
{
	struct rpc_request *req;
	NTSTATUS status;
	
	req = dcerpc_WinsDoStaticInit_send(p, mem_ctx, r);
	if (req == NULL) return NT_STATUS_NO_MEMORY;

	status = dcerpc_ndr_request_recv(req);

	if (NT_STATUS_IS_OK(status) && (p->conn->flags & DCERPC_DEBUG_PRINT_OUT)) {
		NDR_PRINT_OUT_DEBUG(WinsDoStaticInit, r);		
	}

	return status;
}

struct rpc_request *dcerpc_WinsDoScavenging_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WinsDoScavenging *r)
{
	if (p->conn->flags & DCERPC_DEBUG_PRINT_IN) {
		NDR_PRINT_IN_DEBUG(WinsDoScavenging, r);
	}
	
	return dcerpc_ndr_request_send(p, NULL, &dcerpc_table_WinsPipe, DCERPC_WINSDOSCAVENGING, mem_ctx, r);
}

NTSTATUS dcerpc_WinsDoScavenging(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WinsDoScavenging *r)
{
	struct rpc_request *req;
	NTSTATUS status;
	
	req = dcerpc_WinsDoScavenging_send(p, mem_ctx, r);
	if (req == NULL) return NT_STATUS_NO_MEMORY;

	status = dcerpc_ndr_request_recv(req);

	if (NT_STATUS_IS_OK(status) && (p->conn->flags & DCERPC_DEBUG_PRINT_OUT)) {
		NDR_PRINT_OUT_DEBUG(WinsDoScavenging, r);		
	}

	return status;
}

struct rpc_request *dcerpc_WinsGetDbRecs_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WinsGetDbRecs *r)
{
	if (p->conn->flags & DCERPC_DEBUG_PRINT_IN) {
		NDR_PRINT_IN_DEBUG(WinsGetDbRecs, r);
	}
	
	return dcerpc_ndr_request_send(p, NULL, &dcerpc_table_WinsPipe, DCERPC_WINSGETDBRECS, mem_ctx, r);
}

NTSTATUS dcerpc_WinsGetDbRecs(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WinsGetDbRecs *r)
{
	struct rpc_request *req;
	NTSTATUS status;
	
	req = dcerpc_WinsGetDbRecs_send(p, mem_ctx, r);
	if (req == NULL) return NT_STATUS_NO_MEMORY;

	status = dcerpc_ndr_request_recv(req);

	if (NT_STATUS_IS_OK(status) && (p->conn->flags & DCERPC_DEBUG_PRINT_OUT)) {
		NDR_PRINT_OUT_DEBUG(WinsGetDbRecs, r);		
	}

	return status;
}

struct rpc_request *dcerpc_WinsTerm_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WinsTerm *r)
{
	if (p->conn->flags & DCERPC_DEBUG_PRINT_IN) {
		NDR_PRINT_IN_DEBUG(WinsTerm, r);
	}
	
	return dcerpc_ndr_request_send(p, NULL, &dcerpc_table_WinsPipe, DCERPC_WINSTERM, mem_ctx, r);
}

NTSTATUS dcerpc_WinsTerm(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WinsTerm *r)
{
	struct rpc_request *req;
	NTSTATUS status;
	
	req = dcerpc_WinsTerm_send(p, mem_ctx, r);
	if (req == NULL) return NT_STATUS_NO_MEMORY;

	status = dcerpc_ndr_request_recv(req);

	if (NT_STATUS_IS_OK(status) && (p->conn->flags & DCERPC_DEBUG_PRINT_OUT)) {
		NDR_PRINT_OUT_DEBUG(WinsTerm, r);		
	}

	return status;
}

struct rpc_request *dcerpc_WinsBackup_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WinsBackup *r)
{
	if (p->conn->flags & DCERPC_DEBUG_PRINT_IN) {
		NDR_PRINT_IN_DEBUG(WinsBackup, r);
	}
	
	return dcerpc_ndr_request_send(p, NULL, &dcerpc_table_WinsPipe, DCERPC_WINSBACKUP, mem_ctx, r);
}

NTSTATUS dcerpc_WinsBackup(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WinsBackup *r)
{
	struct rpc_request *req;
	NTSTATUS status;
	
	req = dcerpc_WinsBackup_send(p, mem_ctx, r);
	if (req == NULL) return NT_STATUS_NO_MEMORY;

	status = dcerpc_ndr_request_recv(req);

	if (NT_STATUS_IS_OK(status) && (p->conn->flags & DCERPC_DEBUG_PRINT_OUT)) {
		NDR_PRINT_OUT_DEBUG(WinsBackup, r);		
	}

	return status;
}

struct rpc_request *dcerpc_WinsDelDbRecs_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WinsDelDbRecs *r)
{
	if (p->conn->flags & DCERPC_DEBUG_PRINT_IN) {
		NDR_PRINT_IN_DEBUG(WinsDelDbRecs, r);
	}
	
	return dcerpc_ndr_request_send(p, NULL, &dcerpc_table_WinsPipe, DCERPC_WINSDELDBRECS, mem_ctx, r);
}

NTSTATUS dcerpc_WinsDelDbRecs(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WinsDelDbRecs *r)
{
	struct rpc_request *req;
	NTSTATUS status;
	
	req = dcerpc_WinsDelDbRecs_send(p, mem_ctx, r);
	if (req == NULL) return NT_STATUS_NO_MEMORY;

	status = dcerpc_ndr_request_recv(req);

	if (NT_STATUS_IS_OK(status) && (p->conn->flags & DCERPC_DEBUG_PRINT_OUT)) {
		NDR_PRINT_OUT_DEBUG(WinsDelDbRecs, r);		
	}

	return status;
}

struct rpc_request *dcerpc_WinsPullRange_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WinsPullRange *r)
{
	if (p->conn->flags & DCERPC_DEBUG_PRINT_IN) {
		NDR_PRINT_IN_DEBUG(WinsPullRange, r);
	}
	
	return dcerpc_ndr_request_send(p, NULL, &dcerpc_table_WinsPipe, DCERPC_WINSPULLRANGE, mem_ctx, r);
}

NTSTATUS dcerpc_WinsPullRange(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WinsPullRange *r)
{
	struct rpc_request *req;
	NTSTATUS status;
	
	req = dcerpc_WinsPullRange_send(p, mem_ctx, r);
	if (req == NULL) return NT_STATUS_NO_MEMORY;

	status = dcerpc_ndr_request_recv(req);

	if (NT_STATUS_IS_OK(status) && (p->conn->flags & DCERPC_DEBUG_PRINT_OUT)) {
		NDR_PRINT_OUT_DEBUG(WinsPullRange, r);		
	}

	return status;
}

struct rpc_request *dcerpc_WinsSetPriorityClass_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WinsSetPriorityClass *r)
{
	if (p->conn->flags & DCERPC_DEBUG_PRINT_IN) {
		NDR_PRINT_IN_DEBUG(WinsSetPriorityClass, r);
	}
	
	return dcerpc_ndr_request_send(p, NULL, &dcerpc_table_WinsPipe, DCERPC_WINSSETPRIORITYCLASS, mem_ctx, r);
}

NTSTATUS dcerpc_WinsSetPriorityClass(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WinsSetPriorityClass *r)
{
	struct rpc_request *req;
	NTSTATUS status;
	
	req = dcerpc_WinsSetPriorityClass_send(p, mem_ctx, r);
	if (req == NULL) return NT_STATUS_NO_MEMORY;

	status = dcerpc_ndr_request_recv(req);

	if (NT_STATUS_IS_OK(status) && (p->conn->flags & DCERPC_DEBUG_PRINT_OUT)) {
		NDR_PRINT_OUT_DEBUG(WinsSetPriorityClass, r);		
	}

	return status;
}

struct rpc_request *dcerpc_WinsResetCounters_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WinsResetCounters *r)
{
	if (p->conn->flags & DCERPC_DEBUG_PRINT_IN) {
		NDR_PRINT_IN_DEBUG(WinsResetCounters, r);
	}
	
	return dcerpc_ndr_request_send(p, NULL, &dcerpc_table_WinsPipe, DCERPC_WINSRESETCOUNTERS, mem_ctx, r);
}

NTSTATUS dcerpc_WinsResetCounters(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WinsResetCounters *r)
{
	struct rpc_request *req;
	NTSTATUS status;
	
	req = dcerpc_WinsResetCounters_send(p, mem_ctx, r);
	if (req == NULL) return NT_STATUS_NO_MEMORY;

	status = dcerpc_ndr_request_recv(req);

	if (NT_STATUS_IS_OK(status) && (p->conn->flags & DCERPC_DEBUG_PRINT_OUT)) {
		NDR_PRINT_OUT_DEBUG(WinsResetCounters, r);		
	}

	return status;
}

struct rpc_request *dcerpc_WinsWorkerThreadUpdate_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WinsWorkerThreadUpdate *r)
{
	if (p->conn->flags & DCERPC_DEBUG_PRINT_IN) {
		NDR_PRINT_IN_DEBUG(WinsWorkerThreadUpdate, r);
	}
	
	return dcerpc_ndr_request_send(p, NULL, &dcerpc_table_WinsPipe, DCERPC_WINSWORKERTHREADUPDATE, mem_ctx, r);
}

NTSTATUS dcerpc_WinsWorkerThreadUpdate(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WinsWorkerThreadUpdate *r)
{
	struct rpc_request *req;
	NTSTATUS status;
	
	req = dcerpc_WinsWorkerThreadUpdate_send(p, mem_ctx, r);
	if (req == NULL) return NT_STATUS_NO_MEMORY;

	status = dcerpc_ndr_request_recv(req);

	if (NT_STATUS_IS_OK(status) && (p->conn->flags & DCERPC_DEBUG_PRINT_OUT)) {
		NDR_PRINT_OUT_DEBUG(WinsWorkerThreadUpdate, r);		
	}

	return status;
}

struct rpc_request *dcerpc_WinsGetNameAndAdd_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WinsGetNameAndAdd *r)
{
	if (p->conn->flags & DCERPC_DEBUG_PRINT_IN) {
		NDR_PRINT_IN_DEBUG(WinsGetNameAndAdd, r);
	}
	
	return dcerpc_ndr_request_send(p, NULL, &dcerpc_table_WinsPipe, DCERPC_WINSGETNAMEANDADD, mem_ctx, r);
}

NTSTATUS dcerpc_WinsGetNameAndAdd(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WinsGetNameAndAdd *r)
{
	struct rpc_request *req;
	NTSTATUS status;
	
	req = dcerpc_WinsGetNameAndAdd_send(p, mem_ctx, r);
	if (req == NULL) return NT_STATUS_NO_MEMORY;

	status = dcerpc_ndr_request_recv(req);

	if (NT_STATUS_IS_OK(status) && (p->conn->flags & DCERPC_DEBUG_PRINT_OUT)) {
		NDR_PRINT_OUT_DEBUG(WinsGetNameAndAdd, r);		
	}

	return status;
}

struct rpc_request *dcerpc_WinsGetBrowserNames_Old_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WinsGetBrowserNames_Old *r)
{
	if (p->conn->flags & DCERPC_DEBUG_PRINT_IN) {
		NDR_PRINT_IN_DEBUG(WinsGetBrowserNames_Old, r);
	}
	
	return dcerpc_ndr_request_send(p, NULL, &dcerpc_table_WinsPipe, DCERPC_WINSGETBROWSERNAMES_OLD, mem_ctx, r);
}

NTSTATUS dcerpc_WinsGetBrowserNames_Old(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WinsGetBrowserNames_Old *r)
{
	struct rpc_request *req;
	NTSTATUS status;
	
	req = dcerpc_WinsGetBrowserNames_Old_send(p, mem_ctx, r);
	if (req == NULL) return NT_STATUS_NO_MEMORY;

	status = dcerpc_ndr_request_recv(req);

	if (NT_STATUS_IS_OK(status) && (p->conn->flags & DCERPC_DEBUG_PRINT_OUT)) {
		NDR_PRINT_OUT_DEBUG(WinsGetBrowserNames_Old, r);		
	}

	return status;
}

struct rpc_request *dcerpc_WinsDeleteWins_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WinsDeleteWins *r)
{
	if (p->conn->flags & DCERPC_DEBUG_PRINT_IN) {
		NDR_PRINT_IN_DEBUG(WinsDeleteWins, r);
	}
	
	return dcerpc_ndr_request_send(p, NULL, &dcerpc_table_WinsPipe, DCERPC_WINSDELETEWINS, mem_ctx, r);
}

NTSTATUS dcerpc_WinsDeleteWins(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WinsDeleteWins *r)
{
	struct rpc_request *req;
	NTSTATUS status;
	
	req = dcerpc_WinsDeleteWins_send(p, mem_ctx, r);
	if (req == NULL) return NT_STATUS_NO_MEMORY;

	status = dcerpc_ndr_request_recv(req);

	if (NT_STATUS_IS_OK(status) && (p->conn->flags & DCERPC_DEBUG_PRINT_OUT)) {
		NDR_PRINT_OUT_DEBUG(WinsDeleteWins, r);		
	}

	return status;
}

struct rpc_request *dcerpc_WinsSetFlags_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WinsSetFlags *r)
{
	if (p->conn->flags & DCERPC_DEBUG_PRINT_IN) {
		NDR_PRINT_IN_DEBUG(WinsSetFlags, r);
	}
	
	return dcerpc_ndr_request_send(p, NULL, &dcerpc_table_WinsPipe, DCERPC_WINSSETFLAGS, mem_ctx, r);
}

NTSTATUS dcerpc_WinsSetFlags(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WinsSetFlags *r)
{
	struct rpc_request *req;
	NTSTATUS status;
	
	req = dcerpc_WinsSetFlags_send(p, mem_ctx, r);
	if (req == NULL) return NT_STATUS_NO_MEMORY;

	status = dcerpc_ndr_request_recv(req);

	if (NT_STATUS_IS_OK(status) && (p->conn->flags & DCERPC_DEBUG_PRINT_OUT)) {
		NDR_PRINT_OUT_DEBUG(WinsSetFlags, r);		
	}

	return status;
}

struct rpc_request *dcerpc_WinsGetDbRecsByName_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WinsGetDbRecsByName *r)
{
	if (p->conn->flags & DCERPC_DEBUG_PRINT_IN) {
		NDR_PRINT_IN_DEBUG(WinsGetDbRecsByName, r);
	}
	
	return dcerpc_ndr_request_send(p, NULL, &dcerpc_table_WinsPipe, DCERPC_WINSGETDBRECSBYNAME, mem_ctx, r);
}

NTSTATUS dcerpc_WinsGetDbRecsByName(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WinsGetDbRecsByName *r)
{
	struct rpc_request *req;
	NTSTATUS status;
	
	req = dcerpc_WinsGetDbRecsByName_send(p, mem_ctx, r);
	if (req == NULL) return NT_STATUS_NO_MEMORY;

	status = dcerpc_ndr_request_recv(req);

	if (NT_STATUS_IS_OK(status) && (p->conn->flags & DCERPC_DEBUG_PRINT_OUT)) {
		NDR_PRINT_OUT_DEBUG(WinsGetDbRecsByName, r);		
	}

	return status;
}

struct rpc_request *dcerpc_WinsStatusWHdl_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WinsStatusWHdl *r)
{
	if (p->conn->flags & DCERPC_DEBUG_PRINT_IN) {
		NDR_PRINT_IN_DEBUG(WinsStatusWHdl, r);
	}
	
	return dcerpc_ndr_request_send(p, NULL, &dcerpc_table_WinsPipe, DCERPC_WINSSTATUSWHDL, mem_ctx, r);
}

NTSTATUS dcerpc_WinsStatusWHdl(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WinsStatusWHdl *r)
{
	struct rpc_request *req;
	NTSTATUS status;
	
	req = dcerpc_WinsStatusWHdl_send(p, mem_ctx, r);
	if (req == NULL) return NT_STATUS_NO_MEMORY;

	status = dcerpc_ndr_request_recv(req);

	if (NT_STATUS_IS_OK(status) && (p->conn->flags & DCERPC_DEBUG_PRINT_OUT)) {
		NDR_PRINT_OUT_DEBUG(WinsStatusWHdl, r);		
	}

	return status;
}

struct rpc_request *dcerpc_WinsDoScanvenging2_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WinsDoScanvenging2 *r)
{
	if (p->conn->flags & DCERPC_DEBUG_PRINT_IN) {
		NDR_PRINT_IN_DEBUG(WinsDoScanvenging2, r);
	}
	
	return dcerpc_ndr_request_send(p, NULL, &dcerpc_table_WinsPipe, DCERPC_WINSDOSCANVENGING2, mem_ctx, r);
}

NTSTATUS dcerpc_WinsDoScanvenging2(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WinsDoScanvenging2 *r)
{
	struct rpc_request *req;
	NTSTATUS status;
	
	req = dcerpc_WinsDoScanvenging2_send(p, mem_ctx, r);
	if (req == NULL) return NT_STATUS_NO_MEMORY;

	status = dcerpc_ndr_request_recv(req);

	if (NT_STATUS_IS_OK(status) && (p->conn->flags & DCERPC_DEBUG_PRINT_OUT)) {
		NDR_PRINT_OUT_DEBUG(WinsDoScanvenging2, r);		
	}

	return status;
}
