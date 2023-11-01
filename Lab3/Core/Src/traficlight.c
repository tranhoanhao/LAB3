/*
 * traficlight.c
 *
 *  Created on: Oct 31, 2023
 *      Author: haoha
 */

#include "traficlight.h"

void traffic_light(status){
	switch(status){
		case INIT:
			HAL_GPIO_WritePin(RED0_GPIO_Port, RED0_Pin,RESET);
			HAL_GPIO_WritePin(GREEN0_GPIO_Port, GREEN0_Pin,RESET);
			HAL_GPIO_WritePin(YELLOW0_GPIO_Port, YELLOW0_Pin,RESET);
			HAL_GPIO_WritePin(RED1_GPIO_Port, RED1_Pin,RESET);
			HAL_GPIO_WritePin(GREEN1_GPIO_Port, GREEN1_Pin,RESET);
			HAL_GPIO_WritePin(YELLOW1_GPIO_Port, YELLOW1_Pin,RESET);
			break;
		case RED_GREEN:
			HAL_GPIO_WritePin(RED0_GPIO_Port, RED0_Pin,SET);
			HAL_GPIO_WritePin(GREEN0_GPIO_Port, GREEN0_Pin,RESET);
			HAL_GPIO_WritePin(YELLOW0_GPIO_Port, YELLOW0_Pin,RESET);
			HAL_GPIO_WritePin(RED1_GPIO_Port, RED1_Pin,RESET);
			HAL_GPIO_WritePin(GREEN1_GPIO_Port, GREEN1_Pin,SET);
			HAL_GPIO_WritePin(YELLOW1_GPIO_Port, YELLOW1_Pin,RESET);
			break;
		case RED_YELLOW:
			HAL_GPIO_WritePin(RED0_GPIO_Port, RED0_Pin,SET);
			HAL_GPIO_WritePin(GREEN0_GPIO_Port, GREEN0_Pin,RESET);
			HAL_GPIO_WritePin(YELLOW0_GPIO_Port, YELLOW0_Pin,RESET);
			HAL_GPIO_WritePin(RED1_GPIO_Port, RED1_Pin,RESET);
			HAL_GPIO_WritePin(GREEN1_GPIO_Port, GREEN1_Pin,RESET);
			HAL_GPIO_WritePin(YELLOW1_GPIO_Port, YELLOW1_Pin,SET);
			break;
		case GREEN_RED:
			HAL_GPIO_WritePin(RED0_GPIO_Port, RED0_Pin,RESET);
			HAL_GPIO_WritePin(GREEN0_GPIO_Port, GREEN0_Pin,SET);
			HAL_GPIO_WritePin(YELLOW0_GPIO_Port, YELLOW0_Pin,RESET);
			HAL_GPIO_WritePin(RED1_GPIO_Port, RED1_Pin,SET);
			HAL_GPIO_WritePin(GREEN1_GPIO_Port, GREEN1_Pin,RESET);
			HAL_GPIO_WritePin(YELLOW1_GPIO_Port, YELLOW1_Pin,RESET);
			break;
		case YELLOW_RED:
			HAL_GPIO_WritePin(RED0_GPIO_Port, RED0_Pin,RESET);
			HAL_GPIO_WritePin(GREEN0_GPIO_Port, GREEN0_Pin,RESET);
			HAL_GPIO_WritePin(YELLOW0_GPIO_Port, YELLOW0_Pin,SET);
			HAL_GPIO_WritePin(RED1_GPIO_Port, RED1_Pin,SET);
			HAL_GPIO_WritePin(GREEN1_GPIO_Port, GREEN1_Pin,RESET);
			HAL_GPIO_WritePin(YELLOW1_GPIO_Port, YELLOW1_Pin,RESET);
			break;
		}

}
