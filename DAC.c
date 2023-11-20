void DAC.init(){
    SIM->SCGC2 |= SIM_SCGC2_DAC0_MASK
}
void DAC.autocfg(){
    DAC0->C0 = DAC_C0_DACEN_MASK | DAC_C0_DACRFS_MASK;
}
int DAC.convert(){
    DAC0->DAT[0].DATH = DAC_DATH_DATA1(valor >> 8);
    DAC0->DAT[0].DATL = DAC_DATL_DATA0(valor & 0xFF);
}
