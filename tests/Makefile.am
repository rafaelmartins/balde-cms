check_PROGRAMS = \
	check_markdown

TESTS = \
	$(check_PROGRAMS)

check_markdown_SOURCES = \
	check_markdown.c \
	../markdown.c

AM_CFLAGS = \
	$(all_includes) \
	$(GLIB_CFLAGS) \
	$(BALDE_CFLAGS)

AM_LDFLAGS = \
	$(GLIB_LIBS) \
	$(BALDE_LIBS)

if USE_VALGRIND
valgrind:
	$(MAKE) check TESTS_ENVIRONMENT=" \
		G_SLICE=always-malloc \
		G_DEBUG=gc-friendly \
		$(VALGRIND) \
			--tool=memcheck \
			--leak-check=full \
			--leak-resolution=high \
			--num-callers=20"
endif
