/*
 * RTOS_Project.h
 *
 *  Created on: ???/???/????
 *      Author: LENOVO
 */

#ifndef RTOS_PROJECT_H_
#define RTOS_PROJECT_H_

#define MAX_VALID_TEMP 45
#define MIN_VALID_TEMP 5
#define LOW_SEAT_HEATING_TEMPERATURE 25
#define MEDIUM_SEAT_HEATING_TEMPERATURE 30
#define HIGH_SEAT_HEATING_TEMPERATURE 35
#define RUNTIME_MEASUREMENTS_TASK_PERIODICITY (2000U)
#define SEAT_HEATING_OFF 0
#define DRIVER_TASK_ID 0
#define PASSENGER_TASK_ID 1
#define ADC_FULL_SCALE_VALUE 4095

/*record failure details*/
typedef struct {
    char *failureMessage;
    uint32_t timestamp;
    HeatingLevel level;
} FailureRecord;

/*define task-specific information */
typedef struct
{
    const uint8_t ucTaskID;
    const uint8_t  ucSeatButton;
    uint8_t ucSeatButtonPressesCount;
    uint8_t ucSeatHeatingTemp;
} TaskInformation;

/*define different heating levels */
typedef enum
{
    LOW_HEATER_INTENSITY = 1,
    MEDIUM_HEATER_INTENSITY = 2,
    HIGH_HEATER_INTENSITY = 3,
    TURN_OFF_HEATER = 4
} HeatingLevel;

/* Defining the event bits in the event group */
#define SEAT_MONITOR_TASK_BIT ( 1UL << 0UL )               // event bit 0
#define SEAT_CURRENT_TEMP_TASK_BIT ( 1UL << 1UL )          // event bit 1
#define SEAT_HEATER_INTENSITY_TASK_BIT ( 1UL << 2UL )      // event bit 2




#endif /* RTOS_PROJECT_H_ */
