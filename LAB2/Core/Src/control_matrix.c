/*
 * control_matrix.c
 *
 *  Created on: Sep 26, 2024
 *      Author: Hy
 */

#include "control_matrix.h"
#include "main.h"

int index_led_matrix = 0;
uint8_t matrix_buffer[8] = {    0b11000011,
		  	  	  	  	  	    0b10011001,
							  	0b00111100,
								0b00111100,
								0b00000000,
								0b00000000,
								0b00111100,
								0b00111100};

void displayMatrix(int row) {

    if (row == 0) {
    	HAL_GPIO_WritePin(GPIOB, PB8_Pin, RESET);
    }
    if (row == 1) {
    	HAL_GPIO_WritePin(GPIOB, PB9_Pin, RESET);
    }
    if (row == 2) {
    	HAL_GPIO_WritePin(GPIOB, PB10_Pin, RESET);
    }
    if (row == 3) {
    	HAL_GPIO_WritePin(GPIOB, PB11_Pin, RESET);
    }
    if (row == 4) {
    	HAL_GPIO_WritePin(GPIOB, PB12_Pin, RESET);
    }
    if (row == 5) {
    	HAL_GPIO_WritePin(GPIOB, PB13_Pin, RESET);
    }
    if (row == 6) {
    	HAL_GPIO_WritePin(GPIOB, PB14_Pin, RESET);
    }
    if (row == 7) {
    	HAL_GPIO_WritePin(GPIOB, PB15_Pin, RESET);
    }
}

void setCol(uint8_t value)
{
	  HAL_GPIO_WritePin(PA2_GPIO_Port, PA2_Pin, ((value>>7)&0x01));
	  HAL_GPIO_WritePin(PA3_GPIO_Port, PA3_Pin, ((value>>6)&0x01));
	  HAL_GPIO_WritePin(PA10_GPIO_Port, PA10_Pin, ((value>>5)&0x01));
	  HAL_GPIO_WritePin(PA11_GPIO_Port, PA11_Pin, ((value>>4)&0x01));
	  HAL_GPIO_WritePin(PA12_GPIO_Port, PA12_Pin, ((value>>3)&0x01));
	  HAL_GPIO_WritePin(PA13_GPIO_Port, PA13_Pin, ((value>>2)&0x01));
	  HAL_GPIO_WritePin(PA14_GPIO_Port, PA14_Pin, ((value>>1)&0x01));
	  HAL_GPIO_WritePin(PA15_GPIO_Port, PA15_Pin, ((value>>0)&0x01));
}
void setMatrix(){
	HAL_GPIO_WritePin(GPIOB, PB8_Pin, SET);
	HAL_GPIO_WritePin(GPIOB, PB9_Pin, SET);
	HAL_GPIO_WritePin(GPIOB, PB10_Pin, SET);
	HAL_GPIO_WritePin(GPIOB, PB11_Pin, SET);
	HAL_GPIO_WritePin(GPIOB, PB12_Pin, SET);
	HAL_GPIO_WritePin(GPIOB, PB13_Pin, SET);
	HAL_GPIO_WritePin(GPIOB, PB14_Pin, SET);
	HAL_GPIO_WritePin(GPIOB, PB15_Pin, SET);
}

void updateLEDMatrix(uint8_t index){
	setMatrix();
	switch(index){
	case 0:
		setCol(matrix_buffer[0]);
		displayMatrix(0);
		break;
	case 1:
		setCol(matrix_buffer[1]);
		displayMatrix(1);
		break;
	case 2:
		setCol(matrix_buffer[2]);
		displayMatrix(2);
		break;
	case 3:
		setCol(matrix_buffer[3]);
		displayMatrix(3);
		break;
	case 4:
		setCol(matrix_buffer[4]);
		displayMatrix(4);
		break;
	case 5:
		setCol(matrix_buffer[5]);
		displayMatrix(5);
		break;
	case 6:
		setCol(matrix_buffer[6]);
		displayMatrix(6);
		break;
	case 7:
		setCol(matrix_buffer[7]);
		displayMatrix(7);
		break;
	default:
		break;
	}
}
