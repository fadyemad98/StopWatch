# StopWatch
Stop Watch using polling mechanism in both STM32f103c8t6 and Tiva C Tm4c123gh6pm

## Requirments
Implementation of an application that counts from 1 to 9 and increments each second using SysTick Timer on common cathode 7 segments.
-   Use 3 push buttons using polling technique to control the flow of the application which means:
### 1- One Push button to resume/start.
### 2- One Push button to pause.
### 3- One Push button to reset.
-   Implement this Application using Layered Architecture and Using implemented Drivers for SysTick and DIO and RCC and Button and 7 Segments.
#### This Project is going to be implemented on both Tiva C and STM32.
### Regarding Tiva C:
1- System Clock is PIOSC (16MHZ)
### Regarding STM32:
1- System Clock is HSI (8MHZ)
2- The Application is going to be tested and simulated on Proteus (video is provided).
