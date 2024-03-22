#include "MCAL/GPIO/GPIO_Interface.h"

void main()
{
  GPIO_ConfigType GPIO_ConfigTypeStruct =
  {
    .Port_Num = PORTF_ID ,
    .Pin_Num = PIN2_ID
  };
  
  M_GPIO_Void_Init(&GPIO_ConfigTypeStruct);
  
  while(1)
  {

  }
}