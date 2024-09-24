/*
 * software_timer.c
 *
 *  Created on: Sep 22, 2024
 *      Author: Hy
 */
#include "software_timer.h"
#define TICK 10

int timer1_flag,timer2_flag,timer3_flag,timer4_flag,timer5_flag;
int timer1_counter,timer2_counter,timer3_counter,timer4_counter,timer5_counter;


void setTimer1(int counter){
	timer1_flag=0;
	timer1_counter=counter;
}
void setTimer2(int counter){
	timer2_flag=0;
	timer2_counter=counter;
}
void setTimer3(int counter){
	timer3_flag=0;
	timer3_counter=counter;
}
void setTimer4(int counter){
	timer4_flag=0;
	timer4_counter=counter;
}
void setTimer5(int counter){
	timer5_flag=0;
	timer5_counter=counter;
}
void timerRun(){
	if(timer1_counter > 0){
	timer1_counter--;
	if(timer1_counter <= 0){
		timer1_flag=1;
			}
		}

	if(timer2_counter > 0){
	timer2_counter--;
	if(timer2_counter <= 0){
		timer2_flag=1;
			}
		}

	if(timer3_counter > 0){
	timer3_counter--;
	if(timer3_counter <= 0){
		timer3_flag=1;
			}
		}

	if(timer4_counter > 0){
	timer4_counter--;
	if(timer4_counter <= 0){
		timer4_flag=1;
			}
		}

	if(timer5_counter > 0){
	timer5_counter--;
	if(timer5_counter <= 0){
		timer5_flag=1;
			}
		}
}

