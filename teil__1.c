#include <avr/io.h>
#include <util/delay.h>

int main(){

    DDRB = 0b00010000;

     while (1) {
        PORTB = 0b00010000; //P: 4 high (on)
        _delay_ms(2000);
        PORTB = 0b00000000; // P: 4 Low (off)
        _delay_ms(2000);
    }
    return 0;
}
