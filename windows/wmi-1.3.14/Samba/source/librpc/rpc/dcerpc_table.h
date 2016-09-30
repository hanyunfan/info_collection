#ifndef __LIBRPC_RPC_DCERPC_TABLE_H__
#define __LIBRPC_RPC_DCERPC_TABLE_H__

#undef _PRINTF_ATTRIBUTE
#define _PRINTF_ATTRIBUTE(a1, a2) PRINTF_ATTRIBUTE(a1, a2)
/* This file was automatically generated by mkproto.pl. DO NOT EDIT */

#ifndef _PUBLIC_
#define _PUBLIC_
#endif


/* The following definitions come from librpc/rpc/table.c  */

NTSTATUS librpc_register_interface(const struct dcerpc_interface_table *interface);
const char *idl_pipe_name(const struct GUID *uuid, uint32_t if_version);
int idl_num_calls(const struct GUID *uuid, uint32_t if_version);
const struct dcerpc_interface_table *idl_iface_by_name(const char *name);
const struct dcerpc_interface_table *idl_iface_by_uuid(const struct GUID *uuid);
const struct dcerpc_interface_list *librpc_dcerpc_pipes(void);
NTSTATUS dcerpc_table_init(void);

/* The following definitions come from librpc/gen_ndr/tables.c  */

NTSTATUS dcerpc_register_builtin_interfaces(void);
#undef _PRINTF_ATTRIBUTE
#define _PRINTF_ATTRIBUTE(a1, a2)

#endif /* __LIBRPC_RPC_DCERPC_TABLE_H__ */

