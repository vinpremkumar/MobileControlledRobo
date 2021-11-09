# MobileControlledRobo
By using a Dual-tone multi-frequency (DTMF) decoder along with MSP430, we can control a RC car through a mobile phone (cellular phone).

# Circuit Diagram
![mini project circuit diagram](https://user-images.githubusercontent.com/49431830/140966311-674ac0bb-66ff-4fcb-9e6b-39e5ab8e021c.jpg)

# Code
'''
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
'''

# References

[dtmf using msp.pdf](https://github.com/vinpremkumar/MobileControlledRobo/files/7506505/dtmf.using.msp.pdf)

[MobilePhone_Controlled_Robot_Complete_Document.pdf](https://github.com/vinpremkumar/MobileControlledRobo/files/7506506/MobilePhone_Controlled_Robot_Complete_Document.pdf)



