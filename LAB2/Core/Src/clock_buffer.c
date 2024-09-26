/*
 * clock_buffer.c
 *
 *  Created on: Sep 26, 2024
 *      Author: Hy
 */

#ifndef SRC_CLOCK_BUFFER_C_
#define SRC_CLOCK_BUFFER_C_


#include "global.h"
#include <clock_buffer.h>

int index_led = 0;
int led_buffer[4]= { 1 , 2 , 3 , 4 };


void updateClockBuffer() {
    if (hour < 10) {
        led_buffer[0] = 0;
        led_buffer[1] = hour;
    }
    if (hour >= 10) {
        led_buffer[0] = hour / 10;
        led_buffer[1] = hour % 10;
    }
    if (minute < 10) {
        led_buffer[2] = 0;
        led_buffer[3] = minute;
    }
    if (minute >= 10) {
        led_buffer[0] = minute / 10;
        led_buffer[1] = minute % 10;
    }
}

void clock() {
    second++;
    if (second >= 60) {
        second = 0;
        minute++;
    }
    if (minute >= 60) {
        minute = 0;
        hour++;
    }
    if (hour >= 24) {
        hour = 0;
    }
}

#endif /* SRC_CLOCK_BUFFER_C_ */
