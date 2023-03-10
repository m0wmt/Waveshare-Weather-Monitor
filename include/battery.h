#pragma once

#include <Arduino.h>

const float LOW_BATTERY_VOLTAGE = 3.40; // warn user battery low!

uint32_t getBatteryVoltage(void);
int calculateBatteryPercentage(double v);