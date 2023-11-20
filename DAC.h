#ifndef DACKL25Z_H
#define DACKL25Z
#include "mbed.h"
#include "Serial.h"
#include "MKL25Z4.h"

void DAC.init();
void DAC.autocfg();
int DAC.convert();

#endif
