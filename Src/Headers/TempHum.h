/*
 * TempHum.h
 *
* Created: 02/05/2022 3:51:30 PM
*  Author: Farouk
 */ 
#pragma once

#include "ATMEGA_FreeRTOS.h"
#include <stdint.h>

void tempHum_taskRun(void);
void tempHum_getDataFromTempHumSensorTask( void *pvParameters );
void tempHum_init();
