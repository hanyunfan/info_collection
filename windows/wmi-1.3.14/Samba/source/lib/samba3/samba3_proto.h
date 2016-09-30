#ifndef __LIB_SAMBA3_SAMBA3_PROTO_H__
#define __LIB_SAMBA3_SAMBA3_PROTO_H__

#undef _PRINTF_ATTRIBUTE
#define _PRINTF_ATTRIBUTE(a1, a2) PRINTF_ATTRIBUTE(a1, a2)
/* This file was automatically generated by mkproto.pl. DO NOT EDIT */

#ifndef _PUBLIC_
#define _PUBLIC_
#endif


/* The following definitions come from lib/samba3/smbpasswd.c  */

struct samr_Password *smbpasswd_gethexpwd(TALLOC_CTX *mem_ctx, const char *p);
char *smbpasswd_sethexpwd(TALLOC_CTX *mem_ctx, struct samr_Password *pwd, uint16_t acb_info);
uint16_t smbpasswd_decode_acb_info(const char *p);
char *smbpasswd_encode_acb_info(TALLOC_CTX *mem_ctx, uint16_t acb_info);
NTSTATUS samba3_read_smbpasswd(const char *filename, TALLOC_CTX *ctx, struct samba3_samaccount **accounts, uint32_t *count);

/* The following definitions come from lib/samba3/tdbsam.c  */

NTSTATUS samba3_read_tdbsam(const char *filename, TALLOC_CTX *ctx, struct samba3_samaccount **accounts, uint32_t *count);

/* The following definitions come from lib/samba3/policy.c  */

NTSTATUS samba3_read_account_policy(const char *fn, TALLOC_CTX *ctx, struct samba3_policy *ret);

/* The following definitions come from lib/samba3/idmap.c  */

NTSTATUS samba3_read_idmap(const char *fn, TALLOC_CTX *ctx, struct samba3_idmapdb *idmap);

/* The following definitions come from lib/samba3/winsdb.c  */

NTSTATUS samba3_read_winsdb( const char *fn, TALLOC_CTX *ctx, struct samba3_winsdb_entry **entries, uint32_t *count );

/* The following definitions come from lib/samba3/samba3.c  */

struct samba3_domainsecrets *samba3_find_domainsecrets(struct samba3 *db, const char *name);
NTSTATUS samba3_read_passdb_backends(TALLOC_CTX *ctx, const char *libdir, struct samba3 *samba3);
NTSTATUS samba3_read(const char *libdir, const char *smbconf, TALLOC_CTX *ctx, struct samba3 **samba3);

/* The following definitions come from lib/samba3/group.c  */

NTSTATUS samba3_read_grouptdb(const char *file, TALLOC_CTX *ctx, struct samba3_groupdb *db);

/* The following definitions come from lib/samba3/registry.c  */

NTSTATUS samba3_read_regdb ( const char *fn, TALLOC_CTX *ctx, struct samba3_regdb *db );

/* The following definitions come from lib/samba3/secrets.c  */

NTSTATUS samba3_read_secrets(const char *fname, TALLOC_CTX *ctx, struct samba3_secrets *db);

/* The following definitions come from lib/samba3/share_info.c  */

NTSTATUS samba3_read_share_info(const char *fn, TALLOC_CTX *ctx, struct samba3 *db);
#undef _PRINTF_ATTRIBUTE
#define _PRINTF_ATTRIBUTE(a1, a2)

#endif /* __LIB_SAMBA3_SAMBA3_PROTO_H__ */

