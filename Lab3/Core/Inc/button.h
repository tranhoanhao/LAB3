/*
 * button.h
 *
 *  Created on: Oct 23, 2023
 *      Author: haoha
 */

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_

#include "main.h"
#include "global.h"

#define NORMAL_STATE SET
#define PRESSED_STATE RESET
int isButton1Pressed();
int isButton2Pressed();
int isButton3Pressed();
extern int button1_flag;
extern int button2_flag;
extern int button3_flag;
void getKeyInput();

#endif /* INC_BUTTON_H_ */
