/*
 * fms.c
 *
 *  Created on: Oct 23, 2023
 *      Author: haoha
 */

#include "fms.h"

void fms_automatic_run(){
	switch(status){
	case INIT:
		traffic_light(INIT);
		status=RED_GREEN;
		setTimer1(300);
		break;
	case RED_GREEN:
		traffic_light(RED_GREEN);

		if(timer1_flag==1){
			status=RED_YELLOW;
			setTimer1(200);
		}

		break;
	case RED_YELLOW:
		traffic_light(RED_YELLOW);
		if(timer1_flag==1){
			status=GREEN_RED;
			setTimer1(300);
		}
		break;
	case GREEN_RED:
		traffic_light(GREEN_RED);
		if(timer1_flag==1){
			status=YELLOW_RED;
			setTimer1(200);
		}
		break;
	case YELLOW_RED:
		traffic_light(YELLOW_RED);
		if(timer1_flag==1){
		status=RED_GREEN;
		setTimer1(300);
		}

	}
}
