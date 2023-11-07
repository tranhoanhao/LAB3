/*
 * fms_automatic.c
 *
 *  Created on: Nov 6, 2023
 *      Author: haoha
 */


#include "fms_automatic.h"
int a;
int b;
int counter ;
int red ;
int green;
int yellow;
void fsm_automatic_run(){
	if(timer2_flag == 1){
		counter++;
		setTimer2(15);
		if ( counter > 3){counter = 0;}
		update7SEG(counter);
	}
	switch (status){
	case INIT:
		green = 3;
		yellow = 2;
		red = green+yellow;
		status = MODE1;
        break;
	case MODE1:

		traffic_light(status);
		status = RED1_GREEN ;
        setTimer1(green*100);
        setTimer2(1);
        timer3_flag = 1;
        if(isButtonPressed(0)== 1){
        	status = MODE2;
        }

        break;
	case RED1_GREEN :

		SEVled_run(red,green);
		traffic_light(status);
		if (timer1_flag == 1){
			status = RED1_YELLOW;
			setTimer1(red*100);
		}
        if(isButtonPressed(0)== 1){
        	status = MODE2;
        }
		break;
	case RED1_YELLOW:

		SEVled_run(red,yellow);
		traffic_light(status);
		if (timer1_flag == 1){
			status = GREEN1_RED;
			setTimer1(green*100);
		}
        if(isButtonPressed(0)== 1){
        	status = MODE2;
        }


		break;

	case GREEN1_RED:

		SEVled_run(green,green+yellow);
		traffic_light(status);
		if (timer1_flag == 1){
			status = YELLOW1_RED;
			setTimer1(yellow*100);
		}
        if(isButtonPressed(0)== 1){
        	status = MODE2;
        }

		break;

	case YELLOW1_RED:

		SEVled_run(yellow,green+yellow);
		traffic_light(status);
		if (timer1_flag == 1){

			status = RED1_GREEN;
			setTimer1(green*100);
		}
        if(isButtonPressed(0)== 1){
        	status = MODE2;
        }

	default:
		break;
		}
	}
