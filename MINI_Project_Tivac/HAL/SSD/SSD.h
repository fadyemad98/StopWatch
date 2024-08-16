/*
 * SSD.h
 *
 *  Created on: Jul 24, 2024
 *      Author: fadye
 */

#ifndef SSD_SSD_H_
#define SSD_SSD_H_

#include "MCAL/DIO/DIO_Interface.h"

/**================================================================
 * @Fn              -SSD_init
 * @brief           -this function initialize the seven segment display
 * @param [in]      -port name
 * @retval          -none
 * Note             -common cathode SSD only
 */
void SSD_init(uint8 port );


/**================================================================
 * @Fn              -SSD_Write
 * @brief           -this function writes a number from 0 to 9 on SSD
 * @param [in]      -Value to be written
 * @param [in]      -port name
 * @retval          -none
 * Note             -
 */
void SSD_Write(uint8 Value,uint8 port);


#endif /* SSD_SSD_H_ */
