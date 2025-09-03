/******************************************************************************
 *
 * Module: Det
 *
 * File Name: Det.c
 *
 * Description:  Det stores the development errors reported by other modules.
 *
 * Author: Mohamed Tarek
 ******************************************************************************/

#include "Det.h"
uint8 Event;
uint16 Mod;
uint8 Api;
uint8 Inst;
Std_ReturnType Det_ReportError( uint16 ModuleId,
                                uint8 InstanceId,
                                uint8 ApiId,
                                uint8 ErrorId )
{
    while(1)
    {

    }
    return E_OK;
}

