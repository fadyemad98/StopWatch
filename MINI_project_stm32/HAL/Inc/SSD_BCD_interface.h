/*
 * SSD_BCD_interface.h
 *
 *  Created on: Aug 14, 2024
 *      Author: fadye
 */

#ifndef INC_SSD_BCD_INTERFACE_H_
#define INC_SSD_BCD_INTERFACE_H_
#include "STM32F103x6.h"
#include "STM32_F103C6_GPIO_Driver.h"
#include "SSD_BCD_config.h"


extern const GPIO_PINConfig_t SSD_BCD_Config1;
extern const GPIO_PINConfig_t SSD_BCD_Config2;
extern const GPIO_PINConfig_t SSD_BCD_Config3;
extern const GPIO_PINConfig_t SSD_BCD_Config4;
void SSD_BCD_init(GPIO_TypeDef *GPIOx, GPIO_PINConfig_t *SSD_BCDconfig);
void SSD_BCD_display(GPIO_TypeDef *GPIOx, uint8_t number);


#endif /* INC_SSD_BCD_INTERFACE_H_ */
