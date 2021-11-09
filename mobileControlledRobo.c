#include<msp430g2553.h>
void main(void)
{
	WDTCTL = WDTPW + WDTHOLD;		// Stop watchdog timer
	P1DIR = 0x00;
	P2DIR = 0x3C;
	while(1)
	{
		P1OUT &= 0x00;


		if((P1IN & 0x04)==0x04)
			{
			P2OUT =0x14;

			}
		else if((P1IN & 0x08)==0x08)
			{
			P2OUT =0x18;
			}
		else if((P1IN & 0x0C)==0x0C)
			{
			P2OUT =0x24;
			}
		else if((P1IN & 0x10)==0x10)
			{
			P2OUT =0x28;
			}
		else
			P2OUT &= 0x00;
	}

}
