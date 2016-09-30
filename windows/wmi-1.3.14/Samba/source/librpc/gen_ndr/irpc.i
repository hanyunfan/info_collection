/* This file is autogenerated by pidl. DO NOT EDIT */
%module irpc

%{
#include "includes.h"
#include "auth/credentials/credentials.h"
#include "librpc/gen_ndr/ndr_irpc_c.h"
#include "librpc/gen_ndr/irpc.h"
%}
%import "samba.i"

%inline {
void ntstatus_exception(NTSTATUS status)
{
	/* FIXME */
}
}

%types(irpc_header);


%inline {
struct irpc { struct dcerpc_pipe *pipe; };
}

%extend irpc {
	irpc (const char *binding, struct cli_credentials *cred = NULL, TALLOC_CTX *mem_ctx = NULL, struct event_context *event = NULL)
	{
		struct irpc *ret = talloc(mem_ctx, struct irpc);
		NTSTATUS status;
		
		status = dcerpc_pipe_connect(mem_ctx, &ret->pipe, binding, &dcerpc_table_irpc, cred, event);
		if (NT_STATUS_IS_ERR(status)) {
			ntstatus_exception(status);
			return NULL;
		}
		
		return ret;
	}
	
	~irpc() {
		talloc_free(self);
	}
	
	/* irpc_uptime */
	void uptime(NTTIME *start_time, TALLOC_CTX *mem_ctx = NULL)
	{
		struct irpc_uptime r;
		NTSTATUS status;
		
		/* Fill r structure */
		
		status = dcerpc_irpc_uptime(self->pipe, mem_ctx, &r);
		if (NT_STATUS_IS_ERR(status)) {
			ntstatus_exception(status);
			return;
		}
		
		/* Set out arguments */
		*start_time = *r.out.start_time;
	}
	
	/* nbtd_information */
	void nbtd_information(enum nbtd_info_level level, union nbtd_info info, TALLOC_CTX *mem_ctx = NULL)
	{
		struct nbtd_information r;
		NTSTATUS status;
		
		/* Fill r structure */
		r.in.level = level;
		
		status = dcerpc_nbtd_information(self->pipe, mem_ctx, &r);
		if (NT_STATUS_IS_ERR(status)) {
			ntstatus_exception(status);
			return;
		}
		
		/* Set out arguments */
		/* FIXME: info [out] argument is not a pointer */
		*info = *r.out.info;
	}
	
	/* nbtd_getdcname */
	void nbtd_getdcname(const char * domainname, const char * ip_address, const char * my_computername, const char * my_accountname, uint32_t account_control, struct dom_sid *domain_sid, const char * dcname, TALLOC_CTX *mem_ctx = NULL)
	{
		struct nbtd_getdcname r;
		NTSTATUS status;
		
		/* Fill r structure */
		r.in.domainname = domainname;
		r.in.ip_address = ip_address;
		r.in.my_computername = my_computername;
		r.in.my_accountname = my_accountname;
		r.in.account_control = account_control;
		r.in.domain_sid = domain_sid;
		
		status = dcerpc_nbtd_getdcname(self->pipe, mem_ctx, &r);
		if (NT_STATUS_IS_ERR(status)) {
			ntstatus_exception(status);
			return;
		}
		
		/* Set out arguments */
		*dcname = *r.out.dcname;
	}
	
	/* nbtd_proxy_wins_challenge */
	void nbtd_proxy_wins_challenge(struct nbt_name name, uint32_t num_addrs, struct nbtd_proxy_wins_addr *addrs, TALLOC_CTX *mem_ctx = NULL)
	{
		struct nbtd_proxy_wins_challenge r;
		NTSTATUS status;
		
		/* Fill r structure */
		r.in.name = name;
		r.in.num_addrs = num_addrs;
		r.in.addrs = addrs;
		
		status = dcerpc_nbtd_proxy_wins_challenge(self->pipe, mem_ctx, &r);
		if (NT_STATUS_IS_ERR(status)) {
			ntstatus_exception(status);
			return;
		}
		
		/* Set out arguments */
		/* FIXME: num_addrs [out] argument is not a pointer */
		*num_addrs = *r.out.num_addrs;
		/* FIXME: addrs [out] argument is not a pointer */
		*addrs = *r.out.addrs;
	}
	
	/* nbtd_proxy_wins_release_demand */
	void nbtd_proxy_wins_release_demand(struct nbt_name name, uint32_t num_addrs, struct nbtd_proxy_wins_addr *addrs, TALLOC_CTX *mem_ctx = NULL)
	{
		struct nbtd_proxy_wins_release_demand r;
		NTSTATUS status;
		
		/* Fill r structure */
		r.in.name = name;
		r.in.num_addrs = num_addrs;
		r.in.addrs = addrs;
		
		status = dcerpc_nbtd_proxy_wins_release_demand(self->pipe, mem_ctx, &r);
		if (NT_STATUS_IS_ERR(status)) {
			ntstatus_exception(status);
			return;
		}
		
		/* Set out arguments */
	}
	
	/* smbsrv_information */
	void smbsrv_information(enum smbsrv_info_level level, union smbsrv_info info, TALLOC_CTX *mem_ctx = NULL)
	{
		struct smbsrv_information r;
		NTSTATUS status;
		
		/* Fill r structure */
		r.in.level = level;
		
		status = dcerpc_smbsrv_information(self->pipe, mem_ctx, &r);
		if (NT_STATUS_IS_ERR(status)) {
			ntstatus_exception(status);
			return;
		}
		
		/* Set out arguments */
		/* FIXME: info [out] argument is not a pointer */
		*info = *r.out.info;
	}
	
};

/* irpc_flags */
/* irpc_header */
/* nbtd_info_level */
/* nbtd_statistics */
/* nbtd_info */
/* nbtd_proxy_wins_addr */
/* smbsrv_info_level */
/* smbsrv_session_info */
/* smbsrv_sessions */
/* smbsrv_tcon_info */
/* smbsrv_tcons */
/* smbsrv_info */

