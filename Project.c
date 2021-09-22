/*****************************************************
This program was produced by the
CodeWizardAVR V2.05.3 Standard
Automatic Program Generator
© Copyright 1998-2011 Pavel Haiduc, HP InfoTech s.r.l.
http://www.hpinfotech.com

Project : 
Version : 
Date    : 22.09.2021
Author  : User
Company : jkjkj
Comments: 


Chip type               : ATmega328P
Program type            : Application
AVR Core Clock frequency: 8,000000 MHz
Memory model            : Small
External RAM size       : 0
Data Stack size         : 512
*****************************************************/

#include <mega328p.h>
#include <delay.h>

void forward(int time)
{
OCR0A=0;
OCR0B=100;
OCR1AL=100;
OCR1BL=0;
delay_ms(time);
OCR0A=0;
OCR0B=0;
OCR1AL=0;
OCR1BL=0;
delay_ms(500);
}

void turn_right()
{
OCR0A=100;
OCR0B=0;
OCR1AL=100;
OCR1BL=0;
delay_ms(400);
OCR0A=0;
OCR0B=0;
OCR1AL=0;
OCR1BL=0;
delay_ms(500);
}

void turn_left()
{
OCR0A=100;
OCR0B=0;
OCR1AL=100;
OCR1BL=0;
delay_ms(400);
OCR0A=0;
OCR0B=0;
OCR1AL=0;
OCR1BL=0;
delay_ms(500);
}

void back()
{
OCR0A=100;
OCR0B=0;
OCR1AL=0;
OCR1BL=100;
delay_ms(1000);
OCR0A=0;
OCR0B=0;
OCR1AL=0;
OCR1BL=0;
delay_ms(500);
}

void main(void)
{
DDRB=0x0E;
DDRC=0x00;
DDRD=0x68;

TCCR0A=0xA3;
TCCR0B=0x05;

TCCR1A=0xA1;
TCCR1B=0x0D;

TCCR2A=0xA3;
TCCR2B=0x00;

while (1)
      {
        forward(3000);
        turn_right();
      }
}
