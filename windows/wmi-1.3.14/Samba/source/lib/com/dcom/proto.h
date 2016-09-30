#ifndef __LIB_COM_DCOM_PROTO_H__
#define __LIB_COM_DCOM_PROTO_H__

#undef _PRINTF_ATTRIBUTE
#define _PRINTF_ATTRIBUTE(a1, a2) PRINTF_ATTRIBUTE(a1, a2)
/* This file was automatically generated by mkproto.pl. DO NOT EDIT */

#ifndef _PUBLIC_
#define _PUBLIC_
#endif


/* The following definitions come from lib/com/dcom/main.c  */

struct cli_credentials *dcom_get_server_credentials(struct com_context *ctx,
        const char *server);
void dcom_set_server_credentials(struct com_context *ctx, const char *server,
        struct cli_credentials *credentials);
void dcom_update_credentials_for_aliases(struct com_context *ctx,
        const char *server, struct DUALSTRINGARRAY *pds);
struct dcom_client_context *dcom_client_init(struct com_context *ctx,
        struct cli_credentials *credentials);
struct composite_context *dcom_activate_send(TALLOC_CTX *parent_ctx,
        const struct GUID *clsid, const char *server, int num_ifaces,
        const struct GUID *iid, struct com_context *com_ctx);
NTSTATUS dcom_activate_recv(struct composite_context *c,
        TALLOC_CTX *parent_ctx, struct IUnknown ***interfaces);
NTSTATUS dcom_activate(struct com_context *com_ctx, TALLOC_CTX *parent_ctx,
        const char* server, struct GUID *clsid, struct GUID *iid,
        int num_ifaces, struct IUnknown ***interfaces);
struct dcom_object_exporter *object_exporter_by_oxid(struct com_context *ctx,
        uint64_t oxid);
struct dcom_object_exporter *object_exporter_update_oxid(
        struct com_context *ctx, uint64_t oxid,
        struct DUALSTRINGARRAY *bindings);
struct dcom_object_exporter *object_exporter_by_ip(struct com_context *ctx,
        struct IUnknown *ip);
NTSTATUS dcom_query_interface_recv(struct composite_context *c,
        TALLOC_CTX *parent_ctx, struct IUnknown ***interfaces);
struct composite_context *dcom_query_interface_send(struct IUnknown *d,
        TALLOC_CTX *parent_ctx, uint32_t cRefs, uint16_t cIids,
        struct GUID *iids);
NTSTATUS dcom_query_interface(struct IUnknown *d, TALLOC_CTX *parent_ctx,
        uint32_t cRefs, uint16_t cIids, struct GUID *iids,
        struct IUnknown ***interfaces);
NTSTATUS dcom_OBJREF_from_IUnknown(struct OBJREF *o, struct IUnknown *p);
NTSTATUS dcom_IUnknown_from_OBJREF(struct com_context *ctx,
        struct IUnknown **_p, struct OBJREF *o);
uint64_t dcom_get_current_oxid(void);
struct composite_context *dcom_get_pipe_send(struct IUnknown *d,
        TALLOC_CTX *parent_ctx);
NTSTATUS dcom_get_pipe_recv(struct composite_context *c,
        TALLOC_CTX *parent_ctx, struct dcerpc_pipe **pp);
void dcom_release_continue(struct composite_context *cr);
struct composite_context *dcom_release_send(struct IUnknown *d,
        TALLOC_CTX *mem_ctx);
uint32_t dcom_release_recv(struct composite_context *c);
uint32_t dcom_release(void *interface, TALLOC_CTX *mem_ctx);
void dcom_proxy_async_call_recv_pipe_send_rpc(struct composite_context *c_pipe);

/* The following definitions come from lib/com/dcom/tables.c  */

NTSTATUS dcom_register_proxy(struct IUnknown_vtable *proxy_vtable);
struct IUnknown_vtable *dcom_proxy_vtable_by_iid(struct GUID *iid);
NTSTATUS dcom_register_marshal(struct GUID *clsid, marshal_fn marshal, unmarshal_fn unmarshal);
_PUBLIC_ marshal_fn dcom_marshal_by_clsid(struct GUID *clsid);
_PUBLIC_ unmarshal_fn dcom_unmarshal_by_clsid(struct GUID *clsid);
#undef _PRINTF_ATTRIBUTE
#define _PRINTF_ATTRIBUTE(a1, a2)

#endif /* __LIB_COM_DCOM_PROTO_H__ */

