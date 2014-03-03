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
