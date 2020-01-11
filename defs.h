//
// Created by Burak Sezer on 5.01.2020.
//

#include <stddef.h>      /* size_t, ssize_t */

#ifndef KARL_DEFS_H
#define KARL_DEFS_H

typedef struct {
    const char *bind_host;
    unsigned short bind_port;
    unsigned int idle_timeout;
} server_config;

/* util.c */
#if defined(__GNUC__)
# define ATTRIBUTE_FORMAT_PRINTF(a, b) __attribute__((format(printf, a, b)))
#else
# define ATTRIBUTE_FORMAT_PRINTF(a, b)
#endif
void pr_info(const char *fmt, ...) ATTRIBUTE_FORMAT_PRINTF(1, 2);
void pr_warn(const char *fmt, ...) ATTRIBUTE_FORMAT_PRINTF(1, 2);
void pr_err(const char *fmt, ...) ATTRIBUTE_FORMAT_PRINTF(1, 2);
void *xmalloc(size_t size);

/* main.c */
const char *_getprogname(void);

#endif //KARL_DEFS_H
