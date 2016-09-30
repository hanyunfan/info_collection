#ifndef __WEB_SERVER_PROTO_H__
#define __WEB_SERVER_PROTO_H__

#undef _PRINTF_ATTRIBUTE
#define _PRINTF_ATTRIBUTE(a1, a2) PRINTF_ATTRIBUTE(a1, a2)
/* This file was automatically generated by mkproto.pl. DO NOT EDIT */

#ifndef _PUBLIC_
#define _PUBLIC_
#endif


/* The following definitions come from web_server/web_server.c  */

NTSTATUS server_service_web_init(void);

/* The following definitions come from web_server/http.c  */

void http_error(struct websrv_context *web, int code, const char *info);
void http_error_unix(struct websrv_context *web, const char *info);
void http_process_input(struct websrv_context *web);
NTSTATUS http_parse_header(struct websrv_context *web, const char *line);
NTSTATUS http_setup_esp(struct task_server *task);
#undef _PRINTF_ATTRIBUTE
#define _PRINTF_ATTRIBUTE(a1, a2)

#endif /* __WEB_SERVER_PROTO_H__ */

