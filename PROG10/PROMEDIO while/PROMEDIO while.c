#include <stdio.h>

int x,c;
float n,s,p;

void pide1()
{
    printf("Dime cuantas cantidades tienes ");
    scanf("%i",&x);
}

void pide2()
{
    printf("Dame la cantidad ");
    scanf("%f",&n);
}

void promedio()
{
    s=0;
    c=1;
    while(c<=x)
    {
        pide2();
        s=s+n;
        c++;
    }
    p=s/x;
}

void muestra()
{
    printf("El promedio es %f",p);
}

void main()
{
    pide1();
    promedio();
    muestra();
}
