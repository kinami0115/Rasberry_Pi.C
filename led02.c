#include <wiringPi.h>
#include <stdio.h>

#define LED1 0
#define LED2 2
#define LED3 3

int main(void){
        if(wiringPiSetup() == -1){
           printf("setup wiringPi failed!");
           return 1;
        }

        pinMode(LED1, OUTPUT);
	pinMode(LED2, OUTPUT);
	pinMode(LED3, OUTPUT);

        while(1){
        digitalWrite(LED1, LOW);
	digitalWrite(LED2, LOW);
	digitalWrite(LED3, LOW);
        printf("LED OFF...\n");

        delay(100);

        digitalWrite(LED1, HIGH);
	digitalWrite(LED2, HIGH);
	digitalWrite(LED3, HIGH);
        printf("LED ON...\n");

        delay(100);
        }
        return 0;
}



