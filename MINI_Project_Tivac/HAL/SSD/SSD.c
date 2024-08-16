/*
 * SSD.c
 *
 *  Created on: Jul 24, 2024
 *      Author: fadye
 */


#include "SSD.h"
#include "MCAL/DIO/DIO_Interface.h"


int arr[10]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,0x7f,0x6f};

void SSD_init(uint8 port){
    DIO_Start(port);
    DIO_setPinDirection(port, PIN0, PIN_OUTPUT);
    DIO_setPinDirection(port, PIN1, PIN_OUTPUT);
    DIO_setPinDirection(port, PIN2, PIN_OUTPUT);
    DIO_setPinDirection(port, PIN3, PIN_OUTPUT);
    DIO_setPinDirection(port, PIN4, PIN_OUTPUT);
    DIO_setPinDirection(port, PIN5, PIN_OUTPUT);
    DIO_setPinDirection(port, PIN6, PIN_OUTPUT);

}



void SSD_Write(uint8 Value,uint8 port){
	DIO_writePort(port, arr[Value]);
}
