#include "main.h"




typedef enum Buttom_status{
    NoPress,
    Start_ResumePress,
    PausePress,
    ResetPress
}Buttom_status;

uint8 pauseFlag =0;


/**================================================================
 * @Fn              -ButtonCheck
 * @brief           -this function check which button of three buttons was pressed by user
 * @param [in]      -none
 * @retval          -Buttom_status
 * Note             -none
 */
Buttom_status ButtonCheck(void){
    Buttom_status retval = NoPress;
    if(read_PB(PB_port,PB_start_Resume)){
        /*SYSTICK init  */
        Systick_Init(&Systick_Config30);
        if(read_PB(PB_port,PB_start_Resume)){
            pauseFlag = 0;
            retval = Start_ResumePress;
        }

    }else if(read_PB(PB_port,PB_Pause) || pauseFlag ==1){
        Systick_Init(&Systick_Config30);
        if(read_PB(PB_port,PB_Pause) || pauseFlag ==1){
            pauseFlag = 1;
            retval = PausePress;
        }

    }else if(read_PB(PB_port,PB_Reset)){
        Systick_Init(&Systick_Config30);
        if(read_PB(PB_port,PB_Reset)){
            retval=  ResetPress;
        }

    }else{
        Systick_Init(&Systick_Config30);
        retval = NoPress;
    }
    return retval;
}

int main(void)
{   Buttom_status x;
    uint8 i = 0;
    /*1- System Clock is PIOSC (16MHZ)*/
    RCC_Init(PIOSC_CLOCK_SOURCE);
    /*2- GPIOF clock enable*/
    RCC_GPIOF_en();
    RCC_GPIOA_en();
    /*3- SSD init*/
    SSD_init(SSD_port);
    /*4- PBs init*/
    PB_init(PB_port, PB_start_Resume);
    PB_init(PB_port, PB_Pause);
    PB_init(PB_port, PB_Reset);
    /*SYSTICK init  */
    Systick_Init(&Systick_Config1000);
    while(1){
        //start press
        while(ButtonCheck() !=Start_ResumePress);
        while((ButtonCheck() != ResetPress) ){
            SSD_Write(i,SSD_port);
            /*SYSTICK init  */
            Systick_Init(&Systick_Config1000);
            while(ButtonCheck() == PausePress);
            if(i==9){
                i = 0;
            }else{
                i++;
            }
        }
        i=0;
        SSD_Write(i,SSD_port);
       }
    return 0;
}
