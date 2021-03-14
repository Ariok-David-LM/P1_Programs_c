#include <stdio.h>
#include <math.h>

float a,b,c;

void obtener()
{
  printf("Ingresa la base real del triangulo equilatero ");
  scanf("%f",&b);
}
void areayperimetro()
{
  a=((sqrt(3)/2)*b*b)/2;
  c=3*b;
}
void entrega()
{
  printf("El area del triangulo es %f y el perimetro del triangulo es %f",a,c);
}
void main()
{
  obtener();
  areayperimetro();
  entrega();
}
