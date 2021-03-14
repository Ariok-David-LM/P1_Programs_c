#include <stdio.h>

int m,c,n;

void pedir()
{
    printf("De que numero quieres la tabla? ");
    scanf("%i",&n);
}

void imprimetabla()
{
    printf(" \n %i x %i = %i",n,c,m);
}
void tabla()
{
    c=0;
    while(c<=12)
    {
        m=c*n;
        imprimetabla();
        c=c+1;
    }
}

void main()
{
    pedir();
    tabla();
}
