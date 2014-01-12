AC_PREREQ(2.68)

AC_INIT([balde-cms], m4_esyscmd([build-aux/git-version-gen .tarball-version]),
    [https://github.com/rafaelmartins/balde-cms], [balde-cms],
    [https://github.com/rafaelmartins/balde-cms])
AC_CONFIG_AUX_DIR([build-aux])
AC_CONFIG_MACRO_DIR([m4])

AM_INIT_AUTOMAKE([foreign no-dist-gzip dist-xz subdir-objects])
AC_CONFIG_HEADERS([config.h])
m4_ifdef([AM_SILENT_RULES], [AM_SILENT_RULES([yes])])

AC_PROG_CC_C99
AS_IF([test "x$ac_cv_prog_cc_c99" = "xno"], [
  AC_MSG_ERROR([no C99 compiler found, balde-cms requires a C99 compiler.])
])

PKG_PROG_PKG_CONFIG
PKG_CHECK_MODULES([BALDE], [balde])

AC_CONFIG_FILES([
    Makefile
])
AC_OUTPUT

AS_ECHO("
        ==== ${PACKAGE_STRING} ====

        prefix:       ${prefix}
        exec_prefix:  ${exec_prefix}
        bindir:       ${bindir}

        compiler:     ${CC}
        cflags:       ${CFLAGS}
        ldflags:      ${LDFLAGS}
")
