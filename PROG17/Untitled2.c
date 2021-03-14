#include <stdio.h>

float arr[5],mayor;
int i;

void pide()
{
    printf("Dame 5 numeros y yo encontrare el mayor \n");
    for(i=0;i<=4;i++)
    {
        scanf("%f",&arr[i]);
    }
}

void busca()
{
    i=0;
    mayor=arr[i];
    for(i=1;i<=4;i++)
    {
        if(mayor<arr[i])
        {
            mayor=arr[i];
        }
    }
}

void entrega()
{
    printf("\nEl numero mayor es %f ",mayor);
}
void main()
{
    pide();
    busca();
    entrega();
}
