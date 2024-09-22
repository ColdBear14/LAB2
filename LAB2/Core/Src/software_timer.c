/*
 * software_timer.c
 *
 *  Created on: Sep 22, 2024
 *      Author: Hy
 */
#include "software_timer.h"
#define TICK 10

int timer_flag;
int timer_counter;

void setTimer(int counter){
	timer_flag=0;
	timer_counter=counter;
}
void timerRun(){
	if(timer_counter > 0){
	timer_counter--;
	if(timer_counter <= 0){
		timer_flag=1;
			}
		}
}
