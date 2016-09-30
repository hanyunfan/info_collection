/* client functions auto-generated by pidl */

#include "includes.h"
#include "librpc/gen_ndr/ndr_dsbackup.h"
#include "librpc/gen_ndr/ndr_dsbackup_c.h"

/* ad_backup - client functions generated by pidl */


struct rpc_request *dcerpc_HrRBackupPrepare_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct HrRBackupPrepare *r)
{
	if (p->conn->flags & DCERPC_DEBUG_PRINT_IN) {
		NDR_PRINT_IN_DEBUG(HrRBackupPrepare, r);
	}
	
	return dcerpc_ndr_request_send(p, NULL, &dcerpc_table_ad_backup, DCERPC_HRRBACKUPPREPARE, mem_ctx, r);
}

NTSTATUS dcerpc_HrRBackupPrepare(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct HrRBackupPrepare *r)
{
	struct rpc_request *req;
	NTSTATUS status;
	
	req = dcerpc_HrRBackupPrepare_send(p, mem_ctx, r);
	if (req == NULL) return NT_STATUS_NO_MEMORY;

	status = dcerpc_ndr_request_recv(req);

	if (NT_STATUS_IS_OK(status) && (p->conn->flags & DCERPC_DEBUG_PRINT_OUT)) {
		NDR_PRINT_OUT_DEBUG(HrRBackupPrepare, r);		
	}

	return status;
}

struct rpc_request *dcerpc_HrRBackupEnd_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct HrRBackupEnd *r)
{
	if (p->conn->flags & DCERPC_DEBUG_PRINT_IN) {
		NDR_PRINT_IN_DEBUG(HrRBackupEnd, r);
	}
	
	return dcerpc_ndr_request_send(p, NULL, &dcerpc_table_ad_backup, DCERPC_HRRBACKUPEND, mem_ctx, r);
}

NTSTATUS dcerpc_HrRBackupEnd(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct HrRBackupEnd *r)
{
	struct rpc_request *req;
	NTSTATUS status;
	
	req = dcerpc_HrRBackupEnd_send(p, mem_ctx, r);
	if (req == NULL) return NT_STATUS_NO_MEMORY;

	status = dcerpc_ndr_request_recv(req);

	if (NT_STATUS_IS_OK(status) && (p->conn->flags & DCERPC_DEBUG_PRINT_OUT)) {
		NDR_PRINT_OUT_DEBUG(HrRBackupEnd, r);		
	}

	return status;
}

struct rpc_request *dcerpc_HrRBackupGetAttachmentInformation_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct HrRBackupGetAttachmentInformation *r)
{
	if (p->conn->flags & DCERPC_DEBUG_PRINT_IN) {
		NDR_PRINT_IN_DEBUG(HrRBackupGetAttachmentInformation, r);
	}
	
	return dcerpc_ndr_request_send(p, NULL, &dcerpc_table_ad_backup, DCERPC_HRRBACKUPGETATTACHMENTINFORMATION, mem_ctx, r);
}

NTSTATUS dcerpc_HrRBackupGetAttachmentInformation(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct HrRBackupGetAttachmentInformation *r)
{
	struct rpc_request *req;
	NTSTATUS status;
	
	req = dcerpc_HrRBackupGetAttachmentInformation_send(p, mem_ctx, r);
	if (req == NULL) return NT_STATUS_NO_MEMORY;

	status = dcerpc_ndr_request_recv(req);

	if (NT_STATUS_IS_OK(status) && (p->conn->flags & DCERPC_DEBUG_PRINT_OUT)) {
		NDR_PRINT_OUT_DEBUG(HrRBackupGetAttachmentInformation, r);		
	}

	return status;
}

struct rpc_request *dcerpc_HrRBackupOpenFile_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct HrRBackupOpenFile *r)
{
	if (p->conn->flags & DCERPC_DEBUG_PRINT_IN) {
		NDR_PRINT_IN_DEBUG(HrRBackupOpenFile, r);
	}
	
	return dcerpc_ndr_request_send(p, NULL, &dcerpc_table_ad_backup, DCERPC_HRRBACKUPOPENFILE, mem_ctx, r);
}

NTSTATUS dcerpc_HrRBackupOpenFile(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct HrRBackupOpenFile *r)
{
	struct rpc_request *req;
	NTSTATUS status;
	
	req = dcerpc_HrRBackupOpenFile_send(p, mem_ctx, r);
	if (req == NULL) return NT_STATUS_NO_MEMORY;

	status = dcerpc_ndr_request_recv(req);

	if (NT_STATUS_IS_OK(status) && (p->conn->flags & DCERPC_DEBUG_PRINT_OUT)) {
		NDR_PRINT_OUT_DEBUG(HrRBackupOpenFile, r);		
	}

	return status;
}

struct rpc_request *dcerpc_HrRBackupRead_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct HrRBackupRead *r)
{
	if (p->conn->flags & DCERPC_DEBUG_PRINT_IN) {
		NDR_PRINT_IN_DEBUG(HrRBackupRead, r);
	}
	
	return dcerpc_ndr_request_send(p, NULL, &dcerpc_table_ad_backup, DCERPC_HRRBACKUPREAD, mem_ctx, r);
}

NTSTATUS dcerpc_HrRBackupRead(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct HrRBackupRead *r)
{
	struct rpc_request *req;
	NTSTATUS status;
	
	req = dcerpc_HrRBackupRead_send(p, mem_ctx, r);
	if (req == NULL) return NT_STATUS_NO_MEMORY;

	status = dcerpc_ndr_request_recv(req);

	if (NT_STATUS_IS_OK(status) && (p->conn->flags & DCERPC_DEBUG_PRINT_OUT)) {
		NDR_PRINT_OUT_DEBUG(HrRBackupRead, r);		
	}

	return status;
}

struct rpc_request *dcerpc_HrRBackupClose_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct HrRBackupClose *r)
{
	if (p->conn->flags & DCERPC_DEBUG_PRINT_IN) {
		NDR_PRINT_IN_DEBUG(HrRBackupClose, r);
	}
	
	return dcerpc_ndr_request_send(p, NULL, &dcerpc_table_ad_backup, DCERPC_HRRBACKUPCLOSE, mem_ctx, r);
}

NTSTATUS dcerpc_HrRBackupClose(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct HrRBackupClose *r)
{
	struct rpc_request *req;
	NTSTATUS status;
	
	req = dcerpc_HrRBackupClose_send(p, mem_ctx, r);
	if (req == NULL) return NT_STATUS_NO_MEMORY;

	status = dcerpc_ndr_request_recv(req);

	if (NT_STATUS_IS_OK(status) && (p->conn->flags & DCERPC_DEBUG_PRINT_OUT)) {
		NDR_PRINT_OUT_DEBUG(HrRBackupClose, r);		
	}

	return status;
}

struct rpc_request *dcerpc_HrRBackupGetBackupLogs_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct HrRBackupGetBackupLogs *r)
{
	if (p->conn->flags & DCERPC_DEBUG_PRINT_IN) {
		NDR_PRINT_IN_DEBUG(HrRBackupGetBackupLogs, r);
	}
	
	return dcerpc_ndr_request_send(p, NULL, &dcerpc_table_ad_backup, DCERPC_HRRBACKUPGETBACKUPLOGS, mem_ctx, r);
}

NTSTATUS dcerpc_HrRBackupGetBackupLogs(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct HrRBackupGetBackupLogs *r)
{
	struct rpc_request *req;
	NTSTATUS status;
	
	req = dcerpc_HrRBackupGetBackupLogs_send(p, mem_ctx, r);
	if (req == NULL) return NT_STATUS_NO_MEMORY;

	status = dcerpc_ndr_request_recv(req);

	if (NT_STATUS_IS_OK(status) && (p->conn->flags & DCERPC_DEBUG_PRINT_OUT)) {
		NDR_PRINT_OUT_DEBUG(HrRBackupGetBackupLogs, r);		
	}

	return status;
}

struct rpc_request *dcerpc_HrRBackupTruncateLogs_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct HrRBackupTruncateLogs *r)
{
	if (p->conn->flags & DCERPC_DEBUG_PRINT_IN) {
		NDR_PRINT_IN_DEBUG(HrRBackupTruncateLogs, r);
	}
	
	return dcerpc_ndr_request_send(p, NULL, &dcerpc_table_ad_backup, DCERPC_HRRBACKUPTRUNCATELOGS, mem_ctx, r);
}

NTSTATUS dcerpc_HrRBackupTruncateLogs(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct HrRBackupTruncateLogs *r)
{
	struct rpc_request *req;
	NTSTATUS status;
	
	req = dcerpc_HrRBackupTruncateLogs_send(p, mem_ctx, r);
	if (req == NULL) return NT_STATUS_NO_MEMORY;

	status = dcerpc_ndr_request_recv(req);

	if (NT_STATUS_IS_OK(status) && (p->conn->flags & DCERPC_DEBUG_PRINT_OUT)) {
		NDR_PRINT_OUT_DEBUG(HrRBackupTruncateLogs, r);		
	}

	return status;
}

struct rpc_request *dcerpc_HrRBackupPing_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct HrRBackupPing *r)
{
	if (p->conn->flags & DCERPC_DEBUG_PRINT_IN) {
		NDR_PRINT_IN_DEBUG(HrRBackupPing, r);
	}
	
	return dcerpc_ndr_request_send(p, NULL, &dcerpc_table_ad_backup, DCERPC_HRRBACKUPPING, mem_ctx, r);
}

NTSTATUS dcerpc_HrRBackupPing(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct HrRBackupPing *r)
{
	struct rpc_request *req;
	NTSTATUS status;
	
	req = dcerpc_HrRBackupPing_send(p, mem_ctx, r);
	if (req == NULL) return NT_STATUS_NO_MEMORY;

	status = dcerpc_ndr_request_recv(req);

	if (NT_STATUS_IS_OK(status) && (p->conn->flags & DCERPC_DEBUG_PRINT_OUT)) {
		NDR_PRINT_OUT_DEBUG(HrRBackupPing, r);		
	}

	return status;
}
/* ad_restore - client functions generated by pidl */


struct rpc_request *dcerpc_HrRIsNTDSOnline_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct HrRIsNTDSOnline *r)
{
	if (p->conn->flags & DCERPC_DEBUG_PRINT_IN) {
		NDR_PRINT_IN_DEBUG(HrRIsNTDSOnline, r);
	}
	
	return dcerpc_ndr_request_send(p, NULL, &dcerpc_table_ad_restore, DCERPC_HRRISNTDSONLINE, mem_ctx, r);
}

NTSTATUS dcerpc_HrRIsNTDSOnline(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct HrRIsNTDSOnline *r)
{
	struct rpc_request *req;
	NTSTATUS status;
	
	req = dcerpc_HrRIsNTDSOnline_send(p, mem_ctx, r);
	if (req == NULL) return NT_STATUS_NO_MEMORY;

	status = dcerpc_ndr_request_recv(req);

	if (NT_STATUS_IS_OK(status) && (p->conn->flags & DCERPC_DEBUG_PRINT_OUT)) {
		NDR_PRINT_OUT_DEBUG(HrRIsNTDSOnline, r);		
	}

	return status;
}

struct rpc_request *dcerpc_HrRRestorePrepare_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct HrRRestorePrepare *r)
{
	if (p->conn->flags & DCERPC_DEBUG_PRINT_IN) {
		NDR_PRINT_IN_DEBUG(HrRRestorePrepare, r);
	}
	
	return dcerpc_ndr_request_send(p, NULL, &dcerpc_table_ad_restore, DCERPC_HRRRESTOREPREPARE, mem_ctx, r);
}

NTSTATUS dcerpc_HrRRestorePrepare(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct HrRRestorePrepare *r)
{
	struct rpc_request *req;
	NTSTATUS status;
	
	req = dcerpc_HrRRestorePrepare_send(p, mem_ctx, r);
	if (req == NULL) return NT_STATUS_NO_MEMORY;

	status = dcerpc_ndr_request_recv(req);

	if (NT_STATUS_IS_OK(status) && (p->conn->flags & DCERPC_DEBUG_PRINT_OUT)) {
		NDR_PRINT_OUT_DEBUG(HrRRestorePrepare, r);		
	}

	return status;
}

struct rpc_request *dcerpc_HrRRestoreRegister_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct HrRRestoreRegister *r)
{
	if (p->conn->flags & DCERPC_DEBUG_PRINT_IN) {
		NDR_PRINT_IN_DEBUG(HrRRestoreRegister, r);
	}
	
	return dcerpc_ndr_request_send(p, NULL, &dcerpc_table_ad_restore, DCERPC_HRRRESTOREREGISTER, mem_ctx, r);
}

NTSTATUS dcerpc_HrRRestoreRegister(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct HrRRestoreRegister *r)
{
	struct rpc_request *req;
	NTSTATUS status;
	
	req = dcerpc_HrRRestoreRegister_send(p, mem_ctx, r);
	if (req == NULL) return NT_STATUS_NO_MEMORY;

	status = dcerpc_ndr_request_recv(req);

	if (NT_STATUS_IS_OK(status) && (p->conn->flags & DCERPC_DEBUG_PRINT_OUT)) {
		NDR_PRINT_OUT_DEBUG(HrRRestoreRegister, r);		
	}

	return status;
}

struct rpc_request *dcerpc_HrRRestoreRegisterComplete_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct HrRRestoreRegisterComplete *r)
{
	if (p->conn->flags & DCERPC_DEBUG_PRINT_IN) {
		NDR_PRINT_IN_DEBUG(HrRRestoreRegisterComplete, r);
	}
	
	return dcerpc_ndr_request_send(p, NULL, &dcerpc_table_ad_restore, DCERPC_HRRRESTOREREGISTERCOMPLETE, mem_ctx, r);
}

NTSTATUS dcerpc_HrRRestoreRegisterComplete(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct HrRRestoreRegisterComplete *r)
{
	struct rpc_request *req;
	NTSTATUS status;
	
	req = dcerpc_HrRRestoreRegisterComplete_send(p, mem_ctx, r);
	if (req == NULL) return NT_STATUS_NO_MEMORY;

	status = dcerpc_ndr_request_recv(req);

	if (NT_STATUS_IS_OK(status) && (p->conn->flags & DCERPC_DEBUG_PRINT_OUT)) {
		NDR_PRINT_OUT_DEBUG(HrRRestoreRegisterComplete, r);		
	}

	return status;
}

struct rpc_request *dcerpc_HrRRestoreGetDatabaseLocations_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct HrRRestoreGetDatabaseLocations *r)
{
	if (p->conn->flags & DCERPC_DEBUG_PRINT_IN) {
		NDR_PRINT_IN_DEBUG(HrRRestoreGetDatabaseLocations, r);
	}
	
	return dcerpc_ndr_request_send(p, NULL, &dcerpc_table_ad_restore, DCERPC_HRRRESTOREGETDATABASELOCATIONS, mem_ctx, r);
}

NTSTATUS dcerpc_HrRRestoreGetDatabaseLocations(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct HrRRestoreGetDatabaseLocations *r)
{
	struct rpc_request *req;
	NTSTATUS status;
	
	req = dcerpc_HrRRestoreGetDatabaseLocations_send(p, mem_ctx, r);
	if (req == NULL) return NT_STATUS_NO_MEMORY;

	status = dcerpc_ndr_request_recv(req);

	if (NT_STATUS_IS_OK(status) && (p->conn->flags & DCERPC_DEBUG_PRINT_OUT)) {
		NDR_PRINT_OUT_DEBUG(HrRRestoreGetDatabaseLocations, r);		
	}

	return status;
}

struct rpc_request *dcerpc_HrRRestoreEnd_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct HrRRestoreEnd *r)
{
	if (p->conn->flags & DCERPC_DEBUG_PRINT_IN) {
		NDR_PRINT_IN_DEBUG(HrRRestoreEnd, r);
	}
	
	return dcerpc_ndr_request_send(p, NULL, &dcerpc_table_ad_restore, DCERPC_HRRRESTOREEND, mem_ctx, r);
}

NTSTATUS dcerpc_HrRRestoreEnd(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct HrRRestoreEnd *r)
{
	struct rpc_request *req;
	NTSTATUS status;
	
	req = dcerpc_HrRRestoreEnd_send(p, mem_ctx, r);
	if (req == NULL) return NT_STATUS_NO_MEMORY;

	status = dcerpc_ndr_request_recv(req);

	if (NT_STATUS_IS_OK(status) && (p->conn->flags & DCERPC_DEBUG_PRINT_OUT)) {
		NDR_PRINT_OUT_DEBUG(HrRRestoreEnd, r);		
	}

	return status;
}

struct rpc_request *dcerpc_HrRRestoreSetCurrentLogNumber_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct HrRRestoreSetCurrentLogNumber *r)
{
	if (p->conn->flags & DCERPC_DEBUG_PRINT_IN) {
		NDR_PRINT_IN_DEBUG(HrRRestoreSetCurrentLogNumber, r);
	}
	
	return dcerpc_ndr_request_send(p, NULL, &dcerpc_table_ad_restore, DCERPC_HRRRESTORESETCURRENTLOGNUMBER, mem_ctx, r);
}

NTSTATUS dcerpc_HrRRestoreSetCurrentLogNumber(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct HrRRestoreSetCurrentLogNumber *r)
{
	struct rpc_request *req;
	NTSTATUS status;
	
	req = dcerpc_HrRRestoreSetCurrentLogNumber_send(p, mem_ctx, r);
	if (req == NULL) return NT_STATUS_NO_MEMORY;

	status = dcerpc_ndr_request_recv(req);

	if (NT_STATUS_IS_OK(status) && (p->conn->flags & DCERPC_DEBUG_PRINT_OUT)) {
		NDR_PRINT_OUT_DEBUG(HrRRestoreSetCurrentLogNumber, r);		
	}

	return status;
}

struct rpc_request *dcerpc_HrRRestoreCheckLogsForBackup_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct HrRRestoreCheckLogsForBackup *r)
{
	if (p->conn->flags & DCERPC_DEBUG_PRINT_IN) {
		NDR_PRINT_IN_DEBUG(HrRRestoreCheckLogsForBackup, r);
	}
	
	return dcerpc_ndr_request_send(p, NULL, &dcerpc_table_ad_restore, DCERPC_HRRRESTORECHECKLOGSFORBACKUP, mem_ctx, r);
}

NTSTATUS dcerpc_HrRRestoreCheckLogsForBackup(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct HrRRestoreCheckLogsForBackup *r)
{
	struct rpc_request *req;
	NTSTATUS status;
	
	req = dcerpc_HrRRestoreCheckLogsForBackup_send(p, mem_ctx, r);
	if (req == NULL) return NT_STATUS_NO_MEMORY;

	status = dcerpc_ndr_request_recv(req);

	if (NT_STATUS_IS_OK(status) && (p->conn->flags & DCERPC_DEBUG_PRINT_OUT)) {
		NDR_PRINT_OUT_DEBUG(HrRRestoreCheckLogsForBackup, r);		
	}

	return status;
}