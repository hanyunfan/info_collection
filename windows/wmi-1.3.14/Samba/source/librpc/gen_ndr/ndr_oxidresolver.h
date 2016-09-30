/* header auto-generated by pidl */

#include "librpc/gen_ndr/oxidresolver.h"

#ifndef _HEADER_NDR_IOXIDResolver
#define _HEADER_NDR_IOXIDResolver

#include "librpc/ndr/libndr.h"
#define DCERPC_IOXIDRESOLVER_UUID "99fcfec4-5260-101b-bbcb-00aa0021347a"
#define DCERPC_IOXIDRESOLVER_VERSION 0.0
#define DCERPC_IOXIDRESOLVER_NAME "IOXIDResolver"
#define DCERPC_IOXIDRESOLVER_HELPSTRING "Object Exporter ID Resolver"
extern const struct dcerpc_interface_table dcerpc_table_IOXIDResolver;
NTSTATUS dcerpc_server_IOXIDResolver_init(void);
#define DCERPC_RESOLVEOXID (0x00)

#define DCERPC_SIMPLEPING (0x01)

#define DCERPC_COMPLEXPING (0x02)

#define DCERPC_SERVERALIVE (0x03)

#define DCERPC_RESOLVEOXID2 (0x04)

#define DCERPC_SERVERALIVE2 (0x05)

#define DCERPC_IOXIDRESOLVER_CALL_COUNT (6)
void ndr_print_COMINFO(struct ndr_print *ndr, const char *name, const struct COMINFO *r);
void ndr_print_ResolveOxid(struct ndr_print *ndr, const char *name, int flags, const struct ResolveOxid *r);
void ndr_print_SimplePing(struct ndr_print *ndr, const char *name, int flags, const struct SimplePing *r);
void ndr_print_ComplexPing(struct ndr_print *ndr, const char *name, int flags, const struct ComplexPing *r);
void ndr_print_ServerAlive(struct ndr_print *ndr, const char *name, int flags, const struct ServerAlive *r);
void ndr_print_ResolveOxid2(struct ndr_print *ndr, const char *name, int flags, const struct ResolveOxid2 *r);
void ndr_print_ServerAlive2(struct ndr_print *ndr, const char *name, int flags, const struct ServerAlive2 *r);
#endif /* _HEADER_NDR_IOXIDResolver */