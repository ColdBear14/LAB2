/*
 * clock.c
 *
 *  Created on: Oct 3, 2024
 *      Author: Hy
 */

#include "global.h"
#include "clock.h"

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
