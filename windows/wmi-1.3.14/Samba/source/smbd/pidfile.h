#ifndef __SMBD_PIDFILE_H__
#define __SMBD_PIDFILE_H__

#undef _PRINTF_ATTRIBUTE
#define _PRINTF_ATTRIBUTE(a1, a2) PRINTF_ATTRIBUTE(a1, a2)
/* This file was automatically generated by mkproto.pl. DO NOT EDIT */

#ifndef _PUBLIC_
#define _PUBLIC_
#endif


/* The following definitions come from smbd/pidfile.c  */

pid_t pidfile_pid(const char *name);
void pidfile_create(const char *name);
#undef _PRINTF_ATTRIBUTE
#define _PRINTF_ATTRIBUTE(a1, a2)

#endif /* __SMBD_PIDFILE_H__ */

