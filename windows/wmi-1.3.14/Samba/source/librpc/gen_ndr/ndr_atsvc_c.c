/* client functions auto-generated by pidl */

#include "includes.h"
#include "librpc/gen_ndr/ndr_atsvc.h"
#include "librpc/gen_ndr/ndr_atsvc_c.h"

/* atsvc - client functions generated by pidl */


struct rpc_request *dcerpc_atsvc_JobAdd_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct atsvc_JobAdd *r)
{
	if (p->conn->flags & DCERPC_DEBUG_PRINT_IN) {
		NDR_PRINT_IN_DEBUG(atsvc_JobAdd, r);
	}
	
	return dcerpc_ndr_request_send(p, NULL, &dcerpc_table_atsvc, DCERPC_ATSVC_JOBADD, mem_ctx, r);
}

NTSTATUS dcerpc_atsvc_JobAdd(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct atsvc_JobAdd *r)
{
	struct rpc_request *req;
	NTSTATUS status;
	
	req = dcerpc_atsvc_JobAdd_send(p, mem_ctx, r);
	if (req == NULL) return NT_STATUS_NO_MEMORY;

	status = dcerpc_ndr_request_recv(req);

	if (NT_STATUS_IS_OK(status) && (p->conn->flags & DCERPC_DEBUG_PRINT_OUT)) {
		NDR_PRINT_OUT_DEBUG(atsvc_JobAdd, r);		
	}
	if (NT_STATUS_IS_OK(status)) status = r->out.result;

	return status;
}

struct rpc_request *dcerpc_atsvc_JobDel_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct atsvc_JobDel *r)
{
	if (p->conn->flags & DCERPC_DEBUG_PRINT_IN) {
		NDR_PRINT_IN_DEBUG(atsvc_JobDel, r);
	}
	
	return dcerpc_ndr_request_send(p, NULL, &dcerpc_table_atsvc, DCERPC_ATSVC_JOBDEL, mem_ctx, r);
}

NTSTATUS dcerpc_atsvc_JobDel(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct atsvc_JobDel *r)
{
	struct rpc_request *req;
	NTSTATUS status;
	
	req = dcerpc_atsvc_JobDel_send(p, mem_ctx, r);
	if (req == NULL) return NT_STATUS_NO_MEMORY;

	status = dcerpc_ndr_request_recv(req);

	if (NT_STATUS_IS_OK(status) && (p->conn->flags & DCERPC_DEBUG_PRINT_OUT)) {
		NDR_PRINT_OUT_DEBUG(atsvc_JobDel, r);		
	}
	if (NT_STATUS_IS_OK(status)) status = r->out.result;

	return status;
}

struct rpc_request *dcerpc_atsvc_JobEnum_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct atsvc_JobEnum *r)
{
	if (p->conn->flags & DCERPC_DEBUG_PRINT_IN) {
		NDR_PRINT_IN_DEBUG(atsvc_JobEnum, r);
	}
	
	return dcerpc_ndr_request_send(p, NULL, &dcerpc_table_atsvc, DCERPC_ATSVC_JOBENUM, mem_ctx, r);
}

NTSTATUS dcerpc_atsvc_JobEnum(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct atsvc_JobEnum *r)
{
	struct rpc_request *req;
	NTSTATUS status;
	
	req = dcerpc_atsvc_JobEnum_send(p, mem_ctx, r);
	if (req == NULL) return NT_STATUS_NO_MEMORY;

	status = dcerpc_ndr_request_recv(req);

	if (NT_STATUS_IS_OK(status) && (p->conn->flags & DCERPC_DEBUG_PRINT_OUT)) {
		NDR_PRINT_OUT_DEBUG(atsvc_JobEnum, r);		
	}
	if (NT_STATUS_IS_OK(status)) status = r->out.result;

	return status;
}

struct rpc_request *dcerpc_atsvc_JobGetInfo_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct atsvc_JobGetInfo *r)
{
	if (p->conn->flags & DCERPC_DEBUG_PRINT_IN) {
		NDR_PRINT_IN_DEBUG(atsvc_JobGetInfo, r);
	}
	
	return dcerpc_ndr_request_send(p, NULL, &dcerpc_table_atsvc, DCERPC_ATSVC_JOBGETINFO, mem_ctx, r);
}

NTSTATUS dcerpc_atsvc_JobGetInfo(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct atsvc_JobGetInfo *r)
{
	struct rpc_request *req;
	NTSTATUS status;
	
	req = dcerpc_atsvc_JobGetInfo_send(p, mem_ctx, r);
	if (req == NULL) return NT_STATUS_NO_MEMORY;

	status = dcerpc_ndr_request_recv(req);

	if (NT_STATUS_IS_OK(status) && (p->conn->flags & DCERPC_DEBUG_PRINT_OUT)) {
		NDR_PRINT_OUT_DEBUG(atsvc_JobGetInfo, r);		
	}
	if (NT_STATUS_IS_OK(status)) status = r->out.result;

	return status;
}
