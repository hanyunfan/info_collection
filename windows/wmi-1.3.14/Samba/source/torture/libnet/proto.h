#ifndef __TORTURE_LIBNET_PROTO_H__
#define __TORTURE_LIBNET_PROTO_H__

#undef _PRINTF_ATTRIBUTE
#define _PRINTF_ATTRIBUTE(a1, a2) PRINTF_ATTRIBUTE(a1, a2)
/* This file was automatically generated by mkproto.pl. DO NOT EDIT */

#ifndef _PUBLIC_
#define _PUBLIC_
#endif


/* The following definitions come from torture/libnet/libnet.c  */

NTSTATUS torture_net_init(void);

/* The following definitions come from torture/libnet/userinfo.c  */

BOOL torture_userinfo(struct torture_context *torture);

/* The following definitions come from torture/libnet/userman.c  */

BOOL torture_useradd(struct torture_context *torture);
BOOL torture_userdel(struct torture_context *torture);
BOOL torture_usermod(struct torture_context *torture);

/* The following definitions come from torture/libnet/domain.c  */

BOOL torture_domainopen(struct torture_context *torture);

/* The following definitions come from torture/libnet/libnet_lookup.c  */

BOOL torture_lookup(struct torture_context *torture);
BOOL torture_lookup_host(struct torture_context *torture);
BOOL torture_lookup_pdc(struct torture_context *torture);
BOOL torture_lookup_sam_name(struct torture_context *torture);

/* The following definitions come from torture/libnet/libnet_user.c  */

BOOL torture_createuser(struct torture_context *torture);
BOOL torture_deleteuser(struct torture_context *torture);
BOOL torture_modifyuser(struct torture_context *torture);
BOOL torture_userinfo_api(struct torture_context *torture);
BOOL torture_userlist(struct torture_context *torture);

/* The following definitions come from torture/libnet/libnet_share.c  */

BOOL torture_listshares(struct torture_context *torture);
BOOL torture_delshare(struct torture_context *torture);

/* The following definitions come from torture/libnet/libnet_rpc.c  */

BOOL torture_rpc_connect_srv(struct torture_context *torture);
BOOL torture_rpc_connect_pdc(struct torture_context *torture);
BOOL torture_rpc_connect_dc(struct torture_context *torture);
BOOL torture_rpc_connect_dc_info(struct torture_context *torture);
BOOL torture_rpc_connect_binding(struct torture_context *torture);

/* The following definitions come from torture/libnet/libnet_domain.c  */

BOOL torture_domain_open_lsa(struct torture_context *torture);
BOOL torture_domain_close_lsa(struct torture_context *torture);
BOOL torture_domain_open_samr(struct torture_context *torture);
BOOL torture_domain_close_samr(struct torture_context *torture);
#undef _PRINTF_ATTRIBUTE
#define _PRINTF_ATTRIBUTE(a1, a2)

#endif /* __TORTURE_LIBNET_PROTO_H__ */

