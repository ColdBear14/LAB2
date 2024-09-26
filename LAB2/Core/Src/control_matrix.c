/*
 * control_matrix.c
 *
 *  Created on: Sep 26, 2024
 *      Author: Hy
 */
#include "control_matrix.h"
#include "main.h"

int index_led_matrix = 0;
uint8_t matrix_buffer[8] = { 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08 };

void displayMatrix(int row, int col) {
	int shift = 1;
	if (row == 0) {
		HAL_GPIO_WritePin(PB8_GPIO_Port, PB8_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(PB9_GPIO_Port, PB9_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(PB10_GPIO_Port, PB10_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(PB11_GPIO_Port, PB11_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(PB12_GPIO_Port, PB12_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(PB13_GPIO_Port, PB13_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(PB14_GPIO_Port, PB14_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(PB15_GPIO_Port, PB15_Pin, GPIO_PIN_SET);

		HAL_GPIO_WritePin(PA10_GPIO_Port, PA10_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(PA11_GPIO_Port, PA11_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(PA12_GPIO_Port, PA12_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(PA13_GPIO_Port, PA13_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(PA14_GPIO_Port, PA14_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(PA15_GPIO_Port, PA15_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(PA2_GPIO_Port, PA2_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(PA3_GPIO_Port, PA3_Pin, 1 - (col & shift));
	}

	if (row == 1) {
		HAL_GPIO_WritePin(PB8_GPIO_Port, PB8_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(PB9_GPIO_Port, PB9_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(PB10_GPIO_Port, PB10_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(PB11_GPIO_Port, PB11_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(PB12_GPIO_Port, PB12_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(PB13_GPIO_Port, PB13_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(PB14_GPIO_Port, PB14_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(PB15_GPIO_Port, PB15_Pin, GPIO_PIN_SET);

		HAL_GPIO_WritePin(PA10_GPIO_Port, PA10_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(PA11_GPIO_Port, PA11_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(PA12_GPIO_Port, PA12_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(PA13_GPIO_Port, PA13_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(PA14_GPIO_Port, PA14_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(PA15_GPIO_Port, PA15_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(PA2_GPIO_Port, PA2_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(PA3_GPIO_Port, PA3_Pin, 1 - (col & shift));
	}

	if (row == 2) {
		HAL_GPIO_WritePin(PB8_GPIO_Port, PB8_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(PB9_GPIO_Port, PB9_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(PB10_GPIO_Port, PB10_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(PB11_GPIO_Port, PB11_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(PB12_GPIO_Port, PB12_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(PB13_GPIO_Port, PB13_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(PB14_GPIO_Port, PB14_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(PB15_GPIO_Port, PB15_Pin, GPIO_PIN_SET);

		HAL_GPIO_WritePin(PA10_GPIO_Port, PA10_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(PA11_GPIO_Port, PA11_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(PA12_GPIO_Port, PA12_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(PA13_GPIO_Port, PA13_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(PA14_GPIO_Port, PA14_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(PA15_GPIO_Port, PA15_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(PA2_GPIO_Port, PA2_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(PA3_GPIO_Port, PA3_Pin, 1 - (col & shift));
	}

	if (row == 3) {
		HAL_GPIO_WritePin(PB8_GPIO_Port, PB8_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(PB9_GPIO_Port, PB9_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(PB10_GPIO_Port, PB10_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(PB11_GPIO_Port, PB11_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(PB12_GPIO_Port, PB12_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(PB13_GPIO_Port, PB13_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(PB14_GPIO_Port, PB14_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(PB15_GPIO_Port, PB15_Pin, GPIO_PIN_SET);

		HAL_GPIO_WritePin(PA10_GPIO_Port, PA10_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(PA11_GPIO_Port, PA11_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(PA12_GPIO_Port, PA12_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(PA13_GPIO_Port, PA13_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(PA14_GPIO_Port, PA14_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(PA15_GPIO_Port, PA15_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(PA2_GPIO_Port, PA2_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(PA3_GPIO_Port, PA3_Pin, 1 - (col & shift));
	}

	if (row == 4) {
		HAL_GPIO_WritePin(PB8_GPIO_Port, PB8_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(PB9_GPIO_Port, PB9_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(PB10_GPIO_Port, PB10_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(PB11_GPIO_Port, PB11_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(PB12_GPIO_Port, PB12_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(PB13_GPIO_Port, PB13_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(PB14_GPIO_Port, PB14_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(PB15_GPIO_Port, PB15_Pin, GPIO_PIN_SET);

		HAL_GPIO_WritePin(PA10_GPIO_Port, PA10_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(PA11_GPIO_Port, PA11_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(PA12_GPIO_Port, PA12_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(PA13_GPIO_Port, PA13_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(PA14_GPIO_Port, PA14_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(PA15_GPIO_Port, PA15_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(PA2_GPIO_Port, PA2_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(PA3_GPIO_Port, PA3_Pin, 1 - (col & shift));
	}

	if (row == 5) {
		HAL_GPIO_WritePin(PB8_GPIO_Port, PB8_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(PB9_GPIO_Port, PB9_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(PB10_GPIO_Port, PB10_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(PB11_GPIO_Port, PB11_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(PB12_GPIO_Port, PB12_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(PB13_GPIO_Port, PB13_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(PB14_GPIO_Port, PB14_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(PB15_GPIO_Port, PB15_Pin, GPIO_PIN_SET);

		HAL_GPIO_WritePin(PA10_GPIO_Port, PA10_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(PA11_GPIO_Port, PA11_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(PA12_GPIO_Port, PA12_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(PA13_GPIO_Port, PA13_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(PA14_GPIO_Port, PA14_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(PA15_GPIO_Port, PA15_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(PA2_GPIO_Port, PA2_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(PA3_GPIO_Port, PA3_Pin, 1 - (col & shift));
	}

	if (row == 6) {
		HAL_GPIO_WritePin(PB8_GPIO_Port, PB8_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(PB9_GPIO_Port, PB9_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(PB10_GPIO_Port, PB10_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(PB11_GPIO_Port, PB11_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(PB12_GPIO_Port, PB12_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(PB13_GPIO_Port, PB13_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(PB14_GPIO_Port, PB14_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(PB15_GPIO_Port, PB15_Pin, GPIO_PIN_SET);

		HAL_GPIO_WritePin(PA10_GPIO_Port, PA10_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(PA11_GPIO_Port, PA11_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(PA12_GPIO_Port, PA12_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(PA13_GPIO_Port, PA13_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(PA14_GPIO_Port, PA14_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(PA15_GPIO_Port, PA15_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(PA2_GPIO_Port, PA2_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(PA3_GPIO_Port, PA3_Pin, 1 - (col & shift));
	}

	if (row == 7) {
		HAL_GPIO_WritePin(PB8_GPIO_Port, PB8_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(PB9_GPIO_Port, PB9_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(PB10_GPIO_Port, PB10_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(PB11_GPIO_Port, PB11_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(PB12_GPIO_Port, PB12_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(PB13_GPIO_Port, PB13_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(PB14_GPIO_Port, PB14_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(PB15_GPIO_Port, PB15_Pin, GPIO_PIN_RESET);

		HAL_GPIO_WritePin(PA10_GPIO_Port, PA10_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(PA11_GPIO_Port, PA11_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(PA12_GPIO_Port, PA12_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(PA13_GPIO_Port, PA13_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(PA14_GPIO_Port, PA14_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(PA15_GPIO_Port, PA15_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(PA2_GPIO_Port, PA2_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(PA3_GPIO_Port, PA3_Pin, 1 - (col & shift));
	}

}
void updateLEDMatrix(int index) {
	switch (index) {
	case 0:
		displayMatrix(0, matrix_buffer[0]);
		break;
	case 1:
		displayMatrix(1, matrix_buffer[1]);
		break;
	case 2:
		displayMatrix(2, matrix_buffer[2]);
		break;
	case 3:
		displayMatrix(3, matrix_buffer[3]);
		break;
	case 4:
		displayMatrix(4, matrix_buffer[4]);
		break;
	case 5:
		displayMatrix(5, matrix_buffer[5]);
		break;
	case 6:
		displayMatrix(6, matrix_buffer[6]);
		break;
	case 7:
		displayMatrix(7, matrix_buffer[7]);
		break;
	default:
		break;
	}
}

