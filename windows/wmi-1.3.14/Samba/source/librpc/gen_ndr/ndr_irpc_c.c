/* client functions auto-generated by pidl */

#include "includes.h"
#include "librpc/gen_ndr/ndr_irpc.h"
#include "librpc/gen_ndr/ndr_irpc_c.h"

/* irpc - client functions generated by pidl */


struct rpc_request *dcerpc_irpc_uptime_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct irpc_uptime *r)
{
	if (p->conn->flags & DCERPC_DEBUG_PRINT_IN) {
		NDR_PRINT_IN_DEBUG(irpc_uptime, r);
	}
	
	return dcerpc_ndr_request_send(p, NULL, &dcerpc_table_irpc, DCERPC_IRPC_UPTIME, mem_ctx, r);
}

NTSTATUS dcerpc_irpc_uptime(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct irpc_uptime *r)
{
	struct rpc_request *req;
	NTSTATUS status;
	
	req = dcerpc_irpc_uptime_send(p, mem_ctx, r);
	if (req == NULL) return NT_STATUS_NO_MEMORY;

	status = dcerpc_ndr_request_recv(req);

	if (NT_STATUS_IS_OK(status) && (p->conn->flags & DCERPC_DEBUG_PRINT_OUT)) {
		NDR_PRINT_OUT_DEBUG(irpc_uptime, r);		
	}

	return status;
}

struct rpc_request *dcerpc_nbtd_information_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct nbtd_information *r)
{
	if (p->conn->flags & DCERPC_DEBUG_PRINT_IN) {
		NDR_PRINT_IN_DEBUG(nbtd_information, r);
	}
	
	return dcerpc_ndr_request_send(p, NULL, &dcerpc_table_irpc, DCERPC_NBTD_INFORMATION, mem_ctx, r);
}

NTSTATUS dcerpc_nbtd_information(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct nbtd_information *r)
{
	struct rpc_request *req;
	NTSTATUS status;
	
	req = dcerpc_nbtd_information_send(p, mem_ctx, r);
	if (req == NULL) return NT_STATUS_NO_MEMORY;

	status = dcerpc_ndr_request_recv(req);

	if (NT_STATUS_IS_OK(status) && (p->conn->flags & DCERPC_DEBUG_PRINT_OUT)) {
		NDR_PRINT_OUT_DEBUG(nbtd_information, r);		
	}

	return status;
}

struct rpc_request *dcerpc_nbtd_getdcname_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct nbtd_getdcname *r)
{
	if (p->conn->flags & DCERPC_DEBUG_PRINT_IN) {
		NDR_PRINT_IN_DEBUG(nbtd_getdcname, r);
	}
	
	return dcerpc_ndr_request_send(p, NULL, &dcerpc_table_irpc, DCERPC_NBTD_GETDCNAME, mem_ctx, r);
}

NTSTATUS dcerpc_nbtd_getdcname(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct nbtd_getdcname *r)
{
	struct rpc_request *req;
	NTSTATUS status;
	
	req = dcerpc_nbtd_getdcname_send(p, mem_ctx, r);
	if (req == NULL) return NT_STATUS_NO_MEMORY;

	status = dcerpc_ndr_request_recv(req);

	if (NT_STATUS_IS_OK(status) && (p->conn->flags & DCERPC_DEBUG_PRINT_OUT)) {
		NDR_PRINT_OUT_DEBUG(nbtd_getdcname, r);		
	}

	return status;
}

struct rpc_request *dcerpc_nbtd_proxy_wins_challenge_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct nbtd_proxy_wins_challenge *r)
{
	if (p->conn->flags & DCERPC_DEBUG_PRINT_IN) {
		NDR_PRINT_IN_DEBUG(nbtd_proxy_wins_challenge, r);
	}
	
	return dcerpc_ndr_request_send(p, NULL, &dcerpc_table_irpc, DCERPC_NBTD_PROXY_WINS_CHALLENGE, mem_ctx, r);
}

NTSTATUS dcerpc_nbtd_proxy_wins_challenge(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct nbtd_proxy_wins_challenge *r)
{
	struct rpc_request *req;
	NTSTATUS status;
	
	req = dcerpc_nbtd_proxy_wins_challenge_send(p, mem_ctx, r);
	if (req == NULL) return NT_STATUS_NO_MEMORY;

	status = dcerpc_ndr_request_recv(req);

	if (NT_STATUS_IS_OK(status) && (p->conn->flags & DCERPC_DEBUG_PRINT_OUT)) {
		NDR_PRINT_OUT_DEBUG(nbtd_proxy_wins_challenge, r);		
	}

	return status;
}

struct rpc_request *dcerpc_nbtd_proxy_wins_release_demand_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct nbtd_proxy_wins_release_demand *r)
{
	if (p->conn->flags & DCERPC_DEBUG_PRINT_IN) {
		NDR_PRINT_IN_DEBUG(nbtd_proxy_wins_release_demand, r);
	}
	
	return dcerpc_ndr_request_send(p, NULL, &dcerpc_table_irpc, DCERPC_NBTD_PROXY_WINS_RELEASE_DEMAND, mem_ctx, r);
}

NTSTATUS dcerpc_nbtd_proxy_wins_release_demand(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct nbtd_proxy_wins_release_demand *r)
{
	struct rpc_request *req;
	NTSTATUS status;
	
	req = dcerpc_nbtd_proxy_wins_release_demand_send(p, mem_ctx, r);
	if (req == NULL) return NT_STATUS_NO_MEMORY;

	status = dcerpc_ndr_request_recv(req);

	if (NT_STATUS_IS_OK(status) && (p->conn->flags & DCERPC_DEBUG_PRINT_OUT)) {
		NDR_PRINT_OUT_DEBUG(nbtd_proxy_wins_release_demand, r);		
	}

	return status;
}

struct rpc_request *dcerpc_smbsrv_information_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct smbsrv_information *r)
{
	if (p->conn->flags & DCERPC_DEBUG_PRINT_IN) {
		NDR_PRINT_IN_DEBUG(smbsrv_information, r);
	}
	
	return dcerpc_ndr_request_send(p, NULL, &dcerpc_table_irpc, DCERPC_SMBSRV_INFORMATION, mem_ctx, r);
}

NTSTATUS dcerpc_smbsrv_information(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct smbsrv_information *r)
{
	struct rpc_request *req;
	NTSTATUS status;
	
	req = dcerpc_smbsrv_information_send(p, mem_ctx, r);
	if (req == NULL) return NT_STATUS_NO_MEMORY;

	status = dcerpc_ndr_request_recv(req);

	if (NT_STATUS_IS_OK(status) && (p->conn->flags & DCERPC_DEBUG_PRINT_OUT)) {
		NDR_PRINT_OUT_DEBUG(smbsrv_information, r);		
	}

	return status;
}