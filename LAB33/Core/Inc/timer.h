/*
 * timer.h
 *
 *  Created on: Nov 6, 2023
 *      Author: haoha
 */

#ifndef INC_TIMER_H_
#define INC_TIMER_H_
#include "global.h"
int timer1_flag;
int counter1 ;
int timer2_flag ;
int counter2 ;
int timer3_flag;
int counter3 ;
int timer0_flag;
int counter0 ;
int counter5 ;
int timer5_flag;
int counter4 ;
int timer4_flag;

void setTimer1();
void setTimer2();
void setTimer3();
void setTimer0();
void setTimer5();
void setTimer4();
void timerRun();


#endif /* INC_TIMER_H_ */
