/*
 * software_timer.h
 *
 *  Created on: Sep 22, 2024
 *      Author: Hy
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

extern int timer1_flag;
extern int timer2_flag;
extern int timer3_flag;
extern int timer4_flag;
extern int timer5_flag;


void setTimer1(int counter);
void setTimer2(int counter);
void setTimer3(int counter);
void setTimer4(int counter);
void setTimer5(int counter);

void timerRun();


#endif /* INC_SOFTWARE_TIMER_H_ */
