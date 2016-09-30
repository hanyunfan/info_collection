/* server functions auto-generated by pidl */
#include "librpc/gen_ndr/ndr_winbind.h"

/* winbind - dcerpc server boilerplate generated by pidl */


static NTSTATUS winbind__op_bind(struct dcesrv_call_state *dce_call, const struct dcesrv_interface *iface)
{
#ifdef DCESRV_INTERFACE_WINBIND_BIND
	return DCESRV_INTERFACE_WINBIND_BIND(dce_call,iface);
#else
	return NT_STATUS_OK;
#endif
}

static void winbind__op_unbind(struct dcesrv_connection_context *context, const struct dcesrv_interface *iface)
{
#ifdef DCESRV_INTERFACE_WINBIND_UNBIND
	DCESRV_INTERFACE_WINBIND_UNBIND(context, iface);
#else
	return;
#endif
}

static NTSTATUS winbind__op_ndr_pull(struct dcesrv_call_state *dce_call, TALLOC_CTX *mem_ctx, struct ndr_pull *pull, void **r)
{
	NTSTATUS status;
	uint16_t opnum = dce_call->pkt.u.request.opnum;

	dce_call->fault_code = 0;

	if (opnum >= dcerpc_table_winbind.num_calls) {
		dce_call->fault_code = DCERPC_FAULT_OP_RNG_ERROR;
		return NT_STATUS_NET_WRITE_FAULT;
	}

	*r = talloc_size(mem_ctx, dcerpc_table_winbind.calls[opnum].struct_size);
	NT_STATUS_HAVE_NO_MEMORY(*r);

        /* unravel the NDR for the packet */
	status = dcerpc_table_winbind.calls[opnum].ndr_pull(pull, NDR_IN, *r);
	if (!NT_STATUS_IS_OK(status)) {
		dcerpc_log_packet(&dcerpc_table_winbind, opnum, NDR_IN,
				  &dce_call->pkt.u.request.stub_and_verifier);
		dce_call->fault_code = DCERPC_FAULT_NDR;
		return NT_STATUS_NET_WRITE_FAULT;
	}

	return NT_STATUS_OK;
}

static NTSTATUS winbind__op_dispatch(struct dcesrv_call_state *dce_call, TALLOC_CTX *mem_ctx, void *r)
{
	uint16_t opnum = dce_call->pkt.u.request.opnum;

	switch (opnum) {
	case 0: {
		struct winbind_information *r2 = (struct winbind_information *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(winbind_information, NDR_IN, r2);
		}
		winbind_information(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function winbind_information will reply async\n"));
		}
		break;
	}
	case 1: {
		struct winbind_remote_control *r2 = (struct winbind_remote_control *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(winbind_remote_control, NDR_IN, r2);
		}
		r2->out.result = winbind_remote_control(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function winbind_remote_control will reply async\n"));
		}
		break;
	}
	case 2: {
		struct winbind_SamLogon *r2 = (struct winbind_SamLogon *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(winbind_SamLogon, NDR_IN, r2);
		}
		r2->out.result = winbind_SamLogon(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function winbind_SamLogon will reply async\n"));
		}
		break;
	}

	default:
		dce_call->fault_code = DCERPC_FAULT_OP_RNG_ERROR;
		break;
	}

	if (dce_call->fault_code != 0) {
		dcerpc_log_packet(&dcerpc_table_winbind, opnum, NDR_IN,
				  &dce_call->pkt.u.request.stub_and_verifier);
		return NT_STATUS_NET_WRITE_FAULT;
	}

	return NT_STATUS_OK;
}

static NTSTATUS winbind__op_reply(struct dcesrv_call_state *dce_call, TALLOC_CTX *mem_ctx, void *r)
{
	uint16_t opnum = dce_call->pkt.u.request.opnum;

	switch (opnum) {
	case 0: {
		struct winbind_information *r2 = (struct winbind_information *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function winbind_information replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(winbind_information, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in winbind_information\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}
	case 1: {
		struct winbind_remote_control *r2 = (struct winbind_remote_control *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function winbind_remote_control replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(winbind_remote_control, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in winbind_remote_control\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}
	case 2: {
		struct winbind_SamLogon *r2 = (struct winbind_SamLogon *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function winbind_SamLogon replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(winbind_SamLogon, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in winbind_SamLogon\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}

	default:
		dce_call->fault_code = DCERPC_FAULT_OP_RNG_ERROR;
		break;
	}

	if (dce_call->fault_code != 0) {
		dcerpc_log_packet(&dcerpc_table_winbind, opnum, NDR_IN,
				  &dce_call->pkt.u.request.stub_and_verifier);
		return NT_STATUS_NET_WRITE_FAULT;
	}

	return NT_STATUS_OK;
}

static NTSTATUS winbind__op_ndr_push(struct dcesrv_call_state *dce_call, TALLOC_CTX *mem_ctx, struct ndr_push *push, const void *r)
{
	NTSTATUS status;
	uint16_t opnum = dce_call->pkt.u.request.opnum;

	status = dcerpc_table_winbind.calls[opnum].ndr_push(push, NDR_OUT, r);
	if (!NT_STATUS_IS_OK(status)) {
		dce_call->fault_code = DCERPC_FAULT_NDR;
		return NT_STATUS_NET_WRITE_FAULT;
	}

	return NT_STATUS_OK;
}

static const struct dcesrv_interface winbind_interface = {
	.name		= "winbind",
	.syntax_id  = {{0x245f3e6b,0x3c5d,0x6e21,{0x3a,0x2d},{0x2a,0x3d,0x64,0x5b,0x72,0x21}},1.0},
	.bind		= winbind__op_bind,
	.unbind		= winbind__op_unbind,
	.ndr_pull	= winbind__op_ndr_pull,
	.dispatch	= winbind__op_dispatch,
	.reply		= winbind__op_reply,
	.ndr_push	= winbind__op_ndr_push
};


static NTSTATUS winbind__op_init_server(struct dcesrv_context *dce_ctx, const struct dcesrv_endpoint_server *ep_server)
{
	int i;

	for (i=0;i<dcerpc_table_winbind.endpoints->count;i++) {
		NTSTATUS ret;
		const char *name = dcerpc_table_winbind.endpoints->names[i];

		ret = dcesrv_interface_register(dce_ctx, name, &winbind_interface, NULL);
		if (!NT_STATUS_IS_OK(ret)) {
			DEBUG(1,("winbind_op_init_server: failed to register endpoint '%s'\n",name));
			return ret;
		}
	}

	return NT_STATUS_OK;
}

static BOOL winbind__op_interface_by_uuid(struct dcesrv_interface *iface, const struct GUID *uuid, uint32_t if_version)
{
	if (winbind_interface.syntax_id.if_version == if_version &&
		GUID_equal(&winbind_interface.syntax_id.uuid, uuid)) {
		memcpy(iface,&winbind_interface, sizeof(*iface));
		return True;
	}

	return False;
}

static BOOL winbind__op_interface_by_name(struct dcesrv_interface *iface, const char *name)
{
	if (strcmp(winbind_interface.name, name)==0) {
		memcpy(iface,&winbind_interface, sizeof(*iface));
		return True;
	}

	return False;	
}
	
NTSTATUS dcerpc_server_winbind_init(void)
{
	NTSTATUS ret;
	struct dcesrv_endpoint_server ep_server;

	/* fill in our name */
	ep_server.name = "winbind";

	/* fill in all the operations */
	ep_server.init_server = winbind__op_init_server;

	ep_server.interface_by_uuid = winbind__op_interface_by_uuid;
	ep_server.interface_by_name = winbind__op_interface_by_name;

	/* register ourselves with the DCERPC subsystem. */
	ret = dcerpc_register_ep_server(&ep_server);

	if (!NT_STATUS_IS_OK(ret)) {
		DEBUG(0,("Failed to register 'winbind' endpoint server!\n"));
		return ret;
	}

	return ret;
}
