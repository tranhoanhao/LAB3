/*
 * button.h
 *
 *  Created on: Nov 6, 2023
 *      Author: haoha
 */

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_

#include "global.h"

#include "main.h"

#define NORMAL_STATE SET
#define PRESSED_STATE RESET

extern int button1_flag;

void getKeyInput();
void initializeArrays_for_Button();

#endif /* INC_BUTTON_H_ */
