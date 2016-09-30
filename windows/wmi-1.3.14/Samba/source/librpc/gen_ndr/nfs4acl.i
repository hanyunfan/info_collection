/* This file is autogenerated by pidl. DO NOT EDIT */
%module nfs4acl

%{
#include "includes.h"
#include "auth/credentials/credentials.h"
#include "librpc/gen_ndr/ndr_nfs4acl_c.h"
#include "librpc/gen_ndr/nfs4acl.h"
%}
%import "samba.i"

%inline {
void ntstatus_exception(NTSTATUS status)
{
	/* FIXME */
}
}

%types(nfs4acl);


%inline {
struct nfs4acl { struct dcerpc_pipe *pipe; };
}

%extend nfs4acl {
	nfs4acl (const char *binding, struct cli_credentials *cred = NULL, TALLOC_CTX *mem_ctx = NULL, struct event_context *event = NULL)
	{
		struct nfs4acl *ret = talloc(mem_ctx, struct nfs4acl);
		NTSTATUS status;
		
		status = dcerpc_pipe_connect(mem_ctx, &ret->pipe, binding, &dcerpc_table_nfs4acl, cred, event);
		if (NT_STATUS_IS_ERR(status)) {
			ntstatus_exception(status);
			return NULL;
		}
		
		return ret;
	}
	
	~nfs4acl() {
		talloc_free(self);
	}
	
	/* nfs4acl_test */
	NTSTATUS test(struct nfs4acl acl, TALLOC_CTX *mem_ctx = NULL)
	{
		struct nfs4acl_test r;
		NTSTATUS status;
		
		/* Fill r structure */
		r.in.acl = acl;
		
		status = dcerpc_nfs4acl_test(self->pipe, mem_ctx, &r);
		if (NT_STATUS_IS_ERR(status)) {
			ntstatus_exception(status);
			return r.out.result;
		}
		
		/* Set out arguments */
		return r.out.result;
	}
	
};

/* nfs4ace */
/* nfs4acl */
