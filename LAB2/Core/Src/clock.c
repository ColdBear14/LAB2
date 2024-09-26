/*
 * clock.c
 *
 *  Created on: Sep 26, 2024
 *      Author: Hy
 */
#include "clock.h"
#include "global.h"

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
