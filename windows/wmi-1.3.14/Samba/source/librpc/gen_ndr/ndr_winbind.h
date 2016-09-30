/* header auto-generated by pidl */

#include "librpc/gen_ndr/winbind.h"

#ifndef _HEADER_NDR_winbind
#define _HEADER_NDR_winbind

#include "librpc/ndr/libndr.h"
#define DCERPC_WINBIND_UUID "245f3e6b-3c5d-6e21-3a2d-2a3d645b7221"
#define DCERPC_WINBIND_VERSION 1.0
#define DCERPC_WINBIND_NAME "winbind"
#define DCERPC_WINBIND_HELPSTRING NULL
extern const struct dcerpc_interface_table dcerpc_table_winbind;
NTSTATUS dcerpc_server_winbind_init(void);
#define DCERPC_WINBIND_INFORMATION (0x00)

#define DCERPC_WINBIND_REMOTE_CONTROL (0x01)

#define DCERPC_WINBIND_SAMLOGON (0x02)

#define DCERPC_WINBIND_CALL_COUNT (3)
void ndr_print_winbind_information(struct ndr_print *ndr, const char *name, int flags, const struct winbind_information *r);
void ndr_print_winbind_remote_control(struct ndr_print *ndr, const char *name, int flags, const struct winbind_remote_control *r);
void ndr_print_winbind_SamLogon(struct ndr_print *ndr, const char *name, int flags, const struct winbind_SamLogon *r);
#endif /* _HEADER_NDR_winbind */
