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
        int i = 0;
        digitalWrite(LED1, LOW);
        digitalWrite(LED2, LOW);
        digitalWrite(LED3, LOW);
        printf("LED OFF...\n");

	delay(1000);

        digitalWrite(LED1, HIGH);
        delay(3000);
        digitalWrite(LED1, LOW);
        for(i=0; i<5; i++){
        digitalWrite(LED2, HIGH);
        delay(500);
        digitalWrite(LED2, LOW);
	delay(500);
	}

        digitalWrite(LED3, HIGH);
        printf("LED ON...\n");

        delay(3000);
        }
        return 0;
}


