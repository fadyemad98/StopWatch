/*
 * SSD_BCD_config.c
 *
 *  Created on: Aug 14, 2024
 *      Author: fadye
 */


#include "SSD_BCD_config.h"


const GPIO_PINConfig_t SSD_BCD_Config1 ={
		.GPIO_MODE=GPIO_MODE_OUTPUT_PP,
		.GPIO_Output_Speed =GPIO_SPEED_10M,
		.GPIO_PinNumber = GPIO_PIN_0
};

const GPIO_PINConfig_t SSD_BCD_Config2 ={
		.GPIO_MODE=GPIO_MODE_OUTPUT_PP,
		.GPIO_Output_Speed =GPIO_SPEED_10M,
		.GPIO_PinNumber = GPIO_PIN_1
};
const GPIO_PINConfig_t SSD_BCD_Config3 ={
		.GPIO_MODE=GPIO_MODE_OUTPUT_PP,
		.GPIO_Output_Speed =GPIO_SPEED_10M,
		.GPIO_PinNumber = GPIO_PIN_2
};
const GPIO_PINConfig_t SSD_BCD_Config4 ={
		.GPIO_MODE=GPIO_MODE_OUTPUT_PP,
		.GPIO_Output_Speed =GPIO_SPEED_10M,
		.GPIO_PinNumber = GPIO_PIN_3
};
