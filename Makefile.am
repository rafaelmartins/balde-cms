SUBDIRS = \
	tests

ACLOCAL_AMFLAGS = -I m4

EXTRA_DIST = \
	$(top_srcdir)/autogen.sh \
	$(top_srcdir)/.version \
	$(top_srcdir)/README.md

BUILT_SOURCES = \
	$(top_srcdir)/.version

$(top_srcdir)/.version:
	echo $(VERSION) > $@-t && mv $@-t $@

dist-hook:
	echo $(VERSION) > $(distdir)/.tarball-version

noinst_PROGRAMS = balde-cms

balde_cms_SOURCES = \
	main.c \
	markdown.c

balde_cms_CFLAGS = \
	$(AM_CFLAGS) \
	$(GLIB_CFLAGS) \
	$(BALDE_CFLAGS) \
	-I$(top_srcdir)/include

balde_cms_LDADD = \
	$(AM_LDADD) \
	$(GLIB_LIBS) \
	$(BALDE_LIBS)

if USE_VALGRIND
valgrind: all
	$(MAKE) -C tests valgrind
endif
