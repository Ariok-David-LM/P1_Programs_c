#include <stdio.h>

int m,c,n;

void pedir()
{
    printf("De que numero quieres la tabla ");
    scanf("%i",&n);
}

void imprimetabla()
{
    printf(" \n %i x %i = %i",n,c,m);
}

void tabla()
{
       for(c=0; c<=12; c=c+1 )
       {
           m=c*n;
           imprimetabla();
       }
}

void main()
{
    pedir();
    tabla();
}
