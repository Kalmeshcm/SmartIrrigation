#ifndef __UTILS_H
#define __UTILS_H

#include "lpc_types.h"
extern uint32_t msec;
extern volatile uint32_t u32Milliseconds;
int timer_delay_us( int cnt);
int timer_delay_ms( int cnt);
#endif
