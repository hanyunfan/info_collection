/* parser auto-generated by pidl */

#include "includes.h"
#include "libcli/util/nterr.h"
#include "librpc/gen_ndr/ndr_misc.h"
#include "librpc/gen_ndr/ndr_dcerpc.h"
#include "librpc/rpc/dcerpc.h"
#include "librpc/gen_ndr/ndr_rot.h"

#include "librpc/gen_ndr/ndr_orpc.h"
static NTSTATUS ndr_push_rot_add(struct ndr_push *ndr, int flags, const struct rot_add *r)
{
	if (flags & NDR_IN) {
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->in.flags));
		if (r->in.unk == NULL) return NT_STATUS_INVALID_PARAMETER_MIX;
		NDR_CHECK(ndr_push_MInterfacePointer(ndr, NDR_SCALARS|NDR_BUFFERS, r->in.unk));
		if (r->in.moniker == NULL) return NT_STATUS_INVALID_PARAMETER_MIX;
		NDR_CHECK(ndr_push_MInterfacePointer(ndr, NDR_SCALARS|NDR_BUFFERS, r->in.moniker));
	}
	if (flags & NDR_OUT) {
		if (r->out.rotid == NULL) return NT_STATUS_INVALID_PARAMETER_MIX;
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, *r->out.rotid));
		NDR_CHECK(ndr_push_WERROR(ndr, NDR_SCALARS, r->out.result));
	}
	return NT_STATUS_OK;
}

static NTSTATUS ndr_pull_rot_add(struct ndr_pull *ndr, int flags, struct rot_add *r)
{
	TALLOC_CTX *_mem_save_unk_0;
	TALLOC_CTX *_mem_save_moniker_0;
	TALLOC_CTX *_mem_save_rotid_0;
	if (flags & NDR_IN) {
		ZERO_STRUCT(r->out);

		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->in.flags));
		if (ndr->flags & LIBNDR_FLAG_REF_ALLOC) {
			NDR_PULL_ALLOC(ndr, r->in.unk);
		}
		_mem_save_unk_0 = NDR_PULL_GET_MEM_CTX(ndr);
		NDR_PULL_SET_MEM_CTX(ndr, r->in.unk, LIBNDR_FLAG_REF_ALLOC);
		NDR_CHECK(ndr_pull_MInterfacePointer(ndr, NDR_SCALARS|NDR_BUFFERS, r->in.unk));
		NDR_PULL_SET_MEM_CTX(ndr, _mem_save_unk_0, LIBNDR_FLAG_REF_ALLOC);
		if (ndr->flags & LIBNDR_FLAG_REF_ALLOC) {
			NDR_PULL_ALLOC(ndr, r->in.moniker);
		}
		_mem_save_moniker_0 = NDR_PULL_GET_MEM_CTX(ndr);
		NDR_PULL_SET_MEM_CTX(ndr, r->in.moniker, LIBNDR_FLAG_REF_ALLOC);
		NDR_CHECK(ndr_pull_MInterfacePointer(ndr, NDR_SCALARS|NDR_BUFFERS, r->in.moniker));
		NDR_PULL_SET_MEM_CTX(ndr, _mem_save_moniker_0, LIBNDR_FLAG_REF_ALLOC);
		NDR_PULL_ALLOC(ndr, r->out.rotid);
		ZERO_STRUCTP(r->out.rotid);
	}
	if (flags & NDR_OUT) {
		if (ndr->flags & LIBNDR_FLAG_REF_ALLOC) {
			NDR_PULL_ALLOC(ndr, r->out.rotid);
		}
		_mem_save_rotid_0 = NDR_PULL_GET_MEM_CTX(ndr);
		NDR_PULL_SET_MEM_CTX(ndr, r->out.rotid, LIBNDR_FLAG_REF_ALLOC);
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, r->out.rotid));
		NDR_PULL_SET_MEM_CTX(ndr, _mem_save_rotid_0, LIBNDR_FLAG_REF_ALLOC);
		NDR_CHECK(ndr_pull_WERROR(ndr, NDR_SCALARS, &r->out.result));
	}
	return NT_STATUS_OK;
}

_PUBLIC_ void ndr_print_rot_add(struct ndr_print *ndr, const char *name, int flags, const struct rot_add *r)
{
	ndr_print_struct(ndr, name, "rot_add");
	ndr->depth++;
	if (flags & NDR_SET_VALUES) {
		ndr->flags |= LIBNDR_PRINT_SET_VALUES;
	}
	if (flags & NDR_IN) {
		ndr_print_struct(ndr, "in", "rot_add");
		ndr->depth++;
		ndr_print_uint32(ndr, "flags", r->in.flags);
		ndr_print_ptr(ndr, "unk", r->in.unk);
		ndr->depth++;
		ndr_print_MInterfacePointer(ndr, "unk", r->in.unk);
		ndr->depth--;
		ndr_print_ptr(ndr, "moniker", r->in.moniker);
		ndr->depth++;
		ndr_print_MInterfacePointer(ndr, "moniker", r->in.moniker);
		ndr->depth--;
		ndr->depth--;
	}
	if (flags & NDR_OUT) {
		ndr_print_struct(ndr, "out", "rot_add");
		ndr->depth++;
		ndr_print_ptr(ndr, "rotid", r->out.rotid);
		ndr->depth++;
		ndr_print_uint32(ndr, "rotid", *r->out.rotid);
		ndr->depth--;
		ndr_print_WERROR(ndr, "result", r->out.result);
		ndr->depth--;
	}
	ndr->depth--;
}

static NTSTATUS ndr_push_rot_remove(struct ndr_push *ndr, int flags, const struct rot_remove *r)
{
	if (flags & NDR_IN) {
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->in.rotid));
	}
	if (flags & NDR_OUT) {
		NDR_CHECK(ndr_push_WERROR(ndr, NDR_SCALARS, r->out.result));
	}
	return NT_STATUS_OK;
}

static NTSTATUS ndr_pull_rot_remove(struct ndr_pull *ndr, int flags, struct rot_remove *r)
{
	if (flags & NDR_IN) {
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->in.rotid));
	}
	if (flags & NDR_OUT) {
		NDR_CHECK(ndr_pull_WERROR(ndr, NDR_SCALARS, &r->out.result));
	}
	return NT_STATUS_OK;
}

_PUBLIC_ void ndr_print_rot_remove(struct ndr_print *ndr, const char *name, int flags, const struct rot_remove *r)
{
	ndr_print_struct(ndr, name, "rot_remove");
	ndr->depth++;
	if (flags & NDR_SET_VALUES) {
		ndr->flags |= LIBNDR_PRINT_SET_VALUES;
	}
	if (flags & NDR_IN) {
		ndr_print_struct(ndr, "in", "rot_remove");
		ndr->depth++;
		ndr_print_uint32(ndr, "rotid", r->in.rotid);
		ndr->depth--;
	}
	if (flags & NDR_OUT) {
		ndr_print_struct(ndr, "out", "rot_remove");
		ndr->depth++;
		ndr_print_WERROR(ndr, "result", r->out.result);
		ndr->depth--;
	}
	ndr->depth--;
}

static NTSTATUS ndr_push_rot_is_listed(struct ndr_push *ndr, int flags, const struct rot_is_listed *r)
{
	if (flags & NDR_IN) {
		if (r->in.moniker == NULL) return NT_STATUS_INVALID_PARAMETER_MIX;
		NDR_CHECK(ndr_push_MInterfacePointer(ndr, NDR_SCALARS|NDR_BUFFERS, r->in.moniker));
	}
	if (flags & NDR_OUT) {
		NDR_CHECK(ndr_push_WERROR(ndr, NDR_SCALARS, r->out.result));
	}
	return NT_STATUS_OK;
}

static NTSTATUS ndr_pull_rot_is_listed(struct ndr_pull *ndr, int flags, struct rot_is_listed *r)
{
	TALLOC_CTX *_mem_save_moniker_0;
	if (flags & NDR_IN) {
		if (ndr->flags & LIBNDR_FLAG_REF_ALLOC) {
			NDR_PULL_ALLOC(ndr, r->in.moniker);
		}
		_mem_save_moniker_0 = NDR_PULL_GET_MEM_CTX(ndr);
		NDR_PULL_SET_MEM_CTX(ndr, r->in.moniker, LIBNDR_FLAG_REF_ALLOC);
		NDR_CHECK(ndr_pull_MInterfacePointer(ndr, NDR_SCALARS|NDR_BUFFERS, r->in.moniker));
		NDR_PULL_SET_MEM_CTX(ndr, _mem_save_moniker_0, LIBNDR_FLAG_REF_ALLOC);
	}
	if (flags & NDR_OUT) {
		NDR_CHECK(ndr_pull_WERROR(ndr, NDR_SCALARS, &r->out.result));
	}
	return NT_STATUS_OK;
}

_PUBLIC_ void ndr_print_rot_is_listed(struct ndr_print *ndr, const char *name, int flags, const struct rot_is_listed *r)
{
	ndr_print_struct(ndr, name, "rot_is_listed");
	ndr->depth++;
	if (flags & NDR_SET_VALUES) {
		ndr->flags |= LIBNDR_PRINT_SET_VALUES;
	}
	if (flags & NDR_IN) {
		ndr_print_struct(ndr, "in", "rot_is_listed");
		ndr->depth++;
		ndr_print_ptr(ndr, "moniker", r->in.moniker);
		ndr->depth++;
		ndr_print_MInterfacePointer(ndr, "moniker", r->in.moniker);
		ndr->depth--;
		ndr->depth--;
	}
	if (flags & NDR_OUT) {
		ndr_print_struct(ndr, "out", "rot_is_listed");
		ndr->depth++;
		ndr_print_WERROR(ndr, "result", r->out.result);
		ndr->depth--;
	}
	ndr->depth--;
}

static NTSTATUS ndr_push_rot_get_interface_pointer(struct ndr_push *ndr, int flags, const struct rot_get_interface_pointer *r)
{
	if (flags & NDR_IN) {
		if (r->in.moniker == NULL) return NT_STATUS_INVALID_PARAMETER_MIX;
		NDR_CHECK(ndr_push_MInterfacePointer(ndr, NDR_SCALARS|NDR_BUFFERS, r->in.moniker));
	}
	if (flags & NDR_OUT) {
		if (r->out.ip == NULL) return NT_STATUS_INVALID_PARAMETER_MIX;
		NDR_CHECK(ndr_push_MInterfacePointer(ndr, NDR_SCALARS|NDR_BUFFERS, r->out.ip));
		NDR_CHECK(ndr_push_WERROR(ndr, NDR_SCALARS, r->out.result));
	}
	return NT_STATUS_OK;
}

static NTSTATUS ndr_pull_rot_get_interface_pointer(struct ndr_pull *ndr, int flags, struct rot_get_interface_pointer *r)
{
	TALLOC_CTX *_mem_save_moniker_0;
	TALLOC_CTX *_mem_save_ip_0;
	if (flags & NDR_IN) {
		ZERO_STRUCT(r->out);

		if (ndr->flags & LIBNDR_FLAG_REF_ALLOC) {
			NDR_PULL_ALLOC(ndr, r->in.moniker);
		}
		_mem_save_moniker_0 = NDR_PULL_GET_MEM_CTX(ndr);
		NDR_PULL_SET_MEM_CTX(ndr, r->in.moniker, LIBNDR_FLAG_REF_ALLOC);
		NDR_CHECK(ndr_pull_MInterfacePointer(ndr, NDR_SCALARS|NDR_BUFFERS, r->in.moniker));
		NDR_PULL_SET_MEM_CTX(ndr, _mem_save_moniker_0, LIBNDR_FLAG_REF_ALLOC);
		NDR_PULL_ALLOC(ndr, r->out.ip);
		ZERO_STRUCTP(r->out.ip);
	}
	if (flags & NDR_OUT) {
		if (ndr->flags & LIBNDR_FLAG_REF_ALLOC) {
			NDR_PULL_ALLOC(ndr, r->out.ip);
		}
		_mem_save_ip_0 = NDR_PULL_GET_MEM_CTX(ndr);
		NDR_PULL_SET_MEM_CTX(ndr, r->out.ip, LIBNDR_FLAG_REF_ALLOC);
		NDR_CHECK(ndr_pull_MInterfacePointer(ndr, NDR_SCALARS|NDR_BUFFERS, r->out.ip));
		NDR_PULL_SET_MEM_CTX(ndr, _mem_save_ip_0, LIBNDR_FLAG_REF_ALLOC);
		NDR_CHECK(ndr_pull_WERROR(ndr, NDR_SCALARS, &r->out.result));
	}
	return NT_STATUS_OK;
}

_PUBLIC_ void ndr_print_rot_get_interface_pointer(struct ndr_print *ndr, const char *name, int flags, const struct rot_get_interface_pointer *r)
{
	ndr_print_struct(ndr, name, "rot_get_interface_pointer");
	ndr->depth++;
	if (flags & NDR_SET_VALUES) {
		ndr->flags |= LIBNDR_PRINT_SET_VALUES;
	}
	if (flags & NDR_IN) {
		ndr_print_struct(ndr, "in", "rot_get_interface_pointer");
		ndr->depth++;
		ndr_print_ptr(ndr, "moniker", r->in.moniker);
		ndr->depth++;
		ndr_print_MInterfacePointer(ndr, "moniker", r->in.moniker);
		ndr->depth--;
		ndr->depth--;
	}
	if (flags & NDR_OUT) {
		ndr_print_struct(ndr, "out", "rot_get_interface_pointer");
		ndr->depth++;
		ndr_print_ptr(ndr, "ip", r->out.ip);
		ndr->depth++;
		ndr_print_MInterfacePointer(ndr, "ip", r->out.ip);
		ndr->depth--;
		ndr_print_WERROR(ndr, "result", r->out.result);
		ndr->depth--;
	}
	ndr->depth--;
}

static NTSTATUS ndr_push_rot_set_modification_time(struct ndr_push *ndr, int flags, const struct rot_set_modification_time *r)
{
	if (flags & NDR_IN) {
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->in.rotid));
		if (r->in.t == NULL) return NT_STATUS_INVALID_PARAMETER_MIX;
		NDR_CHECK(ndr_push_NTTIME(ndr, NDR_SCALARS, *r->in.t));
	}
	if (flags & NDR_OUT) {
		NDR_CHECK(ndr_push_WERROR(ndr, NDR_SCALARS, r->out.result));
	}
	return NT_STATUS_OK;
}

static NTSTATUS ndr_pull_rot_set_modification_time(struct ndr_pull *ndr, int flags, struct rot_set_modification_time *r)
{
	TALLOC_CTX *_mem_save_t_0;
	if (flags & NDR_IN) {
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->in.rotid));
		if (ndr->flags & LIBNDR_FLAG_REF_ALLOC) {
			NDR_PULL_ALLOC(ndr, r->in.t);
		}
		_mem_save_t_0 = NDR_PULL_GET_MEM_CTX(ndr);
		NDR_PULL_SET_MEM_CTX(ndr, r->in.t, LIBNDR_FLAG_REF_ALLOC);
		NDR_CHECK(ndr_pull_NTTIME(ndr, NDR_SCALARS, r->in.t));
		NDR_PULL_SET_MEM_CTX(ndr, _mem_save_t_0, LIBNDR_FLAG_REF_ALLOC);
	}
	if (flags & NDR_OUT) {
		NDR_CHECK(ndr_pull_WERROR(ndr, NDR_SCALARS, &r->out.result));
	}
	return NT_STATUS_OK;
}

_PUBLIC_ void ndr_print_rot_set_modification_time(struct ndr_print *ndr, const char *name, int flags, const struct rot_set_modification_time *r)
{
	ndr_print_struct(ndr, name, "rot_set_modification_time");
	ndr->depth++;
	if (flags & NDR_SET_VALUES) {
		ndr->flags |= LIBNDR_PRINT_SET_VALUES;
	}
	if (flags & NDR_IN) {
		ndr_print_struct(ndr, "in", "rot_set_modification_time");
		ndr->depth++;
		ndr_print_uint32(ndr, "rotid", r->in.rotid);
		ndr_print_ptr(ndr, "t", r->in.t);
		ndr->depth++;
		ndr_print_NTTIME(ndr, "t", *r->in.t);
		ndr->depth--;
		ndr->depth--;
	}
	if (flags & NDR_OUT) {
		ndr_print_struct(ndr, "out", "rot_set_modification_time");
		ndr->depth++;
		ndr_print_WERROR(ndr, "result", r->out.result);
		ndr->depth--;
	}
	ndr->depth--;
}

static NTSTATUS ndr_push_rot_get_modification_time(struct ndr_push *ndr, int flags, const struct rot_get_modification_time *r)
{
	if (flags & NDR_IN) {
		if (r->in.moniker == NULL) return NT_STATUS_INVALID_PARAMETER_MIX;
		NDR_CHECK(ndr_push_MInterfacePointer(ndr, NDR_SCALARS|NDR_BUFFERS, r->in.moniker));
	}
	if (flags & NDR_OUT) {
		if (r->out.t == NULL) return NT_STATUS_INVALID_PARAMETER_MIX;
		NDR_CHECK(ndr_push_NTTIME(ndr, NDR_SCALARS, *r->out.t));
		NDR_CHECK(ndr_push_WERROR(ndr, NDR_SCALARS, r->out.result));
	}
	return NT_STATUS_OK;
}

static NTSTATUS ndr_pull_rot_get_modification_time(struct ndr_pull *ndr, int flags, struct rot_get_modification_time *r)
{
	TALLOC_CTX *_mem_save_moniker_0;
	TALLOC_CTX *_mem_save_t_0;
	if (flags & NDR_IN) {
		ZERO_STRUCT(r->out);

		if (ndr->flags & LIBNDR_FLAG_REF_ALLOC) {
			NDR_PULL_ALLOC(ndr, r->in.moniker);
		}
		_mem_save_moniker_0 = NDR_PULL_GET_MEM_CTX(ndr);
		NDR_PULL_SET_MEM_CTX(ndr, r->in.moniker, LIBNDR_FLAG_REF_ALLOC);
		NDR_CHECK(ndr_pull_MInterfacePointer(ndr, NDR_SCALARS|NDR_BUFFERS, r->in.moniker));
		NDR_PULL_SET_MEM_CTX(ndr, _mem_save_moniker_0, LIBNDR_FLAG_REF_ALLOC);
		NDR_PULL_ALLOC(ndr, r->out.t);
		ZERO_STRUCTP(r->out.t);
	}
	if (flags & NDR_OUT) {
		if (ndr->flags & LIBNDR_FLAG_REF_ALLOC) {
			NDR_PULL_ALLOC(ndr, r->out.t);
		}
		_mem_save_t_0 = NDR_PULL_GET_MEM_CTX(ndr);
		NDR_PULL_SET_MEM_CTX(ndr, r->out.t, LIBNDR_FLAG_REF_ALLOC);
		NDR_CHECK(ndr_pull_NTTIME(ndr, NDR_SCALARS, r->out.t));
		NDR_PULL_SET_MEM_CTX(ndr, _mem_save_t_0, LIBNDR_FLAG_REF_ALLOC);
		NDR_CHECK(ndr_pull_WERROR(ndr, NDR_SCALARS, &r->out.result));
	}
	return NT_STATUS_OK;
}

_PUBLIC_ void ndr_print_rot_get_modification_time(struct ndr_print *ndr, const char *name, int flags, const struct rot_get_modification_time *r)
{
	ndr_print_struct(ndr, name, "rot_get_modification_time");
	ndr->depth++;
	if (flags & NDR_SET_VALUES) {
		ndr->flags |= LIBNDR_PRINT_SET_VALUES;
	}
	if (flags & NDR_IN) {
		ndr_print_struct(ndr, "in", "rot_get_modification_time");
		ndr->depth++;
		ndr_print_ptr(ndr, "moniker", r->in.moniker);
		ndr->depth++;
		ndr_print_MInterfacePointer(ndr, "moniker", r->in.moniker);
		ndr->depth--;
		ndr->depth--;
	}
	if (flags & NDR_OUT) {
		ndr_print_struct(ndr, "out", "rot_get_modification_time");
		ndr->depth++;
		ndr_print_ptr(ndr, "t", r->out.t);
		ndr->depth++;
		ndr_print_NTTIME(ndr, "t", *r->out.t);
		ndr->depth--;
		ndr_print_WERROR(ndr, "result", r->out.result);
		ndr->depth--;
	}
	ndr->depth--;
}

static NTSTATUS ndr_push_rot_enum(struct ndr_push *ndr, int flags, const struct rot_enum *r)
{
	if (flags & NDR_IN) {
	}
	if (flags & NDR_OUT) {
		if (r->out.EnumMoniker == NULL) return NT_STATUS_INVALID_PARAMETER_MIX;
		NDR_CHECK(ndr_push_MInterfacePointer(ndr, NDR_SCALARS|NDR_BUFFERS, r->out.EnumMoniker));
		NDR_CHECK(ndr_push_WERROR(ndr, NDR_SCALARS, r->out.result));
	}
	return NT_STATUS_OK;
}

static NTSTATUS ndr_pull_rot_enum(struct ndr_pull *ndr, int flags, struct rot_enum *r)
{
	TALLOC_CTX *_mem_save_EnumMoniker_0;
	if (flags & NDR_IN) {
		ZERO_STRUCT(r->out);

		NDR_PULL_ALLOC(ndr, r->out.EnumMoniker);
		ZERO_STRUCTP(r->out.EnumMoniker);
	}
	if (flags & NDR_OUT) {
		if (ndr->flags & LIBNDR_FLAG_REF_ALLOC) {
			NDR_PULL_ALLOC(ndr, r->out.EnumMoniker);
		}
		_mem_save_EnumMoniker_0 = NDR_PULL_GET_MEM_CTX(ndr);
		NDR_PULL_SET_MEM_CTX(ndr, r->out.EnumMoniker, LIBNDR_FLAG_REF_ALLOC);
		NDR_CHECK(ndr_pull_MInterfacePointer(ndr, NDR_SCALARS|NDR_BUFFERS, r->out.EnumMoniker));
		NDR_PULL_SET_MEM_CTX(ndr, _mem_save_EnumMoniker_0, LIBNDR_FLAG_REF_ALLOC);
		NDR_CHECK(ndr_pull_WERROR(ndr, NDR_SCALARS, &r->out.result));
	}
	return NT_STATUS_OK;
}

_PUBLIC_ void ndr_print_rot_enum(struct ndr_print *ndr, const char *name, int flags, const struct rot_enum *r)
{
	ndr_print_struct(ndr, name, "rot_enum");
	ndr->depth++;
	if (flags & NDR_SET_VALUES) {
		ndr->flags |= LIBNDR_PRINT_SET_VALUES;
	}
	if (flags & NDR_IN) {
		ndr_print_struct(ndr, "in", "rot_enum");
		ndr->depth++;
		ndr->depth--;
	}
	if (flags & NDR_OUT) {
		ndr_print_struct(ndr, "out", "rot_enum");
		ndr->depth++;
		ndr_print_ptr(ndr, "EnumMoniker", r->out.EnumMoniker);
		ndr->depth++;
		ndr_print_MInterfacePointer(ndr, "EnumMoniker", r->out.EnumMoniker);
		ndr->depth--;
		ndr_print_WERROR(ndr, "result", r->out.result);
		ndr->depth--;
	}
	ndr->depth--;
}

static const struct dcerpc_interface_call rot_calls[] = {
	{
		"rot_add",
		sizeof(struct rot_add),
		(ndr_push_flags_fn_t) ndr_push_rot_add,
		(ndr_pull_flags_fn_t) ndr_pull_rot_add,
		(ndr_print_function_t) ndr_print_rot_add,
		False,
	},
	{
		"rot_remove",
		sizeof(struct rot_remove),
		(ndr_push_flags_fn_t) ndr_push_rot_remove,
		(ndr_pull_flags_fn_t) ndr_pull_rot_remove,
		(ndr_print_function_t) ndr_print_rot_remove,
		False,
	},
	{
		"rot_is_listed",
		sizeof(struct rot_is_listed),
		(ndr_push_flags_fn_t) ndr_push_rot_is_listed,
		(ndr_pull_flags_fn_t) ndr_pull_rot_is_listed,
		(ndr_print_function_t) ndr_print_rot_is_listed,
		False,
	},
	{
		"rot_get_interface_pointer",
		sizeof(struct rot_get_interface_pointer),
		(ndr_push_flags_fn_t) ndr_push_rot_get_interface_pointer,
		(ndr_pull_flags_fn_t) ndr_pull_rot_get_interface_pointer,
		(ndr_print_function_t) ndr_print_rot_get_interface_pointer,
		False,
	},
	{
		"rot_set_modification_time",
		sizeof(struct rot_set_modification_time),
		(ndr_push_flags_fn_t) ndr_push_rot_set_modification_time,
		(ndr_pull_flags_fn_t) ndr_pull_rot_set_modification_time,
		(ndr_print_function_t) ndr_print_rot_set_modification_time,
		False,
	},
	{
		"rot_get_modification_time",
		sizeof(struct rot_get_modification_time),
		(ndr_push_flags_fn_t) ndr_push_rot_get_modification_time,
		(ndr_pull_flags_fn_t) ndr_pull_rot_get_modification_time,
		(ndr_print_function_t) ndr_print_rot_get_modification_time,
		False,
	},
	{
		"rot_enum",
		sizeof(struct rot_enum),
		(ndr_push_flags_fn_t) ndr_push_rot_enum,
		(ndr_pull_flags_fn_t) ndr_pull_rot_enum,
		(ndr_print_function_t) ndr_print_rot_enum,
		False,
	},
	{ NULL, 0, NULL, NULL, NULL, False }
};

static const char * const rot_endpoint_strings[] = {
	"ncacn_np:[\\pipe\\epmapper]", 
	"ncacn_ip_tcp:[135]", 
	"ncalrpc:[EPMAPPER]", 
};

static const struct dcerpc_endpoint_list rot_endpoints = {
	.count	= 3,
	.names	= rot_endpoint_strings
};

static const char * const rot_authservice_strings[] = {
	"host", 
};

static const struct dcerpc_authservice_list rot_authservices = {
	.count	= 3,
	.names	= rot_authservice_strings
};


const struct dcerpc_interface_table dcerpc_table_rot = {
	.name		= "rot",
	.syntax_id	= {
		{0xb9e79e60,0x3d52,0x11ce,{0xaa,0xa1},{0x00,0x00,0x69,0x01,0x29,0x3f}},
		DCERPC_ROT_VERSION
	},
	.helpstring	= DCERPC_ROT_HELPSTRING,
	.num_calls	= 7,
	.calls		= rot_calls,
	.endpoints	= &rot_endpoints,
	.authservices	= &rot_authservices
};

