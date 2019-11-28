/*
 * LedBlinker.c
 *
 * Created: 05/11/2019 11:47:38
 * Author : laszl
 */ 

#define F_CPU 16000000
#include <avr/io.h>
#include <util/delay.h>


void blinkingLed(){
	if(!(PINB &(1<<PINB7))){
		PORTB = 1 << 5;
		_delay_ms(250);
		PORTB = 0 << 5;
		_delay_ms(250);
		}else{
		PORTB = 0 << 5;
	}
}

void toggleLed(uint8_t *on){
	if (!(PINB & (1<<PINB7))){
		_delay_ms(200);
		if (*on){
			PORTB = 0 << 5;
			*on = 0;
			}else {
			PORTB = 1 << 5;
			*on = 1;
		}
	}
}

void toggle(uint8_t *flag){

	if(*flag){
		PORTB = 0 << 5;
		_delay_ms(250);
		PORTB = 1 << 5;
		_delay_ms(250);
		}else{
		if (!(PINB & (1<<PINB7))){
			*flag= 1;
		}
	}
}

void custom_delay(int ms){
	for(int i = 0; i < ms; i++){
		_delay_ms(1);
	}
}

void blink(int mherz){

	int delay_time = 500000 / mherz;

	PORTB = 1 << 5;
	custom_delay(delay_time);
	PORTB = 0 << 5;
	custom_delay(delay_time);
}

void blinkk(int mherz){

	int delay_time = 500000 / mherz;

	PORTD = 1 << 3;
	custom_delay(delay_time);
	PORTD = 0 << 3;
	custom_delay(delay_time);
	PORTD = 1 << 2;
	custom_delay(delay_time);
	PORTD = 0 << 2;
	custom_delay(delay_time);
	PORTD = 1 << 1;
	custom_delay(delay_time);
	PORTD = 0 << 1;
	custom_delay(delay_time);
	PORTD = 1 << 0;
	custom_delay(delay_time);
	PORTD = 0 << 0;
	custom_delay(delay_time);
}

int main(void)
{
	DDRD = 0b00001111;
	PORTD = 0b00001111;

	DDRB = 1 << 5;
	//uint8_t on = 0;
	int frequ[6] = {500000,1000000,2000000,4000000,2000000,1000000};
		//int frequ[2] = {4000000,4000000};

	while (1)
	{
		//toggle(&on);
		//toggleLed(&on);
		//blinkingLed(&on);

		for (int j = 0; j < 6; j++){
			//for (int i = 0; i< 3; i++){
				blink(frequ[j]);
				blinkk(frequ[j]);
			}
		//}
		{
		}
	}
}

