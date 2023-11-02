/*
 * led_blinky.c
 *
 *  Created on: Nov 2, 2023
 *      Author: haoha
 */

#include "led_blinky.h"
led_blinky(int status){
	switch(status){
	case RED:
		if(timer2_flag==1){
		HAL_GPIO_TogglePin(RED0_GPIO_Port, RED0_Pin);
		HAL_GPIO_WritePin(GREEN0_GPIO_Port, GREEN0_Pin,RESET);
		HAL_GPIO_WritePin(YELLOW0_GPIO_Port, YELLOW0_Pin,RESET);
		HAL_GPIO_WritePin(RED1_GPIO_Port, RED1_Pin,RESET);
		HAL_GPIO_TogglePin(GREEN1_GPIO_Port, GREEN1_Pin);
		HAL_GPIO_WritePin(YELLOW1_GPIO_Port, YELLOW1_Pin,RESET);
		setTimer2(50);
		}
	break;
	case YELLOW:
		if(timer2_flag==1){
		HAL_GPIO_TogglePin(YELLOW0_GPIO_Port, YELLOW0_Pin);
		HAL_GPIO_WritePin(GREEN0_GPIO_Port, GREEN0_Pin,RESET);
		HAL_GPIO_WritePin(RED0_GPIO_Port, RED0_Pin,RESET);
		HAL_GPIO_WritePin(RED1_GPIO_Port, RED1_Pin,RESET);
		HAL_GPIO_TogglePin(YELLOW1_GPIO_Port, YELLOW1_Pin);
		HAL_GPIO_WritePin(GREEN1_GPIO_Port, GREEN1_Pin,RESET);
		setTimer2(50);
		}
	break;
	case GREEN:
		if(timer2_flag==1){
		HAL_GPIO_TogglePin(GREEN0_GPIO_Port, GREEN0_Pin);
		HAL_GPIO_WritePin(YELLOW0_GPIO_Port, YELLOW0_Pin,RESET);
		HAL_GPIO_WritePin(RED0_GPIO_Port, RED0_Pin,RESET);
		HAL_GPIO_WritePin(YELLOW1_GPIO_Port, YELLOW1_Pin,RESET);
		HAL_GPIO_TogglePin(RED1_GPIO_Port, RED1_Pin);
		HAL_GPIO_WritePin(GREEN1_GPIO_Port, GREEN1_Pin,RESET);
		setTimer2(50);
		}
	break;
	}

}
