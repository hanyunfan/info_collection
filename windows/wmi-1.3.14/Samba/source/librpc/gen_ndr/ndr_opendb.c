/* parser auto-generated by pidl */

#include "includes.h"
#include "libcli/util/nterr.h"
#include "librpc/gen_ndr/ndr_misc.h"
#include "librpc/gen_ndr/ndr_dcerpc.h"
#include "librpc/rpc/dcerpc.h"
#include "librpc/gen_ndr/ndr_opendb.h"

static NTSTATUS ndr_push_opendb_entry(struct ndr_push *ndr, int ndr_flags, const struct opendb_entry *r)
{
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_push_align(ndr, 8));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->server));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->stream_id));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->share_access));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->access_mask));
		NDR_CHECK(ndr_push_pointer(ndr, NDR_SCALARS, r->file_handle));
		NDR_CHECK(ndr_push_uint8(ndr, NDR_SCALARS, r->delete_on_close));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->oplock_level));
	}
	if (ndr_flags & NDR_BUFFERS) {
	}
	return NT_STATUS_OK;
}

static NTSTATUS ndr_pull_opendb_entry(struct ndr_pull *ndr, int ndr_flags, struct opendb_entry *r)
{
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_pull_align(ndr, 8));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->server));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->stream_id));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->share_access));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->access_mask));
		NDR_CHECK(ndr_pull_pointer(ndr, NDR_SCALARS, &r->file_handle));
		NDR_CHECK(ndr_pull_uint8(ndr, NDR_SCALARS, &r->delete_on_close));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->oplock_level));
	}
	if (ndr_flags & NDR_BUFFERS) {
	}
	return NT_STATUS_OK;
}

_PUBLIC_ void ndr_print_opendb_entry(struct ndr_print *ndr, const char *name, const struct opendb_entry *r)
{
	ndr_print_struct(ndr, name, "opendb_entry");
	ndr->depth++;
	ndr_print_uint32(ndr, "server", r->server);
	ndr_print_uint32(ndr, "stream_id", r->stream_id);
	ndr_print_uint32(ndr, "share_access", r->share_access);
	ndr_print_uint32(ndr, "access_mask", r->access_mask);
	ndr_print_pointer(ndr, "file_handle", r->file_handle);
	ndr_print_uint8(ndr, "delete_on_close", r->delete_on_close);
	ndr_print_uint32(ndr, "oplock_level", r->oplock_level);
	ndr->depth--;
}

static NTSTATUS ndr_push_opendb_pending(struct ndr_push *ndr, int ndr_flags, const struct opendb_pending *r)
{
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_push_align(ndr, 8));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->server));
		NDR_CHECK(ndr_push_pointer(ndr, NDR_SCALARS, r->notify_ptr));
	}
	if (ndr_flags & NDR_BUFFERS) {
	}
	return NT_STATUS_OK;
}

static NTSTATUS ndr_pull_opendb_pending(struct ndr_pull *ndr, int ndr_flags, struct opendb_pending *r)
{
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_pull_align(ndr, 8));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->server));
		NDR_CHECK(ndr_pull_pointer(ndr, NDR_SCALARS, &r->notify_ptr));
	}
	if (ndr_flags & NDR_BUFFERS) {
	}
	return NT_STATUS_OK;
}

_PUBLIC_ void ndr_print_opendb_pending(struct ndr_print *ndr, const char *name, const struct opendb_pending *r)
{
	ndr_print_struct(ndr, name, "opendb_pending");
	ndr->depth++;
	ndr_print_uint32(ndr, "server", r->server);
	ndr_print_pointer(ndr, "notify_ptr", r->notify_ptr);
	ndr->depth--;
}

_PUBLIC_ NTSTATUS ndr_push_opendb_file(struct ndr_push *ndr, int ndr_flags, const struct opendb_file *r)
{
	uint32_t cntr_entries_0;
	uint32_t cntr_pending_0;
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_push_align(ndr, 8));
		NDR_CHECK(ndr_push_uint8(ndr, NDR_SCALARS, r->delete_on_close));
		{
			uint32_t _flags_save_string = ndr->flags;
			ndr_set_flags(&ndr->flags, LIBNDR_FLAG_STR_UTF8|LIBNDR_FLAG_STR_NULLTERM);
			NDR_CHECK(ndr_push_string(ndr, NDR_SCALARS, r->path));
			ndr->flags = _flags_save_string;
		}
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->num_entries));
		for (cntr_entries_0 = 0; cntr_entries_0 < r->num_entries; cntr_entries_0++) {
			NDR_CHECK(ndr_push_opendb_entry(ndr, NDR_SCALARS, &r->entries[cntr_entries_0]));
		}
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->num_pending));
		for (cntr_pending_0 = 0; cntr_pending_0 < r->num_pending; cntr_pending_0++) {
			NDR_CHECK(ndr_push_opendb_pending(ndr, NDR_SCALARS, &r->pending[cntr_pending_0]));
		}
	}
	if (ndr_flags & NDR_BUFFERS) {
	}
	return NT_STATUS_OK;
}

_PUBLIC_ NTSTATUS ndr_pull_opendb_file(struct ndr_pull *ndr, int ndr_flags, struct opendb_file *r)
{
	uint32_t cntr_entries_0;
	TALLOC_CTX *_mem_save_entries_0;
	uint32_t cntr_pending_0;
	TALLOC_CTX *_mem_save_pending_0;
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_pull_align(ndr, 8));
		NDR_CHECK(ndr_pull_uint8(ndr, NDR_SCALARS, &r->delete_on_close));
		{
			uint32_t _flags_save_string = ndr->flags;
			ndr_set_flags(&ndr->flags, LIBNDR_FLAG_STR_UTF8|LIBNDR_FLAG_STR_NULLTERM);
			NDR_CHECK(ndr_pull_string(ndr, NDR_SCALARS, &r->path));
			ndr->flags = _flags_save_string;
		}
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->num_entries));
		NDR_PULL_ALLOC_N(ndr, r->entries, r->num_entries);
		_mem_save_entries_0 = NDR_PULL_GET_MEM_CTX(ndr);
		NDR_PULL_SET_MEM_CTX(ndr, r->entries, 0);
		for (cntr_entries_0 = 0; cntr_entries_0 < r->num_entries; cntr_entries_0++) {
			NDR_CHECK(ndr_pull_opendb_entry(ndr, NDR_SCALARS, &(r->entries)[cntr_entries_0]));
		}
		NDR_PULL_SET_MEM_CTX(ndr, _mem_save_entries_0, 0);
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->num_pending));
		NDR_PULL_ALLOC_N(ndr, r->pending, r->num_pending);
		_mem_save_pending_0 = NDR_PULL_GET_MEM_CTX(ndr);
		NDR_PULL_SET_MEM_CTX(ndr, r->pending, 0);
		for (cntr_pending_0 = 0; cntr_pending_0 < r->num_pending; cntr_pending_0++) {
			NDR_CHECK(ndr_pull_opendb_pending(ndr, NDR_SCALARS, &(r->pending)[cntr_pending_0]));
		}
		NDR_PULL_SET_MEM_CTX(ndr, _mem_save_pending_0, 0);
	}
	if (ndr_flags & NDR_BUFFERS) {
	}
	return NT_STATUS_OK;
}

_PUBLIC_ void ndr_print_opendb_file(struct ndr_print *ndr, const char *name, const struct opendb_file *r)
{
	uint32_t cntr_entries_0;
	uint32_t cntr_pending_0;
	ndr_print_struct(ndr, name, "opendb_file");
	ndr->depth++;
	ndr_print_uint8(ndr, "delete_on_close", r->delete_on_close);
	ndr_print_string(ndr, "path", r->path);
	ndr_print_uint32(ndr, "num_entries", r->num_entries);
	ndr->print(ndr, "%s: ARRAY(%d)", "entries", r->num_entries);
	ndr->depth++;
	for (cntr_entries_0=0;cntr_entries_0<r->num_entries;cntr_entries_0++) {
		char *idx_0=NULL;
		asprintf(&idx_0, "[%d]", cntr_entries_0);
		if (idx_0) {
			ndr_print_opendb_entry(ndr, "entries", &r->entries[cntr_entries_0]);
			free(idx_0);
		}
	}
	ndr->depth--;
	ndr_print_uint32(ndr, "num_pending", r->num_pending);
	ndr->print(ndr, "%s: ARRAY(%d)", "pending", r->num_pending);
	ndr->depth++;
	for (cntr_pending_0=0;cntr_pending_0<r->num_pending;cntr_pending_0++) {
		char *idx_0=NULL;
		asprintf(&idx_0, "[%d]", cntr_pending_0);
		if (idx_0) {
			ndr_print_opendb_pending(ndr, "pending", &r->pending[cntr_pending_0]);
			free(idx_0);
		}
	}
	ndr->depth--;
	ndr->depth--;
}

