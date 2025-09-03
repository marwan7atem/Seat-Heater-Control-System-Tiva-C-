/*
 * led.c
 *
 *  Created on: ???/???/????
 *      Author: LENOVO
 */
#include "tm4c123gh6pm_registers.h"

void GPIO_BlueLedOn(void)
{
    GPIO_PORTF_DATA_REG |= (1<<2);
}
void GPIO_RedLedOn(void)
{
    GPIO_PORTF_DATA_REG |= (1<<1);
}
void GPIO_GreenLedOn(void)
{
    GPIO_PORTF_DATA_REG |= (1<<3);
}

void GPIO_BlueLedOff(void)
{
    GPIO_PORTF_DATA_REG &= ~(1<<2);
}
void GPIO_RedLedOff(void)
{
    GPIO_PORTF_DATA_REG &= ~(1<<1);
}
void GPIO_GreenLedOff(void)
{
    GPIO_PORTF_DATA_REG &= ~(1<<3);
}

void GPIO_BlueLedToggle(void)
{
    GPIO_PORTF_DATA_REG ^= (1<<2);
}
void GPIO_RedLedToggle(void)
{
    GPIO_PORTF_DATA_REG ^= (1<<1);
}
void GPIO_GreenLedToggle(void)
{
    GPIO_PORTF_DATA_REG ^= (1<<3);
}




