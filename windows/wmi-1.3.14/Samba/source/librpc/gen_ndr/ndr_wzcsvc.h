/* header auto-generated by pidl */

#include "librpc/gen_ndr/wzcsvc.h"

#ifndef _HEADER_NDR_wzcsvc
#define _HEADER_NDR_wzcsvc

#include "librpc/ndr/libndr.h"
#define DCERPC_WZCSVC_UUID "378e52b0-c0a9-11cf-822d-00aa0051e40f"
#define DCERPC_WZCSVC_VERSION 1.0
#define DCERPC_WZCSVC_NAME "wzcsvc"
#define DCERPC_WZCSVC_HELPSTRING "Wireless Configuration Service"
extern const struct dcerpc_interface_table dcerpc_table_wzcsvc;
NTSTATUS dcerpc_server_wzcsvc_init(void);
#define DCERPC_WZCSVC_ENUMINTERFACES (0x00)

#define DCERPC_WZCSVC_QUERYINTERFACE (0x01)

#define DCERPC_WZCSVC_SETINTERFACE (0x02)

#define DCERPC_WZCSVC_REFRESHINTERFACE (0x03)

#define DCERPC_WZCSVC_QUERYCONTEXT (0x04)

#define DCERPC_WZCSVC_SETCONTEXT (0x05)

#define DCERPC_WZCSVC_EAPOLUIRESPONSE (0x06)

#define DCERPC_WZCSVC_EAPOLGETCUSTOMAUTHDATA (0x07)

#define DCERPC_WZCSVC_EAPOLSETCUSTOMAUTHDATA (0x08)

#define DCERPC_WZCSVC_EAPOLGETINTERFACEPARAMS (0x09)

#define DCERPC_WZCSVC_EAPOLSETINTERFACEPARAMS (0x0a)

#define DCERPC_WZCSVC_EAPOLREAUTHENTICATEINTERFACE (0x0b)

#define DCERPC_WZCSVC_EAPOLQUERYINTERFACESTATE (0x0c)

#define DCERPC_WZCSVC_OPENWZCDBLOGSESSION (0x0d)

#define DCERPC_WZCSVC_CLOSEWZCDBLOGSESSION (0x0e)

#define DCERPC_WZCSVC_ENUMWZCDBLOGRECORDS (0x0f)

#define DCERPC_WZCSVC_FLUSHWZCDBLOG (0x10)

#define DCERPC_WZCSVC_GETWZCDBLOGRECORD (0x11)

#define DCERPC_WZCSVC_CALL_COUNT (18)
void ndr_print_wzcsvc_EnumInterfaces(struct ndr_print *ndr, const char *name, int flags, const struct wzcsvc_EnumInterfaces *r);
void ndr_print_wzcsvc_QueryInterface(struct ndr_print *ndr, const char *name, int flags, const struct wzcsvc_QueryInterface *r);
void ndr_print_wzcsvc_SetInterface(struct ndr_print *ndr, const char *name, int flags, const struct wzcsvc_SetInterface *r);
void ndr_print_wzcsvc_RefreshInterface(struct ndr_print *ndr, const char *name, int flags, const struct wzcsvc_RefreshInterface *r);
void ndr_print_wzcsvc_QueryContext(struct ndr_print *ndr, const char *name, int flags, const struct wzcsvc_QueryContext *r);
void ndr_print_wzcsvc_SetContext(struct ndr_print *ndr, const char *name, int flags, const struct wzcsvc_SetContext *r);
void ndr_print_wzcsvc_EapolUIResponse(struct ndr_print *ndr, const char *name, int flags, const struct wzcsvc_EapolUIResponse *r);
void ndr_print_wzcsvc_EapolGetCustomAuthData(struct ndr_print *ndr, const char *name, int flags, const struct wzcsvc_EapolGetCustomAuthData *r);
void ndr_print_wzcsvc_EapolSetCustomAuthData(struct ndr_print *ndr, const char *name, int flags, const struct wzcsvc_EapolSetCustomAuthData *r);
void ndr_print_wzcsvc_EapolGetInterfaceParams(struct ndr_print *ndr, const char *name, int flags, const struct wzcsvc_EapolGetInterfaceParams *r);
void ndr_print_wzcsvc_EapolSetInterfaceParams(struct ndr_print *ndr, const char *name, int flags, const struct wzcsvc_EapolSetInterfaceParams *r);
void ndr_print_wzcsvc_EapolReAuthenticateInterface(struct ndr_print *ndr, const char *name, int flags, const struct wzcsvc_EapolReAuthenticateInterface *r);
void ndr_print_wzcsvc_EapolQueryInterfaceState(struct ndr_print *ndr, const char *name, int flags, const struct wzcsvc_EapolQueryInterfaceState *r);
void ndr_print_wzcsvc_OpenWZCDbLogSession(struct ndr_print *ndr, const char *name, int flags, const struct wzcsvc_OpenWZCDbLogSession *r);
void ndr_print_wzcsvc_CloseWZCDbLogSession(struct ndr_print *ndr, const char *name, int flags, const struct wzcsvc_CloseWZCDbLogSession *r);
void ndr_print_wzcsvc_EnumWZCDbLogRecords(struct ndr_print *ndr, const char *name, int flags, const struct wzcsvc_EnumWZCDbLogRecords *r);
void ndr_print_wzcsvc_FlushWZCdbLog(struct ndr_print *ndr, const char *name, int flags, const struct wzcsvc_FlushWZCdbLog *r);
void ndr_print_wzcsvc_GetWZCDbLogRecord(struct ndr_print *ndr, const char *name, int flags, const struct wzcsvc_GetWZCDbLogRecord *r);
#endif /* _HEADER_NDR_wzcsvc */
