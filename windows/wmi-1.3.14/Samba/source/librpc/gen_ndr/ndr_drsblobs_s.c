/* server functions auto-generated by pidl */
#include "librpc/gen_ndr/ndr_drsblobs.h"

/* drsblobs - dcerpc server boilerplate generated by pidl */


static NTSTATUS drsblobs__op_bind(struct dcesrv_call_state *dce_call, const struct dcesrv_interface *iface)
{
#ifdef DCESRV_INTERFACE_DRSBLOBS_BIND
	return DCESRV_INTERFACE_DRSBLOBS_BIND(dce_call,iface);
#else
	return NT_STATUS_OK;
#endif
}

static void drsblobs__op_unbind(struct dcesrv_connection_context *context, const struct dcesrv_interface *iface)
{
#ifdef DCESRV_INTERFACE_DRSBLOBS_UNBIND
	DCESRV_INTERFACE_DRSBLOBS_UNBIND(context, iface);
#else
	return;
#endif
}

static NTSTATUS drsblobs__op_ndr_pull(struct dcesrv_call_state *dce_call, TALLOC_CTX *mem_ctx, struct ndr_pull *pull, void **r)
{
	NTSTATUS status;
	uint16_t opnum = dce_call->pkt.u.request.opnum;

	dce_call->fault_code = 0;

	if (opnum >= dcerpc_table_drsblobs.num_calls) {
		dce_call->fault_code = DCERPC_FAULT_OP_RNG_ERROR;
		return NT_STATUS_NET_WRITE_FAULT;
	}

	*r = talloc_size(mem_ctx, dcerpc_table_drsblobs.calls[opnum].struct_size);
	NT_STATUS_HAVE_NO_MEMORY(*r);

        /* unravel the NDR for the packet */
	status = dcerpc_table_drsblobs.calls[opnum].ndr_pull(pull, NDR_IN, *r);
	if (!NT_STATUS_IS_OK(status)) {
		dcerpc_log_packet(&dcerpc_table_drsblobs, opnum, NDR_IN,
				  &dce_call->pkt.u.request.stub_and_verifier);
		dce_call->fault_code = DCERPC_FAULT_NDR;
		return NT_STATUS_NET_WRITE_FAULT;
	}

	return NT_STATUS_OK;
}

static NTSTATUS drsblobs__op_dispatch(struct dcesrv_call_state *dce_call, TALLOC_CTX *mem_ctx, void *r)
{
	uint16_t opnum = dce_call->pkt.u.request.opnum;

	switch (opnum) {
	case 0: {
		struct decode_replPropertyMetaData *r2 = (struct decode_replPropertyMetaData *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(decode_replPropertyMetaData, NDR_IN, r2);
		}
		decode_replPropertyMetaData(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function decode_replPropertyMetaData will reply async\n"));
		}
		break;
	}
	case 1: {
		struct decode_replUpToDateVector *r2 = (struct decode_replUpToDateVector *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(decode_replUpToDateVector, NDR_IN, r2);
		}
		decode_replUpToDateVector(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function decode_replUpToDateVector will reply async\n"));
		}
		break;
	}
	case 2: {
		struct decode_repsFromTo *r2 = (struct decode_repsFromTo *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(decode_repsFromTo, NDR_IN, r2);
		}
		decode_repsFromTo(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function decode_repsFromTo will reply async\n"));
		}
		break;
	}
	case 3: {
		struct decode_ldapControlDirSync *r2 = (struct decode_ldapControlDirSync *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(decode_ldapControlDirSync, NDR_IN, r2);
		}
		decode_ldapControlDirSync(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function decode_ldapControlDirSync will reply async\n"));
		}
		break;
	}
	case 4: {
		struct decode_DsCompressed *r2 = (struct decode_DsCompressed *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(decode_DsCompressed, NDR_IN, r2);
		}
		decode_DsCompressed(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function decode_DsCompressed will reply async\n"));
		}
		break;
	}

	default:
		dce_call->fault_code = DCERPC_FAULT_OP_RNG_ERROR;
		break;
	}

	if (dce_call->fault_code != 0) {
		dcerpc_log_packet(&dcerpc_table_drsblobs, opnum, NDR_IN,
				  &dce_call->pkt.u.request.stub_and_verifier);
		return NT_STATUS_NET_WRITE_FAULT;
	}

	return NT_STATUS_OK;
}

static NTSTATUS drsblobs__op_reply(struct dcesrv_call_state *dce_call, TALLOC_CTX *mem_ctx, void *r)
{
	uint16_t opnum = dce_call->pkt.u.request.opnum;

	switch (opnum) {
	case 0: {
		struct decode_replPropertyMetaData *r2 = (struct decode_replPropertyMetaData *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function decode_replPropertyMetaData replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(decode_replPropertyMetaData, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in decode_replPropertyMetaData\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}
	case 1: {
		struct decode_replUpToDateVector *r2 = (struct decode_replUpToDateVector *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function decode_replUpToDateVector replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(decode_replUpToDateVector, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in decode_replUpToDateVector\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}
	case 2: {
		struct decode_repsFromTo *r2 = (struct decode_repsFromTo *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function decode_repsFromTo replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(decode_repsFromTo, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in decode_repsFromTo\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}
	case 3: {
		struct decode_ldapControlDirSync *r2 = (struct decode_ldapControlDirSync *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function decode_ldapControlDirSync replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(decode_ldapControlDirSync, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in decode_ldapControlDirSync\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}
	case 4: {
		struct decode_DsCompressed *r2 = (struct decode_DsCompressed *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function decode_DsCompressed replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(decode_DsCompressed, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in decode_DsCompressed\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}

	default:
		dce_call->fault_code = DCERPC_FAULT_OP_RNG_ERROR;
		break;
	}

	if (dce_call->fault_code != 0) {
		dcerpc_log_packet(&dcerpc_table_drsblobs, opnum, NDR_IN,
				  &dce_call->pkt.u.request.stub_and_verifier);
		return NT_STATUS_NET_WRITE_FAULT;
	}

	return NT_STATUS_OK;
}

static NTSTATUS drsblobs__op_ndr_push(struct dcesrv_call_state *dce_call, TALLOC_CTX *mem_ctx, struct ndr_push *push, const void *r)
{
	NTSTATUS status;
	uint16_t opnum = dce_call->pkt.u.request.opnum;

	status = dcerpc_table_drsblobs.calls[opnum].ndr_push(push, NDR_OUT, r);
	if (!NT_STATUS_IS_OK(status)) {
		dce_call->fault_code = DCERPC_FAULT_NDR;
		return NT_STATUS_NET_WRITE_FAULT;
	}

	return NT_STATUS_OK;
}

static const struct dcesrv_interface drsblobs_interface = {
	.name		= "drsblobs",
	.syntax_id  = {{0x12345778,0x1234,0xabcd,{0x00,0x01},{0x00,0x00,0x00,0x01}},0.0},
	.bind		= drsblobs__op_bind,
	.unbind		= drsblobs__op_unbind,
	.ndr_pull	= drsblobs__op_ndr_pull,
	.dispatch	= drsblobs__op_dispatch,
	.reply		= drsblobs__op_reply,
	.ndr_push	= drsblobs__op_ndr_push
};


static NTSTATUS drsblobs__op_init_server(struct dcesrv_context *dce_ctx, const struct dcesrv_endpoint_server *ep_server)
{
	int i;

	for (i=0;i<dcerpc_table_drsblobs.endpoints->count;i++) {
		NTSTATUS ret;
		const char *name = dcerpc_table_drsblobs.endpoints->names[i];

		ret = dcesrv_interface_register(dce_ctx, name, &drsblobs_interface, NULL);
		if (!NT_STATUS_IS_OK(ret)) {
			DEBUG(1,("drsblobs_op_init_server: failed to register endpoint '%s'\n",name));
			return ret;
		}
	}

	return NT_STATUS_OK;
}

static BOOL drsblobs__op_interface_by_uuid(struct dcesrv_interface *iface, const struct GUID *uuid, uint32_t if_version)
{
	if (drsblobs_interface.syntax_id.if_version == if_version &&
		GUID_equal(&drsblobs_interface.syntax_id.uuid, uuid)) {
		memcpy(iface,&drsblobs_interface, sizeof(*iface));
		return True;
	}

	return False;
}

static BOOL drsblobs__op_interface_by_name(struct dcesrv_interface *iface, const char *name)
{
	if (strcmp(drsblobs_interface.name, name)==0) {
		memcpy(iface,&drsblobs_interface, sizeof(*iface));
		return True;
	}

	return False;	
}
	
NTSTATUS dcerpc_server_drsblobs_init(void)
{
	NTSTATUS ret;
	struct dcesrv_endpoint_server ep_server;

	/* fill in our name */
	ep_server.name = "drsblobs";

	/* fill in all the operations */
	ep_server.init_server = drsblobs__op_init_server;

	ep_server.interface_by_uuid = drsblobs__op_interface_by_uuid;
	ep_server.interface_by_name = drsblobs__op_interface_by_name;

	/* register ourselves with the DCERPC subsystem. */
	ret = dcerpc_register_ep_server(&ep_server);

	if (!NT_STATUS_IS_OK(ret)) {
		DEBUG(0,("Failed to register 'drsblobs' endpoint server!\n"));
		return ret;
	}

	return ret;
}
