#define RCGCGPIO_REG            (*((volatile unsigned int *)0x400FE608))

#define GPIO_PORTF_BASE         (*((volatile unsigned int *)0x40025000))
#define GPIO_DATA_MASK          (*((volatile unsigned int *)0x400253FC))
#define GPIO_DIR_MASK           (*((volatile unsigned int *)0x40025400))
#define GPIO_AFSEL_MASK         0x420
#define GPIO_DEN_MASK           (*((volatile unsigned int *)0x4002551C))
#define GPIO_AMSEL_MASK         0x528

int main()
{
  RCGCGPIO_REG |= (1<<5) ;

  GPIO_DEN_MASK |= (1<<2) ;
  GPIO_DIR_MASK |= (1<<2) ;
  GPIO_DATA_MASK |= (1<<2) ;

  while(1)
  {

  }

  return 0 ;
}