/*
 * File:   main.c
 * Author: Sebastian Moosbauer
 *
 * Created on May 20, 2025, 11:59 AM
 */


#include <xc.h>

#include <LCD/GLCDnokia.h>

void __init(void);

void main(void) {
    __init();
    
    GLCD_Text2Out(0, 3, "Bit");
    GLCD_Text2Out(1, 1, "Banging");
    GLCD_Text2Out(2, 0, "rocks! =)");

    while (1) {
        for (int i = 0; i < 20000; ++i){
            Nop();
        }
        LATB ^= 0b00111100;
    }

    return;
}

void __init(void) {
    OSCCON = 0x50; // Fosc = 4MHz
    
    ANSELB = 0;
    TRISB &= 0b11000011;
    LATB |= 0b00010100;
    
    GLCD_Init();
}



void GLCD_Bit_Banging(unsigned char data)
{
    // implement your solution here
    
}
