#include <stdio.h>

float l,a,area,peri;

void obtener()
{
  printf("Dame el valor del largo del rectangulo ");
  scanf("%f",&l);
  printf("Dame el valor del ancho del rectangulo ");
  scanf("%f",&a);
}

void periarea()
{
  area = l*a;
  peri = (l*2)+(a*2);
}

void entrega()
{
  printf("El área es %f y el perímetro es %f",area,peri);
}

void main()
{
  obtener();
  periarea();
  entrega();
}
