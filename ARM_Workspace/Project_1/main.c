#include "MCAL/GPIO/GPIO_Interface.h"
#include "Includes/Common_Macros.h"

void _delay_ms(u64 milliseconds)
{
  volatile u64 count = 0 ;
  for(count = 0 ; count < (762 * milliseconds) ; count++);
}

void main()
{
  GPIO_ConfigType InitRedLED =
  {
    .Port_Num = PORTE_ID ,
    .Pin_Num = PIN4_ID ,
    .Pin_Direction = PIN_OUTPUT,
    .Pin_Data = PIN_LOW,
    .Pin_Digital = PIN_DIGITAL_ENABLE,
    .Pin_Internal_Resistor = PIN_NO_RESISTOR 
  };
  
  M_GPIO_Void_Init(&InitRedLED);

  GPIO_ConfigType InitSW1 =
  {
    .Port_Num = PORTF_ID ,
    .Pin_Num = PIN4_ID ,
    .Pin_Direction = PIN_INPUT,
    .Pin_Data = PIN_HIGH,
    .Pin_Digital = PIN_DIGITAL_ENABLE,
    .Pin_Internal_Resistor = PIN_PULL_UP
  };
  
  M_GPIO_Void_Init(&InitSW1);
  
  while(1)
  {
    if(M_GPIO_Void_ReadPin(PORTF_ID,PIN4_ID) == 0)
    {
      _delay_ms(30);
      {
        if(M_GPIO_Void_ReadPin(PORTF_ID,PIN4_ID) == 0)
        {
          M_GPIO_Void_TogglePin(PORTE_ID,PIN4_ID);
        }
      }
      while(M_GPIO_Void_ReadPin(PORTF_ID,PIN4_ID) == 0);
    }
  }
}