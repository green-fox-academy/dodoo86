#include "TC74_driver.h"
#include "TC74_driver.c"
#include "STDIO_lib.h"
#include <avr/io.h>
#include <stdio.h>
#include <avr/interrupt.h>

#define F_CPU 16000000UL
#include <avr/delay.h>
#include <util/delay.h>

#define LED_DDR			DDRB
#define LED_DDR_POS		DDRB5
#define LED_PIN			PINB
#define LED_PIN_POS		PINB5
#define LED_PORT		PORTB
#define LED_PORT_POS	PORTB5

void system_init()
{
	//TODO
	// Call the TWI driver init function
	TWI_init();
	// SDIO lib is initialed with 115200 baud rate with 8N1 settings
	STDIO_init();
	// Interrupts must be enabled as STDIO lib uses interrupts for receive
	sei();
}

int main(void)
{
	// Don't forget to call the init function :)
	system_init();
	volatile int8_t temperature;

	printf("System initialized\n");
	
	
	
	

	// Infinite loop
	while (1) {
		
		TWCR = (1 << TWINT) | (1 << TWSTA) | (1 << TWEN);
		while(!(TWCR & 1 << TWINT));
		TWDR = 0b10010000;
		TWCR = (1 << TWINT) | (1 << TWEN);
		while (!(TWCR & 1 << TWINT));
		TWDR = 0;
		TWCR = (1 << TWINT) | (1 << TWEN);
		while (!(TWCR & 1 << TWINT));
		TWCR = (1 << TWINT) | (1 << TWSTA) | (1 << TWEN);
		while(!(TWCR & 1 << TWINT));
		TWDR = 0b10010001;
		TWCR = (1 << TWINT) | (1 << TWEN);
		while (!(TWCR & 1 << TWINT));
		TWCR |= 1 << TWINT;
		_delay_ms(100);
		temperature = TWDR;
		TWCR = (1 << TWINT) | (1 << TWEN) | (1 << TWSTO);
		//TODO
		//Write the temperature frequently.
		//temperature = read_temperature();
		printf("Temperature %d\n",temperature);
		PORTB ^= (1 << PORTB5); 
		_delay_ms(1000);
		PORTB ^= (1 << PORTB5); 
		//TODO
		//Advanced: Don't use delay, use timer.
		
		/*
		temperature = read_temperature(TC_ADDRESS);
		printf("Current temperature: %d\n", temperature);
		PORTB ^= (1 << PORTB5);
		_delay_ms(500);
		PORTB ^= (1 << PORTB5);
		*/

		//TODO
		//Blink the led to make sure the code is running

	}
}
