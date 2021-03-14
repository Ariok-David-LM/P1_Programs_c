#include <stdio.h>

float x,y,z;

void obtener()
{
    printf("Dame el primer sumando ");
    scanf("%f",&x);
    printf("Dame el segundo sumando ");
    scanf("%f",&y);
}

void suma()
{
    z=x+y;
}

void entregar()
{
    printf("El resultado de la suma es %f",z);
}

void main()
{
    obtener();
    suma();
    entregar();
}
