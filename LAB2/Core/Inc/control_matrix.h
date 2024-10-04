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
extern uint8_t matrix_buffer_shift[8];

void displayMatrix(int row);
void updateLEDMatrix(int index);
void shiftLeft(int shift);
void setCol(uint8_t value);
void setMatrix();

#endif /* INC_CONTROL_MATRIX_H_ */
