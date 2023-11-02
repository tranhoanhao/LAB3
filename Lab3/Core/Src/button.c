/*
 * button.c
 *
 *  Created on: Oct 23, 2023
 *      Author: haoha
 */

#include "button.h"
int KeyReg0 = NORMAL_STATE;
int KeyReg1 = NORMAL_STATE;
int KeyReg2 = NORMAL_STATE;
int KeyReg3 = NORMAL_STATE;
int KeyReg01 = NORMAL_STATE;
int KeyReg11 = NORMAL_STATE;
int KeyReg21 = NORMAL_STATE;
int KeyReg31 = NORMAL_STATE;
int KeyReg02 = NORMAL_STATE;
int KeyReg12 = NORMAL_STATE;
int KeyReg22 = NORMAL_STATE;
int KeyReg32 = NORMAL_STATE;
int TimeOutForKeyPress =  500;
int button1_flag = 0;
int button2_flag = 0;
int button3_flag = 0;
int isButton1Pressed(){
	if(button1_flag == 1){
		button1_flag = 0;
		return 1;
	}
	return 0;
}
int isButton2Pressed(){
	if(button2_flag == 1){
		button2_flag = 0;
		return 1;
	}
	return 0;
}
int isButton3Pressed(){
	if(button3_flag == 1){
		button3_flag = 0;
		return 1;
	}
	return 0;
}
void subKeyProcess(){
	button1_flag = 1;
	button2_flag = 1;
	button3_flag = 1;
}

void getKeyInput(){
  KeyReg2 = KeyReg1;
  KeyReg1 = KeyReg0;
  //Add your button here
  KeyReg0 = HAL_GPIO_ReadPin(BUTTON_GPIO_Port, BUTTON_Pin);

  if ((KeyReg1 == KeyReg0) && (KeyReg1 == KeyReg2)){
    if (KeyReg2 != KeyReg3){
      KeyReg3 = KeyReg2;

      if (KeyReg3 == PRESSED_STATE){
        TimeOutForKeyPress = 500;
        subKeyProcess();
      }
    }else{
       TimeOutForKeyPress --;
        if (TimeOutForKeyPress == 0){
        	TimeOutForKeyPress = 500;
			subKeyProcess();
        }
    }
  }

  KeyReg21 = KeyReg11;
    KeyReg11 = KeyReg01;
    //Add your button here
    KeyReg01 = HAL_GPIO_ReadPin(BUTTON1_GPIO_Port, BUTTON1_Pin);

    if ((KeyReg11 == KeyReg01) && (KeyReg11 == KeyReg21)){
      if (KeyReg21 != KeyReg31){
        KeyReg31 = KeyReg21;

        if (KeyReg31 == PRESSED_STATE){
          TimeOutForKeyPress = 500;
          subKeyProcess();
        }
      }else{
         TimeOutForKeyPress --;
          if (TimeOutForKeyPress == 0){
          	TimeOutForKeyPress = 500;
  			subKeyProcess();
          }
      }
    }
    KeyReg22 = KeyReg12;
      KeyReg12 = KeyReg02;
      //Add your button here
      KeyReg02 = HAL_GPIO_ReadPin(BUTTON2_GPIO_Port, BUTTON2_Pin);

      if ((KeyReg12 == KeyReg02) && (KeyReg12 == KeyReg22)){
        if (KeyReg22 != KeyReg32){
          KeyReg32 = KeyReg22;

          if (KeyReg32 == PRESSED_STATE){
            TimeOutForKeyPress = 500;
            subKeyProcess();
          }
        }else{
           TimeOutForKeyPress --;
            if (TimeOutForKeyPress == 0){
            	TimeOutForKeyPress = 500;
    			subKeyProcess();
            }
        }
      }
}


