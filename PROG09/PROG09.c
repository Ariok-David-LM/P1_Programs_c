#include <stdio.h>

int e,b,r,c;

void pide()
{
   printf("Dame el valor de la base ");
   scanf("%i",&b);
   printf("Dame el valor del exponente ");
   scanf("%i",&e);
}

void muestra()
{
   printf("La potencia de %i elevado al exponente %i es %i",b,e,r);
}

void potencia()
{
   if (e==0)
   {
      muestra();
   }
   else
   {
      r=b;
      for(c=1;c<e;c++)
      {
         r=r*b;
      }
      muestra();
   }
}

void main()
{
   pide();
   potencia();
}
