/*
 * balde-cms: A simple CMS built with balde microframework.
 * Copyright (C) 2014 Rafael G. Martins <rafael@rafaelmartins.eng.br>
 *
 * This program can be distributed under the terms of the LGPL-2 License.
 * See the file COPYING.
 */

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif /* HAVE_CONFIG_H */

#include <balde.h>
#include <glib.h>
#include "markdown.h"


balde_response_t*
hello(balde_app_t *app, balde_request_t *request)
{
    gchar* mkd = parse_markdown(app, "### Hello World! ###\n");
    balde_response_t *resp = balde_make_response(mkd);
    g_free(mkd);
    return resp;
}


int
main(int argc, char **argv)
{
    balde_app_t *app = balde_app_init();
    balde_app_add_url_rule(app, "hello", "/", BALDE_HTTP_GET, hello);
    balde_app_run(app);
    balde_app_free(app);
}
