void ADC.init(){
    SIM->SCGC6 |= SIM_SCGC6_ADC0_MASK;
}
void ADC.autocfg(channel){
    ADC0->SC1[0] = ADC_SC1_ADCH(channel);
    ADC0->CFG1 = ADC_CFG1_MODE(3) | ADC_CFG1_ADICLK(1) | ADC_CFG1_ADIV(0);
}
int ADC.convert(){
    ADC0->SC3 = ADC_SC3_AVGE_MASK | ADC_SC3_AVGS(3);
    while (ADC0->SC3 & ADC_SC3_CAL_MASK);
    while (!(ADC0->SC1[0] & ADC_SC1_COCO_MASK));
    return ADC0->R[0];
}
