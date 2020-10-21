// Name: Tristan Caja
// Class: ELEG 3133
#include <msp430g2553.h>

int main(void) {
	WDTCTL = WDTPW + WDTHOLD;

	P1DIR |= (BIT0 | BIT1 | BIT2);
	P1OUT |= (BIT0 | BIT1 | BIT2);

	while (1) {
		P1OUT |= BIT0;
		P1OUT &= ~(BIT1 | BIT2);

		_delay_cycles(500000);

		P1OUT |= BIT1;
		P1OUT &= ~(BIT2 | BIT0);

		_delay_cycles(500000);

		P1OUT |= BIT2;
		P1OUT &= ~(BIT0 | BIT1);

		_delay_cycles(500000);

	}
}