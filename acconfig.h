/* -*- C -*- */
/* @configure_input@ */

#ifndef		config_h_included
#define		config_h_included

/*************************************************************************
 * This section is automatically generated by 'configure'.  Adjust these
 * if configure didn't make a correct guess for your system.
 *************************************************************************/

/* Define to `int' if <sys/types.h> doesn't define. */
#undef ino_t

/* Define to `mode_t' if <sys/types.h> doesn't define. */
#undef umode_t

/* Define if you have BSD sendfile() semantics */
#undef HAVE_BSD_SENDFILE

/* Define if you have the <glob.h> header file. */
#undef HAVE_GLOB_H

/* Define if your <glob.h> defines GLOB_PERIOD macro. */
#undef HAVE_GLOB_PERIOD

/* Define if you have HP/UX sendfile() semantics */
#undef HAVE_HPUX_SENDFILE

/* Define if you have Linux sendfile() semantics */
#undef HAVE_LINUX_SENDFILE

/* Define if your <syslog.h> defines the LOG_CRON macro */
#undef HAVE_LOG_CRON

/* Define if your <syslog.h> defines the LOG_FTP macro */
#undef HAVE_LOG_FTP

/* Define if you want support for PAM based authentication */
#undef HAVE_PAM

/* Define if your DIR structure has member dd_fd */
#undef HAVE_STRUCT_DIR_DD_FD

/* Define if your DIR structure has member __dd_fd */
#undef HAVE_STRUCT_DIR___DD_FD

/* Define if your system has __progname */
#undef HAVE___PROGNAME

/* Define if your system has _pw_stayopen variable (IRIX specific?) */
#undef HAVE__PW_STAYOPEN

/* Define if your system has the sendfile function */
#undef HAVE_SENDFILE

/* Define this if you have the setpassent function */
#undef HAVE_SETPASSENT

/* Define if your system has the setproctitle function */
#undef HAVE_SETPROCTITLE

/* Define if your DIR structure has member d_fd */
#undef HAVE_STRUCT_DIR_D_FD

/* Define if you have the <syslog.h> header file. */
#undef HAVE_SYSLOG_H

/* Define if you already have a typedef for timer_t */
#undef HAVE_TIMER_T

/* Define if your struct utmp has ut_host */
#undef HAVE_UT_UT_HOST

/* Define if your struct utmp uses ut_user and not ut_name */
#undef HAVE_UTMAXTYPE

#define PF_ARGV_NONE		0
#define PF_ARGV_NEW		1
#define PF_ARGV_WRITEABLE	2
#define PF_ARGV_PSTAT		3
#define PF_ARGV_PSSTRINGS	4

/* If you don't have setproctitle, PF_ARGV_TYPE needs to be set to either
 * PF_ARGV_NEW (replace argv[] arguments), PF_ARGV_WRITEABLE (overwrite
 * argv[]), PF_ARGV_PSTAT (use the pstat function), or PF_ARGV_PSSTRINGS
 * (use PS_STRINGS).
 * 
 * configure should, we hope <wink>, detect this for you.
 */
#undef PF_ARGV_TYPE
@TOP@

/* autoheader generated things inserted here. */

@BOTTOM@
#ifndef STDIN_FILENO
#define STDIN_FILENO 	0
#endif /* STDIN_FILENO */

#ifndef STDOUT_FILENO
#define STDOUT_FILENO 	1
#endif /* STDOUT_FILENO */

#ifndef STDERR_FILENO
#define STDERR_FILENO	2
#endif /* STDERR_FILENO */

#ifndef CONFIG_FILE_PATH
#undef CONFIG_FILE_PATH	
#endif /* CONFIG_FILE_PATH */

#ifndef PID_FILE_PATH
#undef PID_FILE_PATH		
#endif /* PID_FILE_PATH */

#ifndef RUN_DIR
#undef RUN_DIR			
#endif /* RUN_DIR */

#endif /* config_h_included */
