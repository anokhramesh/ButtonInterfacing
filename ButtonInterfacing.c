/*INTERFACING BUTTON WITH PIC 16F877A*/
#include <xc.h>
#define _XTAL_FREQ 20000000
__CONFIG(FOSC_HS & WDTE_OFF & PWRTE_OFF & BOREN_OFF & LVP_ON & CPD_OFF & WRT_OFF & CP_OFF);
void main(void) {
    TRISBbits.TRISB0 =1;//set Port B0 as input
    TRISBbits.TRISB1 =0;//set POrt B1 as Output
    TRISBbits.TRISB2 =0;//set PORT B2 as Output
    //PORTBbits.RB2 =1;// at initial keep High the value of PORTB2 
    while(1)
    {
        if (PORTBbits.RB0==1)// if Button is pressed
        {
            PORTBbits.RB1=1;// turn the PORTB0 to HIGH
            PORTBbits.RB2=0;// turn the PORTB2 to LOW
        }
        else// else
        {
        PORTBbits.RB1=0;// turn the PORTB0 to LOW
        PORTBbits.RB2=1;// turn the PORTB2 to HIGH
        }
    }    
    return;
}
