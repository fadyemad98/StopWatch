/*
 * PB_config.c
 *
 *  Created on: Aug 14, 2024
 *      Author: fadye
 */



#include"PB_interface.h"
#include "STM32_F103C6_GPIO_Driver.h"

const GPIO_PINConfig_t PB1config = {
		.GPIO_MODE =GPIO_MODE_INPUT_FLO,
		.GPIO_PinNumber = GPIO_PIN_0
};

const GPIO_PINConfig_t PB2config = {
		.GPIO_MODE =GPIO_MODE_INPUT_FLO,
		.GPIO_PinNumber = GPIO_PIN_1
};

const GPIO_PINConfig_t PB3config = {
		.GPIO_MODE =GPIO_MODE_INPUT_FLO,
		.GPIO_PinNumber = GPIO_PIN_3
};


