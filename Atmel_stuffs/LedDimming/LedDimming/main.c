/*
 * LedDimming.c
 *
 * Created: 06/11/2019 14:06:42
 * Author : laszl
 */ 
#define FAST 0
#define PHASE_CORRECT 1
#include <avr/io.h>
#define F_CPU 16000000
#include <util/delay.h>

void init(uint8_t mode){
	if(mode == FAST){
		TCCR0B = 0b00000010;
		TCCR0A = 0b10000011;
	}else if (mode == PHASE_CORRECT){
		TCCR0B = 0b00000010;
		TCCR0A = 0b10000001;
	}else{};
	//OCR0A = 0x7f;
	DDRD = 1 << DDRD6;
	//DDRD = 1 << DDRD5;
	
}

void set_duty(uint8_t duty){
	if (duty > 100){
		duty = 100;
	}
	OCR0A = (duty * 255) / 100;
	//OCR0B = 
	
}


int main(void)
{
    init(PHASE_CORRECT);
	uint8_t duty = 0;
	
    while (1) 
    {
		set_duty(duty);
	    _delay_ms(100);
	    
	    duty += 5;
	    if(duty > 100){
		    duty = 0;
	    }
    }
}

