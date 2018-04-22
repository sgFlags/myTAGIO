#ifndef _LINUX_TAGIO_H
#define _LINUX_TAGIO_H

#include <linux/types.h>

#define MAX_TAG_PRIO 12
#define MIN_TAG_PRIO 1

#define INVALID_TAG_PRIO 127

struct tag_io {
    uint8_t     tag_prio;
    pid_t       tag_pid;
};

#endif
