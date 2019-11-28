/*
 * Interact.c
 *
 * Created: 05/11/2019 13:46:39
 * Author : laszlo
 */ 

#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>



//Turning on LED with interrupts-----------------------------------------------------------------------------
/*
ISR(PCINT0_vect){
	// Toggle the LED
PORTB ^= 1 << PORTB5;
PORTD ^= 1 << 3;
PORTD ^= 1 << 2;
PORTD ^= 1 << 1;
PORTD ^= 1 << 0;

}

// This is an init function, which initializes the MCU for the rest of the program.
// It is common in embedded C programs to set port direction (input/output), pull-ups and pull-downs,
// and everything that is needed at the start of your program.

void init(){
	
	// The button is connected to PB7 pin, which is the PCINT7 pin (PinChangeINTerrupt7 pin)
	// If we enable this interrupt on every pin state changes the interrupt handler will be fired.
	// So when the button is pressed OR released the interrupt handler will run.

	// Set the PCINT7 bit of PCMSK0 register. This will enable the interrupts from the button (PB7=PCINT7)
PCMSK0 |= 1 << PCINT7;
	// Enable pin interrupt on change 0 interrupts. This will enable PCINT0, PCINT1, PCINT2 ... PCINT7 interrupts.
PCICR |= 1 << PCIE0;

	// Finally, enable the interrupts globally
sei();
	// Set PB5 as output, this is the LED pin
DDRB = 1 << 5;
DDRD = 0b00001111;
}

int main(void)
{
	// Never forget to cal the init function if you have it :)
	init();
	while (1) {

	}
}
*/

void init()
{
	// Set the prescaler to 1024 division. See at the TC0 control register in the datasheet!
	// With this you also set the clock source to CLK_io and you will also turn on the timer!
	TCCR0B |= 0b00000101;
	TCNT0 = 0;

	// Set the PB5 LED pin to output
	DDRB = 1 << 5;
}

void custom_delay(int ms){
	for(int i = 0; i < ms; i++){
		_delay_ms(1);
	}
}

int main(void)
{
	int delay_time = 990000;
	DDRD = 0b00001111;
	uint8_t counter = 0;
	//const uint8_t cntr_max = 30;
	// Don't forget to call the init function!
	init();

	while (1)
	{
		// If TC0 counter overflow occurred (TOV0 flag is set) toggle the LED and write "1" to that flag
		// (this will clear it, it's confusing, but this is how it works)
if(TIFR0 & 1){
	counter++;
	TIFR0 |= 1;
	}
	if (counter > 40){
		//PORTB ^= 1 << PORTB5;
		//custom_delay(delay_time);
		PORTD ^= 1 << PORTD0;
		custom_delay(delay_time);
		PORTD ^= 1 << PORTD1;
		custom_delay(delay_time);
		PORTD ^= 1 << PORTD2;
		custom_delay(delay_time);
		PORTD ^= 1 << PORTD3;
		
		
		counter = 0;
	}
}
}
