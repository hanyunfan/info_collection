/* parser auto-generated by pidl */

#include "includes.h"
#include "libcli/util/nterr.h"
#include "librpc/gen_ndr/ndr_misc.h"
#include "librpc/gen_ndr/ndr_dcerpc.h"
#include "librpc/rpc/dcerpc.h"
#include "librpc/gen_ndr/ndr_orpc.h"

_PUBLIC_ NTSTATUS ndr_push_COMVERSION(struct ndr_push *ndr, int ndr_flags, const struct COMVERSION *r)
{
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_push_align(ndr, 2));
		NDR_CHECK(ndr_push_uint16(ndr, NDR_SCALARS, r->MajorVersion));
		NDR_CHECK(ndr_push_uint16(ndr, NDR_SCALARS, r->MinorVersion));
	}
	if (ndr_flags & NDR_BUFFERS) {
	}
	return NT_STATUS_OK;
}

_PUBLIC_ NTSTATUS ndr_pull_COMVERSION(struct ndr_pull *ndr, int ndr_flags, struct COMVERSION *r)
{
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_pull_align(ndr, 2));
		NDR_CHECK(ndr_pull_uint16(ndr, NDR_SCALARS, &r->MajorVersion));
		NDR_CHECK(ndr_pull_uint16(ndr, NDR_SCALARS, &r->MinorVersion));
	}
	if (ndr_flags & NDR_BUFFERS) {
	}
	return NT_STATUS_OK;
}

_PUBLIC_ void ndr_print_COMVERSION(struct ndr_print *ndr, const char *name, const struct COMVERSION *r)
{
	ndr_print_struct(ndr, name, "COMVERSION");
	ndr->depth++;
	ndr_print_uint16(ndr, "MajorVersion", r->MajorVersion);
	ndr_print_uint16(ndr, "MinorVersion", r->MinorVersion);
	ndr->depth--;
}

_PUBLIC_ NTSTATUS ndr_push_ORPC_EXTENT(struct ndr_push *ndr, int ndr_flags, const struct ORPC_EXTENT *r)
{
	NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, ((r->size+7)&~7)));
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_push_align(ndr, 4));
		NDR_CHECK(ndr_push_GUID(ndr, NDR_SCALARS, &r->id));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->size));
		NDR_CHECK(ndr_push_array_uint8(ndr, NDR_SCALARS, r->data, ((r->size+7)&~7)));
	}
	if (ndr_flags & NDR_BUFFERS) {
	}
	return NT_STATUS_OK;
}

_PUBLIC_ NTSTATUS ndr_pull_ORPC_EXTENT(struct ndr_pull *ndr, int ndr_flags, struct ORPC_EXTENT *r)
{
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_pull_array_size(ndr, &r->data));
		NDR_CHECK(ndr_pull_align(ndr, 4));
		NDR_CHECK(ndr_pull_GUID(ndr, NDR_SCALARS, &r->id));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->size));
		NDR_PULL_ALLOC_N(ndr, r->data, ndr_get_array_size(ndr, &r->data));
		NDR_CHECK(ndr_pull_array_uint8(ndr, NDR_SCALARS, r->data, ndr_get_array_size(ndr, &r->data)));
		if (r->data) {
			NDR_CHECK(ndr_check_array_size(ndr, (void*)&r->data, ((r->size+7)&~7)));
		}
	}
	if (ndr_flags & NDR_BUFFERS) {
	}
	return NT_STATUS_OK;
}

_PUBLIC_ void ndr_print_ORPC_EXTENT(struct ndr_print *ndr, const char *name, const struct ORPC_EXTENT *r)
{
	ndr_print_struct(ndr, name, "ORPC_EXTENT");
	ndr->depth++;
	ndr_print_GUID(ndr, "id", &r->id);
	ndr_print_uint32(ndr, "size", r->size);
	ndr->depth--;
}

static NTSTATUS ndr_push_ORPC_EXTENT_ARRAY(struct ndr_push *ndr, int ndr_flags, const struct ORPC_EXTENT_ARRAY *r)
{
	uint32_t cntr_extent_1;
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_push_align(ndr, 4));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->size));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->reserved));
		NDR_CHECK(ndr_push_unique_ptr(ndr, r->extent));
	}
	if (ndr_flags & NDR_BUFFERS) {
		if (r->extent) {
			NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, ((r->size+1)&~1)));
			for (cntr_extent_1 = 0; cntr_extent_1 < ((r->size+1)&~1); cntr_extent_1++) {
				NDR_CHECK(ndr_push_unique_ptr(ndr, r->extent[cntr_extent_1]));
			}
			for (cntr_extent_1 = 0; cntr_extent_1 < ((r->size+1)&~1); cntr_extent_1++) {
				if (r->extent[cntr_extent_1]) {
					NDR_CHECK(ndr_push_ORPC_EXTENT(ndr, NDR_SCALARS, r->extent[cntr_extent_1]));
				}
			}
		}
	}
	return NT_STATUS_OK;
}

static NTSTATUS ndr_pull_ORPC_EXTENT_ARRAY(struct ndr_pull *ndr, int ndr_flags, struct ORPC_EXTENT_ARRAY *r)
{
	uint32_t _ptr_extent;
	uint32_t cntr_extent_1;
	TALLOC_CTX *_mem_save_extent_0;
	TALLOC_CTX *_mem_save_extent_1;
	TALLOC_CTX *_mem_save_extent_2;
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_pull_align(ndr, 4));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->size));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->reserved));
		NDR_CHECK(ndr_pull_generic_ptr(ndr, &_ptr_extent));
		if (_ptr_extent) {
			NDR_PULL_ALLOC(ndr, r->extent);
		} else {
			r->extent = NULL;
		}
	}
	if (ndr_flags & NDR_BUFFERS) {
		if (r->extent) {
			_mem_save_extent_0 = NDR_PULL_GET_MEM_CTX(ndr);
			NDR_PULL_SET_MEM_CTX(ndr, r->extent, 0);
			NDR_CHECK(ndr_pull_array_size(ndr, &r->extent));
			NDR_PULL_ALLOC_N(ndr, r->extent, ndr_get_array_size(ndr, &r->extent));
			_mem_save_extent_1 = NDR_PULL_GET_MEM_CTX(ndr);
			NDR_PULL_SET_MEM_CTX(ndr, r->extent, 0);
			for (cntr_extent_1 = 0; cntr_extent_1 < ((r->size+1)&~1); cntr_extent_1++) {
				NDR_CHECK(ndr_pull_generic_ptr(ndr, &_ptr_extent));
				if (_ptr_extent) {
					NDR_PULL_ALLOC(ndr, (r->extent)[cntr_extent_1]);
				} else {
					(r->extent)[cntr_extent_1] = NULL;
				}
			}
			for (cntr_extent_1 = 0; cntr_extent_1 < ((r->size+1)&~1); cntr_extent_1++) {
				if ((r->extent)[cntr_extent_1]) {
					_mem_save_extent_2 = NDR_PULL_GET_MEM_CTX(ndr);
					NDR_PULL_SET_MEM_CTX(ndr, (r->extent)[cntr_extent_1], 0);
					NDR_CHECK(ndr_pull_ORPC_EXTENT(ndr, NDR_SCALARS, (r->extent)[cntr_extent_1]));
					NDR_PULL_SET_MEM_CTX(ndr, _mem_save_extent_2, 0);
				}
			}
			NDR_PULL_SET_MEM_CTX(ndr, _mem_save_extent_1, 0);
			NDR_PULL_SET_MEM_CTX(ndr, _mem_save_extent_0, 0);
		}
		if (r->extent) {
			NDR_CHECK(ndr_check_array_size(ndr, (void*)&r->extent, ((r->size+1)&~1)));
		}
	}
	return NT_STATUS_OK;
}

_PUBLIC_ void ndr_print_ORPC_EXTENT_ARRAY(struct ndr_print *ndr, const char *name, const struct ORPC_EXTENT_ARRAY *r)
{
	uint32_t cntr_extent_1;
	ndr_print_struct(ndr, name, "ORPC_EXTENT_ARRAY");
	ndr->depth++;
	ndr_print_uint32(ndr, "size", r->size);
	ndr_print_uint32(ndr, "reserved", r->reserved);
	ndr_print_ptr(ndr, "extent", r->extent);
	ndr->depth++;
	if (r->extent) {
		ndr->print(ndr, "%s: ARRAY(%d)", "extent", ((r->size+1)&~1));
		ndr->depth++;
		for (cntr_extent_1=0;cntr_extent_1<((r->size+1)&~1);cntr_extent_1++) {
			char *idx_1=NULL;
			asprintf(&idx_1, "[%d]", cntr_extent_1);
			if (idx_1) {
				ndr_print_ptr(ndr, "extent", r->extent[cntr_extent_1]);
				ndr->depth++;
				if (r->extent[cntr_extent_1]) {
					ndr_print_ORPC_EXTENT(ndr, "extent", r->extent[cntr_extent_1]);
				}
				ndr->depth--;
				free(idx_1);
			}
		}
		ndr->depth--;
	}
	ndr->depth--;
	ndr->depth--;
}

_PUBLIC_ NTSTATUS ndr_push_ORPCTHIS(struct ndr_push *ndr, int ndr_flags, const struct ORPCTHIS *r)
{
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_push_align(ndr, 4));
		NDR_CHECK(ndr_push_COMVERSION(ndr, NDR_SCALARS, &r->version));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->flags));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->reserved1));
		NDR_CHECK(ndr_push_GUID(ndr, NDR_SCALARS, &r->cid));
		NDR_CHECK(ndr_push_unique_ptr(ndr, r->extensions));
	}
	if (ndr_flags & NDR_BUFFERS) {
		if (r->extensions) {
			NDR_CHECK(ndr_push_ORPC_EXTENT_ARRAY(ndr, NDR_SCALARS|NDR_BUFFERS, r->extensions));
		}
	}
	return NT_STATUS_OK;
}

_PUBLIC_ NTSTATUS ndr_pull_ORPCTHIS(struct ndr_pull *ndr, int ndr_flags, struct ORPCTHIS *r)
{
	uint32_t _ptr_extensions;
	TALLOC_CTX *_mem_save_extensions_0;
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_pull_align(ndr, 4));
		NDR_CHECK(ndr_pull_COMVERSION(ndr, NDR_SCALARS, &r->version));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->flags));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->reserved1));
		NDR_CHECK(ndr_pull_GUID(ndr, NDR_SCALARS, &r->cid));
		NDR_CHECK(ndr_pull_generic_ptr(ndr, &_ptr_extensions));
		if (_ptr_extensions) {
			NDR_PULL_ALLOC(ndr, r->extensions);
		} else {
			r->extensions = NULL;
		}
	}
	if (ndr_flags & NDR_BUFFERS) {
		if (r->extensions) {
			_mem_save_extensions_0 = NDR_PULL_GET_MEM_CTX(ndr);
			NDR_PULL_SET_MEM_CTX(ndr, r->extensions, 0);
			NDR_CHECK(ndr_pull_ORPC_EXTENT_ARRAY(ndr, NDR_SCALARS|NDR_BUFFERS, r->extensions));
			NDR_PULL_SET_MEM_CTX(ndr, _mem_save_extensions_0, 0);
		}
	}
	return NT_STATUS_OK;
}

_PUBLIC_ void ndr_print_ORPCTHIS(struct ndr_print *ndr, const char *name, const struct ORPCTHIS *r)
{
	ndr_print_struct(ndr, name, "ORPCTHIS");
	ndr->depth++;
	ndr_print_COMVERSION(ndr, "version", &r->version);
	ndr_print_uint32(ndr, "flags", r->flags);
	ndr_print_uint32(ndr, "reserved1", r->reserved1);
	ndr_print_GUID(ndr, "cid", &r->cid);
	ndr_print_ptr(ndr, "extensions", r->extensions);
	ndr->depth++;
	if (r->extensions) {
		ndr_print_ORPC_EXTENT_ARRAY(ndr, "extensions", r->extensions);
	}
	ndr->depth--;
	ndr->depth--;
}

_PUBLIC_ NTSTATUS ndr_push_ORPCTHAT(struct ndr_push *ndr, int ndr_flags, const struct ORPCTHAT *r)
{
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_push_align(ndr, 4));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->flags));
		NDR_CHECK(ndr_push_unique_ptr(ndr, r->extensions));
	}
	if (ndr_flags & NDR_BUFFERS) {
		if (r->extensions) {
			NDR_CHECK(ndr_push_ORPC_EXTENT_ARRAY(ndr, NDR_SCALARS|NDR_BUFFERS, r->extensions));
		}
	}
	return NT_STATUS_OK;
}

_PUBLIC_ NTSTATUS ndr_pull_ORPCTHAT(struct ndr_pull *ndr, int ndr_flags, struct ORPCTHAT *r)
{
	uint32_t _ptr_extensions;
	TALLOC_CTX *_mem_save_extensions_0;
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_pull_align(ndr, 4));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->flags));
		NDR_CHECK(ndr_pull_generic_ptr(ndr, &_ptr_extensions));
		if (_ptr_extensions) {
			NDR_PULL_ALLOC(ndr, r->extensions);
		} else {
			r->extensions = NULL;
		}
	}
	if (ndr_flags & NDR_BUFFERS) {
		if (r->extensions) {
			_mem_save_extensions_0 = NDR_PULL_GET_MEM_CTX(ndr);
			NDR_PULL_SET_MEM_CTX(ndr, r->extensions, 0);
			NDR_CHECK(ndr_pull_ORPC_EXTENT_ARRAY(ndr, NDR_SCALARS|NDR_BUFFERS, r->extensions));
			NDR_PULL_SET_MEM_CTX(ndr, _mem_save_extensions_0, 0);
		}
	}
	return NT_STATUS_OK;
}

_PUBLIC_ void ndr_print_ORPCTHAT(struct ndr_print *ndr, const char *name, const struct ORPCTHAT *r)
{
	ndr_print_struct(ndr, name, "ORPCTHAT");
	ndr->depth++;
	ndr_print_uint32(ndr, "flags", r->flags);
	ndr_print_ptr(ndr, "extensions", r->extensions);
	ndr->depth++;
	if (r->extensions) {
		ndr_print_ORPC_EXTENT_ARRAY(ndr, "extensions", r->extensions);
	}
	ndr->depth--;
	ndr->depth--;
}

_PUBLIC_ NTSTATUS ndr_push_STRINGBINDING(struct ndr_push *ndr, int ndr_flags, const struct STRINGBINDING *r)
{
	{
		uint32_t _flags_save_STRUCT = ndr->flags;
		ndr_set_flags(&ndr->flags, LIBNDR_FLAG_NOALIGN);
		if (ndr_flags & NDR_SCALARS) {
			NDR_CHECK(ndr_push_align(ndr, 4));
			NDR_CHECK(ndr_push_uint16(ndr, NDR_SCALARS, r->wTowerId));
			{
				uint32_t _flags_save_string = ndr->flags;
				ndr_set_flags(&ndr->flags, LIBNDR_FLAG_STR_NULLTERM);
				NDR_CHECK(ndr_push_string(ndr, NDR_SCALARS, r->NetworkAddr));
				ndr->flags = _flags_save_string;
			}
		}
		if (ndr_flags & NDR_BUFFERS) {
		}
		ndr->flags = _flags_save_STRUCT;
	}
	return NT_STATUS_OK;
}

_PUBLIC_ NTSTATUS ndr_pull_STRINGBINDING(struct ndr_pull *ndr, int ndr_flags, struct STRINGBINDING *r)
{
	{
		uint32_t _flags_save_STRUCT = ndr->flags;
		ndr_set_flags(&ndr->flags, LIBNDR_FLAG_NOALIGN);
		if (ndr_flags & NDR_SCALARS) {
			NDR_CHECK(ndr_pull_align(ndr, 4));
			NDR_CHECK(ndr_pull_uint16(ndr, NDR_SCALARS, &r->wTowerId));
			{
				uint32_t _flags_save_string = ndr->flags;
				ndr_set_flags(&ndr->flags, LIBNDR_FLAG_STR_NULLTERM);
				NDR_CHECK(ndr_pull_string(ndr, NDR_SCALARS, &r->NetworkAddr));
				ndr->flags = _flags_save_string;
			}
		}
		if (ndr_flags & NDR_BUFFERS) {
		}
		ndr->flags = _flags_save_STRUCT;
	}
	return NT_STATUS_OK;
}

_PUBLIC_ void ndr_print_STRINGBINDING(struct ndr_print *ndr, const char *name, const struct STRINGBINDING *r)
{
	ndr_print_struct(ndr, name, "STRINGBINDING");
	{
		uint32_t _flags_save_STRUCT = ndr->flags;
		ndr_set_flags(&ndr->flags, LIBNDR_FLAG_NOALIGN);
		ndr->depth++;
		ndr_print_uint16(ndr, "wTowerId", r->wTowerId);
		ndr_print_string(ndr, "NetworkAddr", r->NetworkAddr);
		ndr->depth--;
		ndr->flags = _flags_save_STRUCT;
	}
}

_PUBLIC_ NTSTATUS ndr_push_SECURITYBINDING(struct ndr_push *ndr, int ndr_flags, const struct SECURITYBINDING *r)
{
	{
		uint32_t _flags_save_STRUCT = ndr->flags;
		ndr_set_flags(&ndr->flags, LIBNDR_FLAG_NOALIGN);
		if (ndr_flags & NDR_SCALARS) {
			NDR_CHECK(ndr_push_align(ndr, 4));
			NDR_CHECK(ndr_push_uint16(ndr, NDR_SCALARS, r->wAuthnSvc));
			NDR_CHECK(ndr_push_uint16(ndr, NDR_SCALARS, r->wAuthzSvc));
			{
				uint32_t _flags_save_string = ndr->flags;
				ndr_set_flags(&ndr->flags, LIBNDR_FLAG_STR_NULLTERM);
				NDR_CHECK(ndr_push_string(ndr, NDR_SCALARS, r->PrincName));
				ndr->flags = _flags_save_string;
			}
		}
		if (ndr_flags & NDR_BUFFERS) {
		}
		ndr->flags = _flags_save_STRUCT;
	}
	return NT_STATUS_OK;
}

_PUBLIC_ NTSTATUS ndr_pull_SECURITYBINDING(struct ndr_pull *ndr, int ndr_flags, struct SECURITYBINDING *r)
{
	{
		uint32_t _flags_save_STRUCT = ndr->flags;
		ndr_set_flags(&ndr->flags, LIBNDR_FLAG_NOALIGN);
		if (ndr_flags & NDR_SCALARS) {
			NDR_CHECK(ndr_pull_align(ndr, 4));
			NDR_CHECK(ndr_pull_uint16(ndr, NDR_SCALARS, &r->wAuthnSvc));
			NDR_CHECK(ndr_pull_uint16(ndr, NDR_SCALARS, &r->wAuthzSvc));
			{
				uint32_t _flags_save_string = ndr->flags;
				ndr_set_flags(&ndr->flags, LIBNDR_FLAG_STR_NULLTERM);
				NDR_CHECK(ndr_pull_string(ndr, NDR_SCALARS, &r->PrincName));
				ndr->flags = _flags_save_string;
			}
		}
		if (ndr_flags & NDR_BUFFERS) {
		}
		ndr->flags = _flags_save_STRUCT;
	}
	return NT_STATUS_OK;
}

_PUBLIC_ void ndr_print_SECURITYBINDING(struct ndr_print *ndr, const char *name, const struct SECURITYBINDING *r)
{
	ndr_print_struct(ndr, name, "SECURITYBINDING");
	{
		uint32_t _flags_save_STRUCT = ndr->flags;
		ndr_set_flags(&ndr->flags, LIBNDR_FLAG_NOALIGN);
		ndr->depth++;
		ndr_print_uint16(ndr, "wAuthnSvc", r->wAuthnSvc);
		ndr_print_uint16(ndr, "wAuthzSvc", r->wAuthzSvc);
		ndr_print_string(ndr, "PrincName", r->PrincName);
		ndr->depth--;
		ndr->flags = _flags_save_STRUCT;
	}
}

_PUBLIC_ NTSTATUS ndr_push_STDOBJREF(struct ndr_push *ndr, int ndr_flags, const struct STDOBJREF *r)
{
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_push_align(ndr, 8));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->flags));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->cPublicRefs));
		NDR_CHECK(ndr_push_hyper(ndr, NDR_SCALARS, r->oxid));
		NDR_CHECK(ndr_push_hyper(ndr, NDR_SCALARS, r->oid));
		NDR_CHECK(ndr_push_GUID(ndr, NDR_SCALARS, &r->ipid));
	}
	if (ndr_flags & NDR_BUFFERS) {
	}
	return NT_STATUS_OK;
}

_PUBLIC_ NTSTATUS ndr_pull_STDOBJREF(struct ndr_pull *ndr, int ndr_flags, struct STDOBJREF *r)
{
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_pull_align(ndr, 8));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->flags));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->cPublicRefs));
		NDR_CHECK(ndr_pull_hyper(ndr, NDR_SCALARS, &r->oxid));
		NDR_CHECK(ndr_pull_hyper(ndr, NDR_SCALARS, &r->oid));
		NDR_CHECK(ndr_pull_GUID(ndr, NDR_SCALARS, &r->ipid));
	}
	if (ndr_flags & NDR_BUFFERS) {
	}
	return NT_STATUS_OK;
}

_PUBLIC_ void ndr_print_STDOBJREF(struct ndr_print *ndr, const char *name, const struct STDOBJREF *r)
{
	ndr_print_struct(ndr, name, "STDOBJREF");
	ndr->depth++;
	ndr_print_uint32(ndr, "flags", r->flags);
	ndr_print_uint32(ndr, "cPublicRefs", r->cPublicRefs);
	ndr_print_hyper(ndr, "oxid", r->oxid);
	ndr_print_hyper(ndr, "oid", r->oid);
	ndr_print_GUID(ndr, "ipid", &r->ipid);
	ndr->depth--;
}

static NTSTATUS ndr_push_u_standard(struct ndr_push *ndr, int ndr_flags, const struct u_standard *r)
{
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_push_align(ndr, 8));
		NDR_CHECK(ndr_push_STDOBJREF(ndr, NDR_SCALARS, &r->std));
		NDR_CHECK(ndr_push_STRINGARRAY(ndr, NDR_SCALARS, &r->saResAddr));
	}
	if (ndr_flags & NDR_BUFFERS) {
		NDR_CHECK(ndr_push_STRINGARRAY(ndr, NDR_BUFFERS, &r->saResAddr));
	}
	return NT_STATUS_OK;
}

static NTSTATUS ndr_pull_u_standard(struct ndr_pull *ndr, int ndr_flags, struct u_standard *r)
{
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_pull_align(ndr, 8));
		NDR_CHECK(ndr_pull_STDOBJREF(ndr, NDR_SCALARS, &r->std));
		NDR_CHECK(ndr_pull_STRINGARRAY(ndr, NDR_SCALARS, &r->saResAddr));
	}
	if (ndr_flags & NDR_BUFFERS) {
		NDR_CHECK(ndr_pull_STRINGARRAY(ndr, NDR_BUFFERS, &r->saResAddr));
	}
	return NT_STATUS_OK;
}

_PUBLIC_ void ndr_print_u_standard(struct ndr_print *ndr, const char *name, const struct u_standard *r)
{
	ndr_print_struct(ndr, name, "u_standard");
	ndr->depth++;
	ndr_print_STDOBJREF(ndr, "std", &r->std);
	ndr_print_STRINGARRAY(ndr, "saResAddr", &r->saResAddr);
	ndr->depth--;
}

static NTSTATUS ndr_push_u_handler(struct ndr_push *ndr, int ndr_flags, const struct u_handler *r)
{
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_push_align(ndr, 8));
		NDR_CHECK(ndr_push_STDOBJREF(ndr, NDR_SCALARS, &r->std));
		NDR_CHECK(ndr_push_GUID(ndr, NDR_SCALARS, &r->clsid));
		NDR_CHECK(ndr_push_STRINGARRAY(ndr, NDR_SCALARS, &r->saResAddr));
	}
	if (ndr_flags & NDR_BUFFERS) {
		NDR_CHECK(ndr_push_STRINGARRAY(ndr, NDR_BUFFERS, &r->saResAddr));
	}
	return NT_STATUS_OK;
}

static NTSTATUS ndr_pull_u_handler(struct ndr_pull *ndr, int ndr_flags, struct u_handler *r)
{
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_pull_align(ndr, 8));
		NDR_CHECK(ndr_pull_STDOBJREF(ndr, NDR_SCALARS, &r->std));
		NDR_CHECK(ndr_pull_GUID(ndr, NDR_SCALARS, &r->clsid));
		NDR_CHECK(ndr_pull_STRINGARRAY(ndr, NDR_SCALARS, &r->saResAddr));
	}
	if (ndr_flags & NDR_BUFFERS) {
		NDR_CHECK(ndr_pull_STRINGARRAY(ndr, NDR_BUFFERS, &r->saResAddr));
	}
	return NT_STATUS_OK;
}

_PUBLIC_ void ndr_print_u_handler(struct ndr_print *ndr, const char *name, const struct u_handler *r)
{
	ndr_print_struct(ndr, name, "u_handler");
	ndr->depth++;
	ndr_print_STDOBJREF(ndr, "std", &r->std);
	ndr_print_GUID(ndr, "clsid", &r->clsid);
	ndr_print_STRINGARRAY(ndr, "saResAddr", &r->saResAddr);
	ndr->depth--;
}

static NTSTATUS ndr_push_u_custom(struct ndr_push *ndr, int ndr_flags, const struct u_custom *r)
{
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_push_align(ndr, 4));
		NDR_CHECK(ndr_push_GUID(ndr, NDR_SCALARS, &r->clsid));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->cbExtension));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->size));
		NDR_CHECK(ndr_push_array_uint8(ndr, NDR_SCALARS, r->pData, r->size));
	}
	if (ndr_flags & NDR_BUFFERS) {
	}
	return NT_STATUS_OK;
}

static NTSTATUS ndr_pull_u_custom(struct ndr_pull *ndr, int ndr_flags, struct u_custom *r)
{
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_pull_align(ndr, 4));
		NDR_CHECK(ndr_pull_GUID(ndr, NDR_SCALARS, &r->clsid));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->cbExtension));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->size));
		NDR_PULL_ALLOC_N(ndr, r->pData, r->size);
		NDR_CHECK(ndr_pull_array_uint8(ndr, NDR_SCALARS, r->pData, r->size));
	}
	if (ndr_flags & NDR_BUFFERS) {
	}
	return NT_STATUS_OK;
}

_PUBLIC_ void ndr_print_u_custom(struct ndr_print *ndr, const char *name, const struct u_custom *r)
{
	ndr_print_struct(ndr, name, "u_custom");
	ndr->depth++;
	ndr_print_GUID(ndr, "clsid", &r->clsid);
	ndr_print_uint32(ndr, "cbExtension", r->cbExtension);
	ndr_print_uint32(ndr, "size", r->size);
	ndr->depth--;
}

static NTSTATUS ndr_push_u_null(struct ndr_push *ndr, int ndr_flags, const struct u_null *r)
{
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_push_align(ndr, 1));
	}
	if (ndr_flags & NDR_BUFFERS) {
	}
	return NT_STATUS_OK;
}

static NTSTATUS ndr_pull_u_null(struct ndr_pull *ndr, int ndr_flags, struct u_null *r)
{
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_pull_align(ndr, 1));
	}
	if (ndr_flags & NDR_BUFFERS) {
	}
	return NT_STATUS_OK;
}

_PUBLIC_ void ndr_print_u_null(struct ndr_print *ndr, const char *name, const struct u_null *r)
{
	ndr_print_struct(ndr, name, "u_null");
	ndr->depth++;
	ndr->depth--;
}

static NTSTATUS ndr_push_OBJREF_Types(struct ndr_push *ndr, int ndr_flags, const union OBJREF_Types *r)
{
	int level;
	level = ndr_push_get_switch_value(ndr, r);
	if (ndr_flags & NDR_SCALARS) {
		switch (level) {
			case OBJREF_NULL:
				NDR_CHECK(ndr_push_u_null(ndr, NDR_SCALARS, &r->u_null));
			break;

			case OBJREF_STANDARD:
				NDR_CHECK(ndr_push_u_standard(ndr, NDR_SCALARS, &r->u_standard));
			break;

			case OBJREF_HANDLER:
				NDR_CHECK(ndr_push_u_handler(ndr, NDR_SCALARS, &r->u_handler));
			break;

			case OBJREF_CUSTOM:
				NDR_CHECK(ndr_push_u_custom(ndr, NDR_SCALARS, &r->u_custom));
			break;

			default:
				return ndr_push_error(ndr, NDR_ERR_BAD_SWITCH, "Bad switch value %u", level);
		}
	}
	if (ndr_flags & NDR_BUFFERS) {
		switch (level) {
			case OBJREF_NULL:
			break;

			case OBJREF_STANDARD:
				NDR_CHECK(ndr_push_u_standard(ndr, NDR_BUFFERS, &r->u_standard));
			break;

			case OBJREF_HANDLER:
				NDR_CHECK(ndr_push_u_handler(ndr, NDR_BUFFERS, &r->u_handler));
			break;

			case OBJREF_CUSTOM:
			break;

			default:
				return ndr_push_error(ndr, NDR_ERR_BAD_SWITCH, "Bad switch value %u", level);
		}
	}
	return NT_STATUS_OK;
}

static NTSTATUS ndr_pull_OBJREF_Types(struct ndr_pull *ndr, int ndr_flags, union OBJREF_Types *r)
{
	int level;
	level = ndr_pull_get_switch_value(ndr, r);
	if (ndr_flags & NDR_SCALARS) {
		switch (level) {
			case OBJREF_NULL: {
				NDR_CHECK(ndr_pull_u_null(ndr, NDR_SCALARS, &r->u_null));
			break; }

			case OBJREF_STANDARD: {
				NDR_CHECK(ndr_pull_u_standard(ndr, NDR_SCALARS, &r->u_standard));
			break; }

			case OBJREF_HANDLER: {
				NDR_CHECK(ndr_pull_u_handler(ndr, NDR_SCALARS, &r->u_handler));
			break; }

			case OBJREF_CUSTOM: {
				NDR_CHECK(ndr_pull_u_custom(ndr, NDR_SCALARS, &r->u_custom));
			break; }

			default:
				return ndr_pull_error(ndr, NDR_ERR_BAD_SWITCH, "Bad switch value %u", level);
		}
	}
	if (ndr_flags & NDR_BUFFERS) {
		switch (level) {
			case OBJREF_NULL: {
			break; }

			case OBJREF_STANDARD: {
				NDR_CHECK(ndr_pull_u_standard(ndr, NDR_BUFFERS, &r->u_standard));
			break; }

			case OBJREF_HANDLER: {
				NDR_CHECK(ndr_pull_u_handler(ndr, NDR_BUFFERS, &r->u_handler));
			break; }

			case OBJREF_CUSTOM: {
			break; }

			default:
				return ndr_pull_error(ndr, NDR_ERR_BAD_SWITCH, "Bad switch value %u", level);
		}
	}
	return NT_STATUS_OK;
}

_PUBLIC_ void ndr_print_OBJREF_Types(struct ndr_print *ndr, const char *name, const union OBJREF_Types *r)
{
	int level;
	level = ndr_print_get_switch_value(ndr, r);
	ndr_print_union(ndr, name, level, "OBJREF_Types");
	switch (level) {
		case OBJREF_NULL:
			ndr_print_u_null(ndr, "u_null", &r->u_null);
		break;

		case OBJREF_STANDARD:
			ndr_print_u_standard(ndr, "u_standard", &r->u_standard);
		break;

		case OBJREF_HANDLER:
			ndr_print_u_handler(ndr, "u_handler", &r->u_handler);
		break;

		case OBJREF_CUSTOM:
			ndr_print_u_custom(ndr, "u_custom", &r->u_custom);
		break;

		default:
			ndr_print_bad_level(ndr, name, level);
	}
}

_PUBLIC_ NTSTATUS ndr_push_OBJREF(struct ndr_push *ndr, int ndr_flags, const struct OBJREF *r)
{
	{
		uint32_t _flags_save_STRUCT = ndr->flags;
		ndr_set_flags(&ndr->flags, LIBNDR_FLAG_LITTLE_ENDIAN);
		if (ndr_flags & NDR_SCALARS) {
			NDR_CHECK(ndr_push_align(ndr, 8));
			NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->signature));
			NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->flags));
			NDR_CHECK(ndr_push_GUID(ndr, NDR_SCALARS, &r->iid));
			NDR_CHECK(ndr_push_set_switch_value(ndr, &r->u_objref, r->flags));
			NDR_CHECK(ndr_push_OBJREF_Types(ndr, NDR_SCALARS, &r->u_objref));
		}
		if (ndr_flags & NDR_BUFFERS) {
			NDR_CHECK(ndr_push_OBJREF_Types(ndr, NDR_BUFFERS, &r->u_objref));
		}
		ndr->flags = _flags_save_STRUCT;
	}
	return NT_STATUS_OK;
}

_PUBLIC_ NTSTATUS ndr_pull_OBJREF(struct ndr_pull *ndr, int ndr_flags, struct OBJREF *r)
{
	{
		uint32_t _flags_save_STRUCT = ndr->flags;
		ndr_set_flags(&ndr->flags, LIBNDR_FLAG_LITTLE_ENDIAN);
		if (ndr_flags & NDR_SCALARS) {
			NDR_CHECK(ndr_pull_align(ndr, 8));
			NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->signature));
			NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->flags));
			NDR_CHECK(ndr_pull_GUID(ndr, NDR_SCALARS, &r->iid));
			NDR_CHECK(ndr_pull_set_switch_value(ndr, &r->u_objref, r->flags));
			NDR_CHECK(ndr_pull_OBJREF_Types(ndr, NDR_SCALARS, &r->u_objref));
		}
		if (ndr_flags & NDR_BUFFERS) {
			NDR_CHECK(ndr_pull_OBJREF_Types(ndr, NDR_BUFFERS, &r->u_objref));
		}
		ndr->flags = _flags_save_STRUCT;
	}
	return NT_STATUS_OK;
}

_PUBLIC_ void ndr_print_OBJREF(struct ndr_print *ndr, const char *name, const struct OBJREF *r)
{
	ndr_print_struct(ndr, name, "OBJREF");
	{
		uint32_t _flags_save_STRUCT = ndr->flags;
		ndr_set_flags(&ndr->flags, LIBNDR_FLAG_LITTLE_ENDIAN);
		ndr->depth++;
		ndr_print_uint32(ndr, "signature", r->signature);
		ndr_print_uint32(ndr, "flags", r->flags);
		ndr_print_GUID(ndr, "iid", &r->iid);
		ndr_print_set_switch_value(ndr, &r->u_objref, r->flags);
		ndr_print_OBJREF_Types(ndr, "u_objref", &r->u_objref);
		ndr->depth--;
		ndr->flags = _flags_save_STRUCT;
	}
}

_PUBLIC_ NTSTATUS ndr_push_MInterfacePointer(struct ndr_push *ndr, int ndr_flags, const struct MInterfacePointer *r)
{
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_push_align(ndr, 4));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->size));
		{
			struct ndr_push *_ndr_obj;
			NDR_CHECK(ndr_push_subcontext_start(ndr, &_ndr_obj, 4, -1));
			NDR_CHECK(ndr_push_OBJREF(_ndr_obj, NDR_SCALARS|NDR_BUFFERS, &r->obj));
			NDR_CHECK(ndr_push_subcontext_end(ndr, _ndr_obj, 4, -1));
		}
	}
	if (ndr_flags & NDR_BUFFERS) {
	}
	return NT_STATUS_OK;
}

_PUBLIC_ NTSTATUS ndr_pull_MInterfacePointer(struct ndr_pull *ndr, int ndr_flags, struct MInterfacePointer *r)
{
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_pull_align(ndr, 4));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->size));
		{
			struct ndr_pull *_ndr_obj;
			NDR_CHECK(ndr_pull_subcontext_start(ndr, &_ndr_obj, 4, -1));
			NDR_CHECK(ndr_pull_OBJREF(_ndr_obj, NDR_SCALARS|NDR_BUFFERS, &r->obj));
			NDR_CHECK(ndr_pull_subcontext_end(ndr, _ndr_obj, 4, -1));
		}
	}
	if (ndr_flags & NDR_BUFFERS) {
	}
	return NT_STATUS_OK;
}

_PUBLIC_ void ndr_print_MInterfacePointer(struct ndr_print *ndr, const char *name, const struct MInterfacePointer *r)
{
	ndr_print_struct(ndr, name, "MInterfacePointer");
	ndr->depth++;
	ndr_print_uint32(ndr, "size", r->size);
	ndr_print_OBJREF(ndr, "obj", &r->obj);
	ndr->depth--;
}

_PUBLIC_ NTSTATUS ndr_push_COMRESULT(struct ndr_push *ndr, int ndr_flags, enum COMRESULT r)
{
	NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r));
	return NT_STATUS_OK;
}

_PUBLIC_ NTSTATUS ndr_pull_COMRESULT(struct ndr_pull *ndr, int ndr_flags, enum COMRESULT *r)
{
	uint32_t v;
	NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &v));
	*r = v;
	return NT_STATUS_OK;
}

_PUBLIC_ void ndr_print_COMRESULT(struct ndr_print *ndr, const char *name, enum COMRESULT r)
{
	const char *val = NULL;

	switch (r) {
		case COM_OK: val = "COM_OK"; break;
		case COM_OUTOFMEMORY: val = "COM_OUTOFMEMORY"; break;
		case COM_INVALIDARG: val = "COM_INVALIDARG"; break;
		case COM_NOINTERFACE: val = "COM_NOINTERFACE"; break;
		case COM_ACCESSDENIED: val = "COM_ACCESSDENIED"; break;
		case COM_INVALID_OXID: val = "COM_INVALID_OXID"; break;
		case COM_INVALID_OID: val = "COM_INVALID_OID"; break;
		case COM_INVALID_SET: val = "COM_INVALID_SET"; break;
		case COM_UNEXPECTED: val = "COM_UNEXPECTED"; break;
		case COM_CLSNOTFOUND: val = "COM_CLSNOTFOUND"; break;
	}
	ndr_print_enum(ndr, name, "ENUM", val, r);
}
