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
		LED7SEG(1);
		status=RED_GREEN;
		setTimer1(300);
 isButton1Pressed();
		break;
	case RED_GREEN:
		traffic_light(RED_GREEN);
		LED7SEG(1);
		if(timer1_flag==1){
			status=RED_YELLOW;
			isButton1Pressed();
			setTimer1(200);
		}
		if(isButton1Pressed()==1){
			status=MODE2;
			setTimer1(100);
		}
		break;
	case RED_YELLOW:
		LED7SEG(1);
		traffic_light(RED_YELLOW);
		if(timer1_flag==1){
			status=GREEN_RED;
			isButton1Pressed();
			setTimer1(300);
		}
		if(isButton1Pressed()==1){
			status=MODE2;
			setTimer1(100);
		}
		break;
	case GREEN_RED:
		LED7SEG(1);
		traffic_light(GREEN_RED);
		if(timer1_flag==1){
			status=YELLOW_RED;
			isButton1Pressed();
			setTimer1(200);
		}
		if(isButton1Pressed()==1){
			status=MODE2;
			setTimer1(100);
		}
		break;
	case YELLOW_RED:
		LED7SEG(1);
		traffic_light(YELLOW_RED);
		if(timer1_flag==1){
		status=RED_GREEN;
		isButton1Pressed();
		setTimer1(300);
		}
		if(isButton1Pressed()==1){
		status=MODE2;
		setTimer1(100);
		}

	}
}
