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
    c=0;
    do
    {
        m=c*n;
        imprimetabla();
        c=c+1;
    }while(c<=12);
}

void main()
{
    pedir();
    tabla();
}
