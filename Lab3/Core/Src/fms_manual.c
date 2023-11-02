/*
 * fms_manual.c
 *
 *  Created on: Oct 23, 2023
 *      Author: haoha
 */

#include"fms_manual.h"

void fms_manual_run(){
switch(status){
	case MODE2:
		LED7SEG(2);
		led_blinky(RED);
		if(timer1_flag==1){
			status=RED_GREEN;
			setTimer1(300);
		}
		if(isButton1Pressed()==1){
		status=MODE3;
		setTimer1(100);
		}
		break;
	case MODE3:
		LED7SEG(3);
		led_blinky(RED);
		if(timer1_flag==1){
			status=RED_GREEN;
			setTimer1(300);
		}
		if(isButton1Pressed()==1){
		status=MODE4;
		setTimer1(100);
		}
		break;
	case MODE4:
		LED7SEG(4);
		led_blinky(RED);
		if(timer1_flag==1){
	    status=RED_GREEN;
		setTimer1(300);
		}
		if(isButton1Pressed()==1){
		status=RED_GREEN;
		setTimer1(100);
		}
		break;
	default:
		break;
	}
}
