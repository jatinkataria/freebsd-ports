--- chrome/browser/ui/browser_dialogs.h.orig	2022-10-01 07:40:07 UTC
+++ chrome/browser/ui/browser_dialogs.h
@@ -25,7 +25,7 @@
 #include "ui/base/models/dialog_model.h"
 #include "ui/gfx/native_widget_types.h"
 
-#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || \
+#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_BSD) || \
     (BUILDFLAG(IS_LINUX) && !BUILDFLAG(IS_CHROMEOS_LACROS))
 #include "chrome/browser/web_applications/web_app_id.h"
 #endif
