/*
 * control_7SEG.c
 *
 *  Created on: Sep 26, 2024
 *      Author: Hy
 */

#include <control_7SEG.h>
#include "main.h"
#include <clock_buffer.h>

void display7SEG(int num) {
	if (num == 0) {
		HAL_GPIO_WritePin(PB0_GPIO_Port, PB0_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(PB1_GPIO_Port, PB1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(PB2_GPIO_Port, PB2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(PB3_GPIO_Port, PB3_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(PB4_GPIO_Port, PB4_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(PB5_GPIO_Port, PB5_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(PB6_GPIO_Port, PB6_Pin, GPIO_PIN_SET);
	}
	if (num == 1) {
		HAL_GPIO_WritePin(PB0_GPIO_Port, PB0_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(PB1_GPIO_Port, PB1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(PB2_GPIO_Port, PB2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(PB3_GPIO_Port, PB3_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(PB4_GPIO_Port, PB4_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(PB5_GPIO_Port, PB5_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(PB6_GPIO_Port, PB6_Pin, GPIO_PIN_SET);
	}
	if (num == 2) {
		HAL_GPIO_WritePin(PB0_GPIO_Port, PB0_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(PB1_GPIO_Port, PB1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(PB2_GPIO_Port, PB2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(PB3_GPIO_Port, PB3_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(PB4_GPIO_Port, PB4_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(PB5_GPIO_Port, PB5_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(PB6_GPIO_Port, PB6_Pin, GPIO_PIN_RESET);

	}
	if (num == 3) {
		HAL_GPIO_WritePin(PB0_GPIO_Port, PB0_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(PB1_GPIO_Port, PB1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(PB2_GPIO_Port, PB2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(PB3_GPIO_Port, PB3_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(PB4_GPIO_Port, PB4_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(PB5_GPIO_Port, PB5_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(PB6_GPIO_Port, PB6_Pin, GPIO_PIN_RESET);
	}
	if (num == 4) {
		HAL_GPIO_WritePin(PB0_GPIO_Port, PB0_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(PB1_GPIO_Port, PB1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(PB2_GPIO_Port, PB2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(PB3_GPIO_Port, PB3_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(PB4_GPIO_Port, PB4_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(PB5_GPIO_Port, PB5_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(PB6_GPIO_Port, PB6_Pin, GPIO_PIN_RESET);
	}
	if (num == 5) {
		HAL_GPIO_WritePin(PB0_GPIO_Port, PB0_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(PB1_GPIO_Port, PB1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(PB2_GPIO_Port, PB2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(PB3_GPIO_Port, PB3_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(PB4_GPIO_Port, PB4_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(PB5_GPIO_Port, PB5_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(PB6_GPIO_Port, PB6_Pin, GPIO_PIN_RESET);
	}
	if (num == 6) {
		HAL_GPIO_WritePin(PB0_GPIO_Port, PB0_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(PB1_GPIO_Port, PB1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(PB2_GPIO_Port, PB2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(PB3_GPIO_Port, PB3_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(PB4_GPIO_Port, PB4_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(PB5_GPIO_Port, PB5_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(PB6_GPIO_Port, PB6_Pin, GPIO_PIN_RESET);

	}
	if (num == 7) {
		HAL_GPIO_WritePin(PB0_GPIO_Port, PB0_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(PB1_GPIO_Port, PB1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(PB2_GPIO_Port, PB2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(PB3_GPIO_Port, PB3_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(PB4_GPIO_Port, PB4_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(PB5_GPIO_Port, PB5_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(PB6_GPIO_Port, PB6_Pin, GPIO_PIN_SET);
	}
	if (num == 8) {
		HAL_GPIO_WritePin(PB0_GPIO_Port, PB0_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(PB1_GPIO_Port, PB1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(PB2_GPIO_Port, PB2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(PB3_GPIO_Port, PB3_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(PB4_GPIO_Port, PB4_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(PB5_GPIO_Port, PB5_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(PB6_GPIO_Port, PB6_Pin, GPIO_PIN_RESET);
	}
	if (num == 9) {
		HAL_GPIO_WritePin(PB0_GPIO_Port, PB0_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(PB1_GPIO_Port, PB1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(PB2_GPIO_Port, PB2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(PB3_GPIO_Port, PB3_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(PB4_GPIO_Port, PB4_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(PB5_GPIO_Port, PB5_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(PB6_GPIO_Port, PB6_Pin, GPIO_PIN_RESET);
	}
}

void update7SEG(int index) {
	switch (index) {
	case 0:
		// Display the first 7 SEG with led_buffer [0]
		HAL_GPIO_WritePin(PA6_GPIO_Port, PA6_Pin, RESET);
		HAL_GPIO_WritePin(PA7_GPIO_Port, PA7_Pin, SET);
		HAL_GPIO_WritePin(PA8_GPIO_Port, PA8_Pin, SET);
		HAL_GPIO_WritePin(PA9_GPIO_Port, PA9_Pin, SET);
		display7SEG(led_buffer[0]);
		break;
	case 1:
		// Display the second 7 SEG with led_buffer [1]
		HAL_GPIO_WritePin(PA7_GPIO_Port, PA7_Pin, RESET);
		HAL_GPIO_WritePin(PA6_GPIO_Port, PA6_Pin, SET);
		HAL_GPIO_WritePin(PA8_GPIO_Port, PA8_Pin, SET);
		HAL_GPIO_WritePin(PA9_GPIO_Port, PA9_Pin, SET);
		display7SEG(led_buffer[1]);
		break;
	case 2:
		// Display the third 7 SEG with led_buffer [2]
		HAL_GPIO_WritePin(PA8_GPIO_Port, PA8_Pin, RESET);
		HAL_GPIO_WritePin(PA6_GPIO_Port, PA6_Pin, SET);
		HAL_GPIO_WritePin(PA7_GPIO_Port, PA7_Pin, SET);
		HAL_GPIO_WritePin(PA9_GPIO_Port, PA9_Pin, SET);
		display7SEG(led_buffer[2]);
		break;
	case 3:
		// Display the forth 7 SEG with led_buffer [3]
		HAL_GPIO_WritePin(PA9_GPIO_Port, PA9_Pin, RESET);
		HAL_GPIO_WritePin(PA6_GPIO_Port, PA6_Pin, SET);
		HAL_GPIO_WritePin(PA7_GPIO_Port, PA7_Pin, SET);
		HAL_GPIO_WritePin(PA8_GPIO_Port, PA8_Pin, SET);
		display7SEG(led_buffer[3]);
		break;
	default:
		break;
	}
}
