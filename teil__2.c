#include <avr/io.h>
#include <util/delay.h>


int main(){

	DDRB = 0b00011100; // Variante 1
	

 	while (1) {

		
		PORTB = 0b00001000; // PB3=High
		_delay_ms(1000); // Warte 250ms
		PORTB = 0b00000000; // PB4 = Low
		_delay_ms(1000); // Warte 250ms
		PORTB = 0b00010000; // PB4 = High
		_delay_ms(1000); // Warte 250ms
		PORTB = 0b00000000; // PB2 = Low
		_delay_ms(1000); // Warte 250ms
		PORTB = 0b00000100; // PB2 = High
		_delay_ms(1000); // Warte 250ms
		PORTB = 0b00000000; // PB2 = Low
		_delay_ms(1000); // Warte 250ms

	}
	return 0;

}
