/*
 * global.h
 *
 *  Created on: Oct 23, 2023
 *      Author: haoha
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_
#include "timer.h"
#include "main.h"
#include "button.h"
#include"traficlight.h"
#include "led7seg.h"
#include"fms.h"
#include"fms_manual.h"
#include"led_blinky.h"
extern int status;
#define INIT       1
#define RED_GREEN  2
#define RED_YELLOW 3
#define GREEN_RED  4
#define YELLOW_RED 5


#define MAN_RED       12
#define MAN_GREEN     14
#define MAN_YELLOW    15

#define MODE2    24
#define MODE3    25
#define MODE4    26

#define RED      34
#define YELLOW   25
#define GREEN    26

#endif /* INC_GLOBAL_H_ */
