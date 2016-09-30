/* header auto-generated by pidl */

#include "librpc/gen_ndr/msgsvc.h"

#ifndef _HEADER_NDR_msgsvc
#define _HEADER_NDR_msgsvc

#include "librpc/ndr/libndr.h"
#define DCERPC_MSGSVC_UUID "17fdd703-1827-4e34-79d4-24a55c53bb37"
#define DCERPC_MSGSVC_VERSION 1.0
#define DCERPC_MSGSVC_NAME "msgsvc"
#define DCERPC_MSGSVC_HELPSTRING "Messaging Service"
extern const struct dcerpc_interface_table dcerpc_table_msgsvc;
NTSTATUS dcerpc_server_msgsvc_init(void);
#define DCERPC_NETRMESSAGENAMEADD (0x00)

#define DCERPC_NETRMESSAGENAMEENUM (0x01)

#define DCERPC_NETRMESSAGENAMEGETINFO (0x02)

#define DCERPC_NETRMESSAGENAMEDEL (0x03)

#define DCERPC_MSGSVC_CALL_COUNT (4)
void ndr_print_NetrMessageNameAdd(struct ndr_print *ndr, const char *name, int flags, const struct NetrMessageNameAdd *r);
void ndr_print_NetrMessageNameEnum(struct ndr_print *ndr, const char *name, int flags, const struct NetrMessageNameEnum *r);
void ndr_print_NetrMessageNameGetInfo(struct ndr_print *ndr, const char *name, int flags, const struct NetrMessageNameGetInfo *r);
void ndr_print_NetrMessageNameDel(struct ndr_print *ndr, const char *name, int flags, const struct NetrMessageNameDel *r);
#endif /* _HEADER_NDR_msgsvc */
#ifndef _HEADER_NDR_msgsvcsend
#define _HEADER_NDR_msgsvcsend

#include "librpc/ndr/libndr.h"
#define DCERPC_MSGSVCSEND_UUID "5a7b91f8-ff00-11d0-a9b2-00c04fb6e6fc"
#define DCERPC_MSGSVCSEND_VERSION 1.0
#define DCERPC_MSGSVCSEND_NAME "msgsvcsend"
#define DCERPC_MSGSVCSEND_HELPSTRING NULL
extern const struct dcerpc_interface_table dcerpc_table_msgsvcsend;
NTSTATUS dcerpc_server_msgsvcsend_init(void);
#define DCERPC_NETRSENDMESSAGE (0x00)

#define DCERPC_MSGSVCSEND_CALL_COUNT (1)
void ndr_print_NetrSendMessage(struct ndr_print *ndr, const char *name, int flags, const struct NetrSendMessage *r);
#endif /* _HEADER_NDR_msgsvcsend */
