/*
 * clock_buffer.h
 *
 *  Created on: Sep 26, 2024
 *      Author: Hy
 */

#ifndef INC_CLOCK_BUFFER_H_
#define INC_CLOCK_BUFFER_H_
#define MAX_LED 4

extern int index_led;
extern int led_buffer[4];

void updateClockBuffer();
void clock();

#endif /* INC_CLOCK_BUFFER_H_ */
