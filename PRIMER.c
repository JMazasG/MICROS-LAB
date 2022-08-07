#include <18F4550.h>      //incluir el dispositivo 
#fuses HSPLL,PLL5,CPUDIV2,NOWDT,NOPROTECT
#use delay(crystal = 20M )   

void main ()
{
   while(true)
   {
         output_toggle(pin_b0); delay_ms(1000);
   }
}
