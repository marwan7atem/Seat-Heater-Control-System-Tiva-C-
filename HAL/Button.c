/******************************************************************************
 *
 * Module: Button
 *
 * File Name: Button.c
 *
 * Description: Source file for Button Module.
 *
 * Author: Mohamed Tarek
 ******************************************************************************/

#include "Button.h"
#include "Dio.h"
uint8 buttonCheckState(uint8 Button_PIN_NUM)
{
    uint8  state = Dio_ReadChannel(Button_PIN_NUM);

    return state;
}

/*******************************************************************************************************************/
