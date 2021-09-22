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

void back(int time)
{
OCR0A=100;
OCR0B=0;
OCR1AL=0;
OCR1BL=100;
delay_ms(time);
OCR0A=0;
OCR0B=0;
OCR1AL=0;
OCR1BL=0;
delay_ms(500);
}

void way1(){
//start
forward(1500);
turn_right();
forward(1000);
turn_left();
//first
forward(1500);
turn_left();
forward(1000);
back(1000);
turn_right();
//second
forward(1500);
turn_left();
forward(750);
back(750);
turn_right();
//third
forward(1500);
turn_left();
forward(1000);
back(1000);
turn_right();
//finish
forward(2000);
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
        way1();        
      }
}
