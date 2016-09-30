#ifndef __NTPTR_NTPTR_PROTO_H__
#define __NTPTR_NTPTR_PROTO_H__

#undef _PRINTF_ATTRIBUTE
#define _PRINTF_ATTRIBUTE(a1, a2) PRINTF_ATTRIBUTE(a1, a2)
/* This file was automatically generated by mkproto.pl. DO NOT EDIT */

#ifndef _PUBLIC_
#define _PUBLIC_
#endif


/* The following definitions come from ntptr/ntptr_base.c  */

NTSTATUS ntptr_register(const void *_ops);
NTSTATUS ntptr_init(void);
const struct ntptr_ops *ntptr_backend_byname(const char *name);
const struct ntptr_critical_sizes *ntptr_interface_version(void);
NTSTATUS ntptr_init_context(TALLOC_CTX *mem_ctx, const char *providor, struct ntptr_context **_ntptr);

/* The following definitions come from ntptr/ntptr_interface.c  */

WERROR ntptr_OpenPrintServer(struct ntptr_context *ntptr, TALLOC_CTX *mem_ctx,
			     struct spoolss_OpenPrinterEx *r,
			     const char *printer_name,
			     struct ntptr_GenericHandle **server);
WERROR ntptr_XcvDataPrintServer(struct ntptr_GenericHandle *server, TALLOC_CTX *mem_ctx,
				struct spoolss_XcvData *r);
WERROR ntptr_EnumPrintServerData(struct ntptr_GenericHandle *server, TALLOC_CTX *mem_ctx,
				 struct spoolss_EnumPrinterData *r);
WERROR ntptr_GetPrintServerData(struct ntptr_GenericHandle *server, TALLOC_CTX *mem_ctx,
				struct spoolss_GetPrinterData *r);
WERROR ntptr_SetPrintServerData(struct ntptr_GenericHandle *server, TALLOC_CTX *mem_ctx,
				struct spoolss_SetPrinterData *r);
WERROR ntptr_DeletePrintServerData(struct ntptr_GenericHandle *server, TALLOC_CTX *mem_ctx,
				   struct spoolss_DeletePrinterData *r);
WERROR ntptr_EnumPrintServerForms(struct ntptr_GenericHandle *server, TALLOC_CTX *mem_ctx,
				  struct spoolss_EnumForms *r);
WERROR ntptr_AddPrintServerForm(struct ntptr_GenericHandle *server, TALLOC_CTX *mem_ctx,
				struct spoolss_AddForm *r);
WERROR ntptr_SetPrintServerForm(struct ntptr_GenericHandle *server, TALLOC_CTX *mem_ctx,
				struct spoolss_SetForm *r);
WERROR ntptr_DeletePrintServerForm(struct ntptr_GenericHandle *server, TALLOC_CTX *mem_ctx,
				   struct spoolss_DeleteForm *r);
WERROR ntptr_EnumPrinterDrivers(struct ntptr_context *ntptr, TALLOC_CTX *mem_ctx,
				struct spoolss_EnumPrinterDrivers *r);
WERROR ntptr_AddPrinterDriver(struct ntptr_context *ntptr, TALLOC_CTX *mem_ctx,
			      struct spoolss_AddPrinterDriver *r);
WERROR ntptr_DeletePrinterDriver(struct ntptr_context *ntptr, TALLOC_CTX *mem_ctx,
				 struct spoolss_DeletePrinterDriver *r);
WERROR ntptr_GetPrinterDriverDirectory(struct ntptr_context *ntptr, TALLOC_CTX *mem_ctx,
				 struct spoolss_GetPrinterDriverDirectory *r);
WERROR ntptr_EnumPorts(struct ntptr_context *ntptr, TALLOC_CTX *mem_ctx,
		       struct spoolss_EnumPorts *r);
WERROR ntptr_OpenPort(struct ntptr_context *ntptr, TALLOC_CTX *mem_ctx,
		      struct spoolss_OpenPrinterEx *r,
		      const char *port_name,
		      struct ntptr_GenericHandle **port);
WERROR ntptr_XcvDataPort(struct ntptr_GenericHandle *port, TALLOC_CTX *mem_ctx,
			 struct spoolss_XcvData *r);
WERROR ntptr_EnumMonitors(struct ntptr_context *ntptr, TALLOC_CTX *mem_ctx,
			  struct spoolss_EnumMonitors *r);
WERROR ntptr_OpenMonitor(struct ntptr_context *ntptr, TALLOC_CTX *mem_ctx,
			 struct spoolss_OpenPrinterEx *r,
			 const char *monitor_name,
			 struct ntptr_GenericHandle **monitor);
WERROR ntptr_XcvDataMonitor(struct ntptr_GenericHandle *monitor, TALLOC_CTX *mem_ctx,
			    struct spoolss_XcvData *r);
WERROR ntptr_EnumPrintProcessors(struct ntptr_context *ntptr, TALLOC_CTX *mem_ctx,
				 struct spoolss_EnumPrintProcessors *r);
WERROR ntptr_EnumPrinters(struct ntptr_context *ntptr, TALLOC_CTX *mem_ctx,
			  struct spoolss_EnumPrinters *r);
WERROR ntptr_OpenPrinter(struct ntptr_context *ntptr, TALLOC_CTX *mem_ctx,
			 struct spoolss_OpenPrinterEx *r,
			 const char *printer_name,
			 struct ntptr_GenericHandle **printer);
WERROR ntptr_AddPrinter(struct ntptr_context *ntptr, TALLOC_CTX *mem_ctx,
			struct spoolss_AddPrinter *r,
			struct ntptr_GenericHandle **printer);
WERROR ntptr_GetPrinter(struct ntptr_context *ntptr, TALLOC_CTX *mem_ctx,
			struct spoolss_GetPrinter *r);
WERROR ntptr_SetPrinter(struct ntptr_context *ntptr, TALLOC_CTX *mem_ctx,
			struct spoolss_SetPrinter *r);
WERROR ntptr_DeletePrinter(struct ntptr_context *ntptr, TALLOC_CTX *mem_ctx,
			   struct spoolss_DeletePrinter *r);
WERROR ntptr_XcvDataPrinter(struct ntptr_GenericHandle *printer, TALLOC_CTX *mem_ctx,
			    struct spoolss_XcvData *r);
WERROR ntptr_GetPrinterDriver(struct ntptr_context *ntptr, TALLOC_CTX *mem_ctx,
			      struct spoolss_GetPrinterDriver *r);
WERROR ntptr_EnumPrinterData(struct ntptr_GenericHandle *printer, TALLOC_CTX *mem_ctx,
			     struct spoolss_EnumPrinterData *r);
WERROR ntptr_GetPrinterData(struct ntptr_GenericHandle *printer, TALLOC_CTX *mem_ctx,
			    struct spoolss_GetPrinterData *r);
WERROR ntptr_SetPrinterData(struct ntptr_GenericHandle *printer, TALLOC_CTX *mem_ctx,
			    struct spoolss_SetPrinterData *r);
WERROR ntptr_DeletePrinterData(struct ntptr_GenericHandle *printer, TALLOC_CTX *mem_ctx,
			       struct spoolss_DeletePrinterData *r);
WERROR ntptr_EnumPrinterForms(struct ntptr_GenericHandle *printer, TALLOC_CTX *mem_ctx,
			      struct spoolss_EnumForms *r);
WERROR ntptr_AddPrinterForm(struct ntptr_GenericHandle *printer, TALLOC_CTX *mem_ctx,
			    struct spoolss_AddForm *r);
WERROR ntptr_GetPrinterForm(struct ntptr_GenericHandle *printer, TALLOC_CTX *mem_ctx,
			    struct spoolss_GetForm *r);
WERROR ntptr_SetPrinterForm(struct ntptr_GenericHandle *printer, TALLOC_CTX *mem_ctx,
			    struct spoolss_SetForm *r);
WERROR ntptr_DeletePrinterForm(struct ntptr_GenericHandle *printer, TALLOC_CTX *mem_ctx,
			       struct spoolss_DeleteForm *r);
WERROR ntptr_EnumJobs(struct ntptr_GenericHandle *printer, TALLOC_CTX *mem_ctx,
		      struct spoolss_EnumJobs *r);
WERROR ntptr_AddJob(struct ntptr_GenericHandle *printer, TALLOC_CTX *mem_ctx,
		    struct spoolss_AddJob *r);
WERROR ntptr_ScheduleJob(struct ntptr_GenericHandle *printer, TALLOC_CTX *mem_ctx,
			 struct spoolss_ScheduleJob *r);
WERROR ntptr_GetJob(struct ntptr_GenericHandle *printer, TALLOC_CTX *mem_ctx,
		    struct spoolss_GetJob *r);
WERROR ntptr_SetJob(struct ntptr_GenericHandle *printer, TALLOC_CTX *mem_ctx,
		    struct spoolss_SetJob *r);
WERROR ntptr_StartDocPrinter(struct ntptr_GenericHandle *printer, TALLOC_CTX *mem_ctx,
			     struct spoolss_StartDocPrinter *r);
WERROR ntptr_EndDocPrinter(struct ntptr_GenericHandle *printer, TALLOC_CTX *mem_ctx,
			   struct spoolss_EndDocPrinter *r);
WERROR ntptr_StartPagePrinter(struct ntptr_GenericHandle *printer, TALLOC_CTX *mem_ctx,
			      struct spoolss_StartPagePrinter *r);
WERROR ntptr_EndPagePrinter(struct ntptr_GenericHandle *printer, TALLOC_CTX *mem_ctx,
			    struct spoolss_EndPagePrinter *r);
WERROR ntptr_WritePrinter(struct ntptr_GenericHandle *printer, TALLOC_CTX *mem_ctx,
			  struct spoolss_WritePrinter *r);
WERROR ntptr_ReadPrinter(struct ntptr_GenericHandle *printer, TALLOC_CTX *mem_ctx,
			 struct spoolss_ReadPrinter *r);
#undef _PRINTF_ATTRIBUTE
#define _PRINTF_ATTRIBUTE(a1, a2)

#endif /* __NTPTR_NTPTR_PROTO_H__ */

