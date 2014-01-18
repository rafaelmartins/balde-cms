/*
 * balde-cms: A simple CMS built with balde microframework.
 * Copyright (C) 2014 Rafael G. Martins <rafael@rafaelmartins.eng.br>
 *
 * This program can be distributed under the terms of the LGPL-2 License.
 * See the file COPYING.
 */

#ifndef _BALDE_MARKDOWN
#define _BALDE_MARKDOWN

#include <glib.h>
#include <balde.h>

gchar* parse_markdown(balde_app_t *app, const gchar *mkd_source);

#endif
