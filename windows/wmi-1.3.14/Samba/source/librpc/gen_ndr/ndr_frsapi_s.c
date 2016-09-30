/* server functions auto-generated by pidl */
#include "librpc/gen_ndr/ndr_frsapi.h"

/* frsapi - dcerpc server boilerplate generated by pidl */


static NTSTATUS frsapi__op_bind(struct dcesrv_call_state *dce_call, const struct dcesrv_interface *iface)
{
#ifdef DCESRV_INTERFACE_FRSAPI_BIND
	return DCESRV_INTERFACE_FRSAPI_BIND(dce_call,iface);
#else
	return NT_STATUS_OK;
#endif
}

static void frsapi__op_unbind(struct dcesrv_connection_context *context, const struct dcesrv_interface *iface)
{
#ifdef DCESRV_INTERFACE_FRSAPI_UNBIND
	DCESRV_INTERFACE_FRSAPI_UNBIND(context, iface);
#else
	return;
#endif
}

static NTSTATUS frsapi__op_ndr_pull(struct dcesrv_call_state *dce_call, TALLOC_CTX *mem_ctx, struct ndr_pull *pull, void **r)
{
	NTSTATUS status;
	uint16_t opnum = dce_call->pkt.u.request.opnum;

	dce_call->fault_code = 0;

	if (opnum >= dcerpc_table_frsapi.num_calls) {
		dce_call->fault_code = DCERPC_FAULT_OP_RNG_ERROR;
		return NT_STATUS_NET_WRITE_FAULT;
	}

	*r = talloc_size(mem_ctx, dcerpc_table_frsapi.calls[opnum].struct_size);
	NT_STATUS_HAVE_NO_MEMORY(*r);

        /* unravel the NDR for the packet */
	status = dcerpc_table_frsapi.calls[opnum].ndr_pull(pull, NDR_IN, *r);
	if (!NT_STATUS_IS_OK(status)) {
		dcerpc_log_packet(&dcerpc_table_frsapi, opnum, NDR_IN,
				  &dce_call->pkt.u.request.stub_and_verifier);
		dce_call->fault_code = DCERPC_FAULT_NDR;
		return NT_STATUS_NET_WRITE_FAULT;
	}

	return NT_STATUS_OK;
}

static NTSTATUS frsapi__op_dispatch(struct dcesrv_call_state *dce_call, TALLOC_CTX *mem_ctx, void *r)
{
	uint16_t opnum = dce_call->pkt.u.request.opnum;

	switch (opnum) {
	case 0: {
		struct FRSAPI_VERIFY_PROMOTION *r2 = (struct FRSAPI_VERIFY_PROMOTION *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(FRSAPI_VERIFY_PROMOTION, NDR_IN, r2);
		}
		FRSAPI_VERIFY_PROMOTION(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function FRSAPI_VERIFY_PROMOTION will reply async\n"));
		}
		break;
	}
	case 1: {
		struct FRSAPI_PROMOTION_STATUS *r2 = (struct FRSAPI_PROMOTION_STATUS *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(FRSAPI_PROMOTION_STATUS, NDR_IN, r2);
		}
		FRSAPI_PROMOTION_STATUS(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function FRSAPI_PROMOTION_STATUS will reply async\n"));
		}
		break;
	}
	case 2: {
		struct FRSAPI_START_DEMOTION *r2 = (struct FRSAPI_START_DEMOTION *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(FRSAPI_START_DEMOTION, NDR_IN, r2);
		}
		FRSAPI_START_DEMOTION(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function FRSAPI_START_DEMOTION will reply async\n"));
		}
		break;
	}
	case 3: {
		struct FRSAPI_COMMIT_DEMOTION *r2 = (struct FRSAPI_COMMIT_DEMOTION *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(FRSAPI_COMMIT_DEMOTION, NDR_IN, r2);
		}
		FRSAPI_COMMIT_DEMOTION(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function FRSAPI_COMMIT_DEMOTION will reply async\n"));
		}
		break;
	}
	case 4: {
		struct FRSAPI_SET_DS_POLLING_INTERVAL_W *r2 = (struct FRSAPI_SET_DS_POLLING_INTERVAL_W *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(FRSAPI_SET_DS_POLLING_INTERVAL_W, NDR_IN, r2);
		}
		FRSAPI_SET_DS_POLLING_INTERVAL_W(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function FRSAPI_SET_DS_POLLING_INTERVAL_W will reply async\n"));
		}
		break;
	}
	case 5: {
		struct FRSAPI_GET_DS_POLLING_INTERVAL_W *r2 = (struct FRSAPI_GET_DS_POLLING_INTERVAL_W *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(FRSAPI_GET_DS_POLLING_INTERVAL_W, NDR_IN, r2);
		}
		FRSAPI_GET_DS_POLLING_INTERVAL_W(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function FRSAPI_GET_DS_POLLING_INTERVAL_W will reply async\n"));
		}
		break;
	}
	case 6: {
		struct FRSAPI_VERIFY_PROMOTION_W *r2 = (struct FRSAPI_VERIFY_PROMOTION_W *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(FRSAPI_VERIFY_PROMOTION_W, NDR_IN, r2);
		}
		FRSAPI_VERIFY_PROMOTION_W(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function FRSAPI_VERIFY_PROMOTION_W will reply async\n"));
		}
		break;
	}
	case 7: {
		struct FRSAPI_INFO_W *r2 = (struct FRSAPI_INFO_W *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(FRSAPI_INFO_W, NDR_IN, r2);
		}
		FRSAPI_INFO_W(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function FRSAPI_INFO_W will reply async\n"));
		}
		break;
	}
	case 8: {
		struct FRSAPI_IS_PATH_REPLICATED *r2 = (struct FRSAPI_IS_PATH_REPLICATED *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(FRSAPI_IS_PATH_REPLICATED, NDR_IN, r2);
		}
		FRSAPI_IS_PATH_REPLICATED(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function FRSAPI_IS_PATH_REPLICATED will reply async\n"));
		}
		break;
	}
	case 9: {
		struct FRSAPI_WRITER_COMMAND *r2 = (struct FRSAPI_WRITER_COMMAND *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(FRSAPI_WRITER_COMMAND, NDR_IN, r2);
		}
		FRSAPI_WRITER_COMMAND(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function FRSAPI_WRITER_COMMAND will reply async\n"));
		}
		break;
	}

	default:
		dce_call->fault_code = DCERPC_FAULT_OP_RNG_ERROR;
		break;
	}

	if (dce_call->fault_code != 0) {
		dcerpc_log_packet(&dcerpc_table_frsapi, opnum, NDR_IN,
				  &dce_call->pkt.u.request.stub_and_verifier);
		return NT_STATUS_NET_WRITE_FAULT;
	}

	return NT_STATUS_OK;
}

static NTSTATUS frsapi__op_reply(struct dcesrv_call_state *dce_call, TALLOC_CTX *mem_ctx, void *r)
{
	uint16_t opnum = dce_call->pkt.u.request.opnum;

	switch (opnum) {
	case 0: {
		struct FRSAPI_VERIFY_PROMOTION *r2 = (struct FRSAPI_VERIFY_PROMOTION *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function FRSAPI_VERIFY_PROMOTION replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(FRSAPI_VERIFY_PROMOTION, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in FRSAPI_VERIFY_PROMOTION\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}
	case 1: {
		struct FRSAPI_PROMOTION_STATUS *r2 = (struct FRSAPI_PROMOTION_STATUS *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function FRSAPI_PROMOTION_STATUS replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(FRSAPI_PROMOTION_STATUS, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in FRSAPI_PROMOTION_STATUS\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}
	case 2: {
		struct FRSAPI_START_DEMOTION *r2 = (struct FRSAPI_START_DEMOTION *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function FRSAPI_START_DEMOTION replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(FRSAPI_START_DEMOTION, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in FRSAPI_START_DEMOTION\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}
	case 3: {
		struct FRSAPI_COMMIT_DEMOTION *r2 = (struct FRSAPI_COMMIT_DEMOTION *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function FRSAPI_COMMIT_DEMOTION replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(FRSAPI_COMMIT_DEMOTION, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in FRSAPI_COMMIT_DEMOTION\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}
	case 4: {
		struct FRSAPI_SET_DS_POLLING_INTERVAL_W *r2 = (struct FRSAPI_SET_DS_POLLING_INTERVAL_W *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function FRSAPI_SET_DS_POLLING_INTERVAL_W replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(FRSAPI_SET_DS_POLLING_INTERVAL_W, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in FRSAPI_SET_DS_POLLING_INTERVAL_W\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}
	case 5: {
		struct FRSAPI_GET_DS_POLLING_INTERVAL_W *r2 = (struct FRSAPI_GET_DS_POLLING_INTERVAL_W *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function FRSAPI_GET_DS_POLLING_INTERVAL_W replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(FRSAPI_GET_DS_POLLING_INTERVAL_W, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in FRSAPI_GET_DS_POLLING_INTERVAL_W\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}
	case 6: {
		struct FRSAPI_VERIFY_PROMOTION_W *r2 = (struct FRSAPI_VERIFY_PROMOTION_W *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function FRSAPI_VERIFY_PROMOTION_W replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(FRSAPI_VERIFY_PROMOTION_W, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in FRSAPI_VERIFY_PROMOTION_W\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}
	case 7: {
		struct FRSAPI_INFO_W *r2 = (struct FRSAPI_INFO_W *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function FRSAPI_INFO_W replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(FRSAPI_INFO_W, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in FRSAPI_INFO_W\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}
	case 8: {
		struct FRSAPI_IS_PATH_REPLICATED *r2 = (struct FRSAPI_IS_PATH_REPLICATED *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function FRSAPI_IS_PATH_REPLICATED replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(FRSAPI_IS_PATH_REPLICATED, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in FRSAPI_IS_PATH_REPLICATED\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}
	case 9: {
		struct FRSAPI_WRITER_COMMAND *r2 = (struct FRSAPI_WRITER_COMMAND *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function FRSAPI_WRITER_COMMAND replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(FRSAPI_WRITER_COMMAND, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in FRSAPI_WRITER_COMMAND\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}

	default:
		dce_call->fault_code = DCERPC_FAULT_OP_RNG_ERROR;
		break;
	}

	if (dce_call->fault_code != 0) {
		dcerpc_log_packet(&dcerpc_table_frsapi, opnum, NDR_IN,
				  &dce_call->pkt.u.request.stub_and_verifier);
		return NT_STATUS_NET_WRITE_FAULT;
	}

	return NT_STATUS_OK;
}

static NTSTATUS frsapi__op_ndr_push(struct dcesrv_call_state *dce_call, TALLOC_CTX *mem_ctx, struct ndr_push *push, const void *r)
{
	NTSTATUS status;
	uint16_t opnum = dce_call->pkt.u.request.opnum;

	status = dcerpc_table_frsapi.calls[opnum].ndr_push(push, NDR_OUT, r);
	if (!NT_STATUS_IS_OK(status)) {
		dce_call->fault_code = DCERPC_FAULT_NDR;
		return NT_STATUS_NET_WRITE_FAULT;
	}

	return NT_STATUS_OK;
}

static const struct dcesrv_interface frsapi_interface = {
	.name		= "frsapi",
	.syntax_id  = {{0xd049b186,0x814f,0x11d1,{0x9a,0x3c},{0x00,0xc0,0x4f,0xc9,0xb2,0x32}},1.1},
	.bind		= frsapi__op_bind,
	.unbind		= frsapi__op_unbind,
	.ndr_pull	= frsapi__op_ndr_pull,
	.dispatch	= frsapi__op_dispatch,
	.reply		= frsapi__op_reply,
	.ndr_push	= frsapi__op_ndr_push
};


static NTSTATUS frsapi__op_init_server(struct dcesrv_context *dce_ctx, const struct dcesrv_endpoint_server *ep_server)
{
	int i;

	for (i=0;i<dcerpc_table_frsapi.endpoints->count;i++) {
		NTSTATUS ret;
		const char *name = dcerpc_table_frsapi.endpoints->names[i];

		ret = dcesrv_interface_register(dce_ctx, name, &frsapi_interface, NULL);
		if (!NT_STATUS_IS_OK(ret)) {
			DEBUG(1,("frsapi_op_init_server: failed to register endpoint '%s'\n",name));
			return ret;
		}
	}

	return NT_STATUS_OK;
}

static BOOL frsapi__op_interface_by_uuid(struct dcesrv_interface *iface, const struct GUID *uuid, uint32_t if_version)
{
	if (frsapi_interface.syntax_id.if_version == if_version &&
		GUID_equal(&frsapi_interface.syntax_id.uuid, uuid)) {
		memcpy(iface,&frsapi_interface, sizeof(*iface));
		return True;
	}

	return False;
}

static BOOL frsapi__op_interface_by_name(struct dcesrv_interface *iface, const char *name)
{
	if (strcmp(frsapi_interface.name, name)==0) {
		memcpy(iface,&frsapi_interface, sizeof(*iface));
		return True;
	}

	return False;	
}
	
NTSTATUS dcerpc_server_frsapi_init(void)
{
	NTSTATUS ret;
	struct dcesrv_endpoint_server ep_server;

	/* fill in our name */
	ep_server.name = "frsapi";

	/* fill in all the operations */
	ep_server.init_server = frsapi__op_init_server;

	ep_server.interface_by_uuid = frsapi__op_interface_by_uuid;
	ep_server.interface_by_name = frsapi__op_interface_by_name;

	/* register ourselves with the DCERPC subsystem. */
	ret = dcerpc_register_ep_server(&ep_server);

	if (!NT_STATUS_IS_OK(ret)) {
		DEBUG(0,("Failed to register 'frsapi' endpoint server!\n"));
		return ret;
	}

	return ret;
}

