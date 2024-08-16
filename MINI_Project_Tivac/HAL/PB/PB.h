/*
 * PB.h
 *
 *  Created on: Jul 24, 2024
 *      Author: fadye
 */

#ifndef PB_PB_H_
#define PB_PB_H_
#include "MCAL/inc/std_types.h"



/**================================================================
 * @Fn              -PB_init
 * @brief           -this function initialize the push button
 * @param [in]      -port name and pin number
 * @retval          -none
 * Note             -none
 */
void PB_init(uint8 port, uint8 pin);



/**================================================================
 * @Fn              -read_PB
 * @brief           -this function read the button to check if it is pressed or not
 * @param [in]      -port name and pin number
 * @retval          - 0 if no press, 1 if pressed
 * Note             -none
 */
uint8 read_PB(uint8 port, uint8 pin);

#endif /* PB_PB_H_ */
