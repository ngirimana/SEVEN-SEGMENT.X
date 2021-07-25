
// PIC16F877A Configuration Bit Settings

// 'C' source line config statements

// CONFIG


// #pragma config statements should precede project file includes.
// Use project enums instead of #define for ON and OFF.



#include <xc.h>

 #define _XTAL_FREQ 8000000

void main()
{
 char seg_code[10]={0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x6F};
    
    /* Configure the ports as output */
    TRISC=0x00;

    while (1) 
    {
           int i;
           
        for (i = 0; i <= 9; i++) // loop to display 0-9
        {
            PORTC = seg_code[i]; 
            
            __delay_ms(100);
        }
    }
}



