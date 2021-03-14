#include <stdio.h>

float x,y,z;

void obtener()
{
    printf("Introduce el minuendo real ");
    scanf("%f",&x);
    printf("Introduce el sustraendo real ");
    scanf("%f",&y);
}

void resta()
{
    z=x-y;
}

void entregar()
{
    printf("La resta es %f",z);
}

void main()
{
    obtener();
    resta();
    entregar();
}
