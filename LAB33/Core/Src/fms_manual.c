/*
 * fms_manual.c
 *
 *  Created on: Nov 6, 2023
 *      Author: haoha
 */


#include "fms_manual.h"

void fsm_manual_run(){

	switch (status){
	case MODE2:
		yellow=2;
    status = RED;
    break;
	case RED:

		  traffic_light(RED);
		if(timer4_flag == 1){
     setTimer4(50);
		}
     if(isButtonPressed(0) == 1){
         	status = MODE3;
	}
     if(isButtonPressed(1) == 1){
    	 status = ADJ_RED;
     }

     break;
    case ADJ_RED:


    	traffic_light(RED);
		if(timer4_flag == 1){
          setTimer4(50);}
		if (isButtonPressed(1) == 1) {
			if (red >= 99) red = yellow + 1;
			else red++ ;
			green = red - yellow;

		}
		updateClockBuffer(red,2);
		if (isButtonPressed(2) == 1) {
			status = MODE1;

		}
		break;
    case MODE3:
        status = GREEN;
        yellow=2;

        break;
    case GREEN:

    	 traffic_light(GREEN);
         if(timer4_flag == 1){
         setTimer4(50);}
    	 if(isButtonPressed(0) == 1){
    		 status = MODE4;
    	 }
    	 if(isButtonPressed(1)==1){
    		 status = ADJ_GREEN;

    	 }
    	 break;
    case ADJ_GREEN:

    	 traffic_light(GREEN);
    	if(timer4_flag == 1){
    		 setTimer4(50);
    	}
    	if(isButtonPressed(1) == 1){
    		if(green >= 99-red ){green=1;}
    		 else green++;
    		red = green + yellow;

    	}
    	updateClockBuffer(green, 3);

    	if(isButtonPressed(2)==1){
    		status = MODE1;

    	}
    	break;

    case MODE4:
    	green = 3;
    	status = YELLOW;
    	break;
    case YELLOW:
    	traffic_light(YELLOW);
    	if(timer4_flag == 1){
    		setTimer4(50);
    	}
    	if(isButtonPressed(0)==1){
    		status = MODE1;
    	}
    	if(isButtonPressed(1)== 1){
    		status = ADJ_YELLOW;
    	}
    	break;
    case ADJ_YELLOW:
    		traffic_light(YELLOW);
    	if(isButtonPressed(1) == 1){
    		if(yellow>=99-green){yellow=1;}
    		else yellow++;
    		red = green + yellow;
    	}
    	updateClockBuffer(yellow, 4);
    	if(isButtonPressed(2)== 1){
    		status = MODE1;
    	}
    	break;
    default:
    	break;
	}
}
