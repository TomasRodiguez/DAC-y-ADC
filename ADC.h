#ifndef ADC_H
#define ADC
#include "mbed.h"
#include "Serial.h"
#include "MKL25Z4.h"

void ADC.init();
void ADC.autocfg(int);
int ADC.convert();

#endif
