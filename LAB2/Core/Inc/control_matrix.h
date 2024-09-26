/*
 * control_matrix.h
 *
 *  Created on: Sep 26, 2024
 *      Author: Hy
 */

#ifndef INC_CONTROL_MATRIX_H_
#define INC_CONTROL_MATRIX_H_

#define MAX_LED_MATRIX  8
#include "main.h"

extern int index_led_matrix;
extern uint8_t matrix_buffer [8];

void updateLEDMatrix(int index);
void displayMatrix(int row, int col);

#endif /* INC_CONTROL_MATRIX_H_ */
