#ifndef __TORTURE_NBT_PROTO_H__
#define __TORTURE_NBT_PROTO_H__

#undef _PRINTF_ATTRIBUTE
#define _PRINTF_ATTRIBUTE(a1, a2) PRINTF_ATTRIBUTE(a1, a2)
/* This file was automatically generated by mkproto.pl. DO NOT EDIT */

#ifndef _PUBLIC_
#define _PUBLIC_
#endif


/* The following definitions come from torture/nbt/query.c  */

struct torture_suite *torture_bench_nbt(void);

/* The following definitions come from torture/nbt/register.c  */

struct torture_suite *torture_nbt_register(void);

/* The following definitions come from torture/nbt/wins.c  */

struct torture_suite *torture_nbt_wins(void);

/* The following definitions come from torture/nbt/winsbench.c  */

struct nbt_name generate_name(TALLOC_CTX *tctx, int idx);
struct torture_suite *torture_bench_wins(void);

/* The following definitions come from torture/nbt/winsreplication.c  */

struct torture_suite *torture_nbt_winsreplication(void);

/* The following definitions come from torture/nbt/dgram.c  */

struct torture_suite *torture_nbt_dgram(void);

/* The following definitions come from torture/nbt/nbt.c  */

bool torture_nbt_get_name(struct torture_context *tctx, 
								 struct nbt_name *name, 
								 const char **address);
NTSTATUS torture_nbt_init(void);
#undef _PRINTF_ATTRIBUTE
#define _PRINTF_ATTRIBUTE(a1, a2)

#endif /* __TORTURE_NBT_PROTO_H__ */

