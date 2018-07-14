#ifndef __GROOVER_H
#define __GROOVER_H

#include "../inc/MarlinConfig.h"

#define MILLING_CUTTER_PIN 44

enum {
    G_OFF,
    G_PAUSE,
    G_ON,
};

struct Groover {
    uint8_t status;
    float   mill_depth;
    bool    run_flag;
    bool    calibration_flag;
    bool    end_flag;
    bool    show_start_info_flag;
    bool    mill_off_flag;
    bool    go_forward_flag;
    bool    show_go_forward_flag;
    bool    show_go_forward_error_flag;
    bool    go_forward_reach_xmin_flag;
};

extern struct Groover groover;

void groover_init();
void groover_start();
void groover_pause();
void groover_continue();
void groover_off();
void groover_process();
void groover_go_forward();

#endif
