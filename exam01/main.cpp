// uLCD-144-G2 basic text demo program for uLCD-4GL LCD driver library

//

#include "mbed.h"

#include "uLCD_4DGL.h"

uLCD_4DGL uLCD(D1, D0, D2); // serial tx, serial rx, reset pin;
PwmOut PWM1(D6);
AnalogIn Ain(A0);

int main()

{   
    uLCD.printf("\n106061232\n"); //Default Green on black text
    uLCD.rectangle(40, 40, 50, 50, 0XFFFFFF);
    int flag = 0;
    while(1){
        PWM1.period(0.001);
        if(flag ==0){
            PWM1 = PWM1 + 0.1;
            wait(0.1);
            if(PWM1 == 1){
                flag = 1;
            }
        }
        else{
            PWM1 = PWM1 - 0.1;
            wait(0.1);
            if(PWM1 == 0){
                flag = 0;
            }
        }
    }
        
    
}

