#include "typedef.h"
#include "TM4C123GH6PM.h"
#include "led.h"

void GPIO_Port_F_handler(void)
{
  // Clear Interrupt
  GPIOF->ICR |= (1<<4);

   GPIOF->DATA_Bits[2] ^= 0xFF;
}

void main()
{

  //Enables Clock for Port F
  SYSCTL->RCGCGPIO =(1<<5);
  
  LED_Init(LED_RED);
  LED_Init(LED_BLUE);
  LED_Init(LED_GREEN);

  //Select GPIO as Alternate Functions
  GPIOF->AFSEL &= ~(1<<4);

  // Pull up the pin
  GPIOF->PUR |= (1<<4);

  // Enable Digital I/O
  GPIOF->DEN |= (1<<4);

  // Configure Interrupt Mask
  GPIOF->IM |= (1<<4);

  GPIOF->IBE |= (1<<4);
  while(1)
  {
    //while((GPIOF->DATA_Bits[1<<4]))
    //;

    //GPIOF->DATA_Bits[2] ^= 0xFF;
    
  }
}

