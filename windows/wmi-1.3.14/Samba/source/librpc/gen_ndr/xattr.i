/* This file is autogenerated by pidl. DO NOT EDIT */
%module xattr

%{
#include "includes.h"
#include "auth/credentials/credentials.h"
#include "librpc/gen_ndr/ndr_xattr_c.h"
#include "librpc/gen_ndr/xattr.h"
%}
%import "samba.i"

%inline {
void ntstatus_exception(NTSTATUS status)
{
	/* FIXME */
}
}

%types(xattr_DosAttrib);
%types(xattr_DosEAs);
%types(xattr_DosStreams);
%types(xattr_NTACL);


%inline {
struct xattr { struct dcerpc_pipe *pipe; };
}

%extend xattr {
	xattr (const char *binding, struct cli_credentials *cred = NULL, TALLOC_CTX *mem_ctx = NULL, struct event_context *event = NULL)
	{
		struct xattr *ret = talloc(mem_ctx, struct xattr);
		NTSTATUS status;
		
		status = dcerpc_pipe_connect(mem_ctx, &ret->pipe, binding, &dcerpc_table_xattr, cred, event);
		if (NT_STATUS_IS_ERR(status)) {
			ntstatus_exception(status);
			return NULL;
		}
		
		return ret;
	}
	
	~xattr() {
		talloc_free(self);
	}
	
};

/* xattr_DosInfo1 */
/* xattr_DosInfo2 */
/* xattr_DosInfo */
/* xattr_DosAttrib */
/* xattr_EA */
/* xattr_DosEAs */
/* xattr_DosStream */
/* xattr_DosStreams */
/* xattr_NTACL_Info */
/* xattr_NTACL */

