/*
 * global.h
 *
 *  Created on: Nov 6, 2023
 *      Author: haoha
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_



#include "main.h"
#include "timer.h"
#include "led_display.h"
#include "trafficlight.h"
#include "button.h"
#include "fms_automatic.h"
#include "fms_manual.h"

#define INIT 1
#define RED1_GREEN 2
#define RED1_YELLOW  3
#define GREEN1_RED 4
#define YELLOW1_RED 5
#define RED 6
#define GREEN 7
#define YELLOW 8
#define MODE1  9
#define MODE2 10
#define MODE3 11
#define MODE4 12
#define ADJ_RED 13
#define ADJ_GREEN 14
#define ADJ_YELLOW 15


int digit1 ;
int digit2 ;
int digit3 ;
int digit4 ;
int led_buffer[4] ;


int reading_value[3];

#define  NO_OF_BUTTONS  3





extern int status ;
extern int a;
extern int b;
extern int counter;

extern int red;
extern int yellow;
extern int green;

#endif /* INC_GLOBAL_H_ */
