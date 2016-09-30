/* Generated from /home/amax/info_collection/info_collection_Linux/windows/wmi-1.3.14/Samba/source/heimdal/lib/gssapi/krb5/gkrb5_err.et */
/* $Id: gkrb5_err.et,v 1.1 2006/11/09 23:52:17 lha Exp $ */

#include <stddef.h>
#include <com_err.h>
#include "gkrb5_err.h"

static const char *gk5_error_strings[] = {
	/* 000 */ "No @ in SERVICE-NAME name string",
	/* 001 */ "STRING-UID-NAME contains nondigits",
	/* 002 */ "UID does not resolve to username",
	/* 003 */ "Validation error",
	/* 004 */ "Couldn't allocate gss_buffer_t data",
	/* 005 */ "Message context invalid",
	/* 006 */ "Buffer is the wrong size",
	/* 007 */ "Credential usage type is unknown",
	/* 008 */ "Unknown quality of protection specified",
	/* 009 */ "Reserved gk5 error (9)",
	/* 010 */ "Reserved gk5 error (10)",
	/* 011 */ "Reserved gk5 error (11)",
	/* 012 */ "Reserved gk5 error (12)",
	/* 013 */ "Reserved gk5 error (13)",
	/* 014 */ "Reserved gk5 error (14)",
	/* 015 */ "Reserved gk5 error (15)",
	/* 016 */ "Reserved gk5 error (16)",
	/* 017 */ "Reserved gk5 error (17)",
	/* 018 */ "Reserved gk5 error (18)",
	/* 019 */ "Reserved gk5 error (19)",
	/* 020 */ "Reserved gk5 error (20)",
	/* 021 */ "Reserved gk5 error (21)",
	/* 022 */ "Reserved gk5 error (22)",
	/* 023 */ "Reserved gk5 error (23)",
	/* 024 */ "Reserved gk5 error (24)",
	/* 025 */ "Reserved gk5 error (25)",
	/* 026 */ "Reserved gk5 error (26)",
	/* 027 */ "Reserved gk5 error (27)",
	/* 028 */ "Reserved gk5 error (28)",
	/* 029 */ "Reserved gk5 error (29)",
	/* 030 */ "Reserved gk5 error (30)",
	/* 031 */ "Reserved gk5 error (31)",
	/* 032 */ "Reserved gk5 error (32)",
	/* 033 */ "Reserved gk5 error (33)",
	/* 034 */ "Reserved gk5 error (34)",
	/* 035 */ "Reserved gk5 error (35)",
	/* 036 */ "Reserved gk5 error (36)",
	/* 037 */ "Reserved gk5 error (37)",
	/* 038 */ "Reserved gk5 error (38)",
	/* 039 */ "Reserved gk5 error (39)",
	/* 040 */ "Reserved gk5 error (40)",
	/* 041 */ "Reserved gk5 error (41)",
	/* 042 */ "Reserved gk5 error (42)",
	/* 043 */ "Reserved gk5 error (43)",
	/* 044 */ "Reserved gk5 error (44)",
	/* 045 */ "Reserved gk5 error (45)",
	/* 046 */ "Reserved gk5 error (46)",
	/* 047 */ "Reserved gk5 error (47)",
	/* 048 */ "Reserved gk5 error (48)",
	/* 049 */ "Reserved gk5 error (49)",
	/* 050 */ "Reserved gk5 error (50)",
	/* 051 */ "Reserved gk5 error (51)",
	/* 052 */ "Reserved gk5 error (52)",
	/* 053 */ "Reserved gk5 error (53)",
	/* 054 */ "Reserved gk5 error (54)",
	/* 055 */ "Reserved gk5 error (55)",
	/* 056 */ "Reserved gk5 error (56)",
	/* 057 */ "Reserved gk5 error (57)",
	/* 058 */ "Reserved gk5 error (58)",
	/* 059 */ "Reserved gk5 error (59)",
	/* 060 */ "Reserved gk5 error (60)",
	/* 061 */ "Reserved gk5 error (61)",
	/* 062 */ "Reserved gk5 error (62)",
	/* 063 */ "Reserved gk5 error (63)",
	/* 064 */ "Reserved gk5 error (64)",
	/* 065 */ "Reserved gk5 error (65)",
	/* 066 */ "Reserved gk5 error (66)",
	/* 067 */ "Reserved gk5 error (67)",
	/* 068 */ "Reserved gk5 error (68)",
	/* 069 */ "Reserved gk5 error (69)",
	/* 070 */ "Reserved gk5 error (70)",
	/* 071 */ "Reserved gk5 error (71)",
	/* 072 */ "Reserved gk5 error (72)",
	/* 073 */ "Reserved gk5 error (73)",
	/* 074 */ "Reserved gk5 error (74)",
	/* 075 */ "Reserved gk5 error (75)",
	/* 076 */ "Reserved gk5 error (76)",
	/* 077 */ "Reserved gk5 error (77)",
	/* 078 */ "Reserved gk5 error (78)",
	/* 079 */ "Reserved gk5 error (79)",
	/* 080 */ "Reserved gk5 error (80)",
	/* 081 */ "Reserved gk5 error (81)",
	/* 082 */ "Reserved gk5 error (82)",
	/* 083 */ "Reserved gk5 error (83)",
	/* 084 */ "Reserved gk5 error (84)",
	/* 085 */ "Reserved gk5 error (85)",
	/* 086 */ "Reserved gk5 error (86)",
	/* 087 */ "Reserved gk5 error (87)",
	/* 088 */ "Reserved gk5 error (88)",
	/* 089 */ "Reserved gk5 error (89)",
	/* 090 */ "Reserved gk5 error (90)",
	/* 091 */ "Reserved gk5 error (91)",
	/* 092 */ "Reserved gk5 error (92)",
	/* 093 */ "Reserved gk5 error (93)",
	/* 094 */ "Reserved gk5 error (94)",
	/* 095 */ "Reserved gk5 error (95)",
	/* 096 */ "Reserved gk5 error (96)",
	/* 097 */ "Reserved gk5 error (97)",
	/* 098 */ "Reserved gk5 error (98)",
	/* 099 */ "Reserved gk5 error (99)",
	/* 100 */ "Reserved gk5 error (100)",
	/* 101 */ "Reserved gk5 error (101)",
	/* 102 */ "Reserved gk5 error (102)",
	/* 103 */ "Reserved gk5 error (103)",
	/* 104 */ "Reserved gk5 error (104)",
	/* 105 */ "Reserved gk5 error (105)",
	/* 106 */ "Reserved gk5 error (106)",
	/* 107 */ "Reserved gk5 error (107)",
	/* 108 */ "Reserved gk5 error (108)",
	/* 109 */ "Reserved gk5 error (109)",
	/* 110 */ "Reserved gk5 error (110)",
	/* 111 */ "Reserved gk5 error (111)",
	/* 112 */ "Reserved gk5 error (112)",
	/* 113 */ "Reserved gk5 error (113)",
	/* 114 */ "Reserved gk5 error (114)",
	/* 115 */ "Reserved gk5 error (115)",
	/* 116 */ "Reserved gk5 error (116)",
	/* 117 */ "Reserved gk5 error (117)",
	/* 118 */ "Reserved gk5 error (118)",
	/* 119 */ "Reserved gk5 error (119)",
	/* 120 */ "Reserved gk5 error (120)",
	/* 121 */ "Reserved gk5 error (121)",
	/* 122 */ "Reserved gk5 error (122)",
	/* 123 */ "Reserved gk5 error (123)",
	/* 124 */ "Reserved gk5 error (124)",
	/* 125 */ "Reserved gk5 error (125)",
	/* 126 */ "Reserved gk5 error (126)",
	/* 127 */ "Reserved gk5 error (127)",
	/* 128 */ "Principal in credential cache does not match desired name",
	/* 129 */ "No principal in keytab matches desired name",
	/* 130 */ "Credential cache has no TGT",
	/* 131 */ "Authenticator has no subkey",
	/* 132 */ "Context is already fully established",
	/* 133 */ "Unknown signature type in token",
	/* 134 */ "Invalid field length in token",
	/* 135 */ "Attempt to use incomplete security context",
	NULL
};

#define num_errors 136

void initialize_gk5_error_table_r(struct et_list **list)
{
    initialize_error_table_r(list, gk5_error_strings, num_errors, ERROR_TABLE_BASE_gk5);
}

void initialize_gk5_error_table(void)
{
    init_error_table(gk5_error_strings, ERROR_TABLE_BASE_gk5, num_errors);
}