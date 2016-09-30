/* header auto-generated by pidl */

#include "librpc/gen_ndr/sasl_helpers.h"

#ifndef _HEADER_NDR_sasl_helpers
#define _HEADER_NDR_sasl_helpers

#include "librpc/ndr/libndr.h"
#define DCERPC_DECODE_SASLAUTHD (0x00)

#define DCERPC_SASL_HELPERS_CALL_COUNT (1)
NTSTATUS ndr_push_saslauthdRequest(struct ndr_push *ndr, int ndr_flags, const struct saslauthdRequest *r);
NTSTATUS ndr_pull_saslauthdRequest(struct ndr_pull *ndr, int ndr_flags, struct saslauthdRequest *r);
void ndr_print_saslauthdRequest(struct ndr_print *ndr, const char *name, const struct saslauthdRequest *r);
void ndr_print_decode_saslauthd(struct ndr_print *ndr, const char *name, int flags, const struct decode_saslauthd *r);
#endif /* _HEADER_NDR_sasl_helpers */
