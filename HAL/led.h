/*
 * led.h
 *
 *  Created on: ???/???/????
 *      Author: LENOVO
 */

#ifndef HAL_LED_H_
#define HAL_LED_H_

#include "std_types.h"

#define PRESSED                ((uint8)0x00)
#define RELEASED               ((uint8)0x01)

void GPIO_BlueLedOn(void);
void GPIO_RedLedOn(void);
void GPIO_GreenLedOn(void);

void GPIO_BlueLedOff(void);
void GPIO_RedLedOff(void);
void GPIO_GreenLedOff(void);

void GPIO_BlueLedToggle(void);
void GPIO_RedLedToggle(void);
void GPIO_GreenLedToggle(void);





#endif /* HAL_LED_H_ */
