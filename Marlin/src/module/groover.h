#ifndef __GROOVER_H
#define __GROOVER_H

#include "../inc/MarlinConfig.h"

enum {
    G_OFF,
    G_PAUSE,
    G_ON,
};

struct Groover {
    uint8_t status;
};

extern struct Groover groover;

void groover_init();
void groover_start();
void groover_pause();
void groover_continue();
void groover_off();
void groover_process();

#endif
