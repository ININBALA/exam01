// uLCD-144-G2 basic text demo program for uLCD-4GL LCD driver library

//

#include "mbed.h"

#include "uLCD_4DGL.h"

uLCD_4DGL uLCD(D1, D0, D2); // serial tx, serial rx, reset pin;
//AnalogOut out(D7);
//Serial pc( USBTX, USBRX);

int main()
{   
  //  float PWMdata = 0;
    uLCD.printf("\n106061232\n"); //Default Green on black text
    uLCD.rectangle(40, 40, 50, 50, 0XFFFFFF);
    int flag = 0;
    float k = 0;
    float time;
    float PWM1 = 0;
/*
    while(1){
        out = PWM1;
        if(flag == 0){
            if(time <= 0.1){
                PWM1 = 0;
                wait(0.001);
                PWM1 = k;
                wait(0.001);
                time = time + 0.002;
                if(k == 1){
                    flag = 1;
                }
                pc.printf("%1.3f\r\n", PWM1);
            }
            else {
                k = k + 0.1;
            }
        }
        else{
            if(time <= 0.1){
                PWM1 = 0;
                wait(0.001);
                PWM1 = k;
                wait(0.001);
                time = time + 0.002;
                if(k == 0){
                    flag = 0;
                }
                pc.printf("%1.3f\r\n", PWM1);
            }
            else {
                k = k - 0.1;
            }
        }
    } */   
}

