#include <stdio.h>

int ent[10], i, x;

void obtener()
{
    x=0;
    printf("Dame los 10 numeros enteros \n");
    for(i=0;i<=9;i++)
    {
        scanf("%i",&ent[i]);
        x = x+ent[i];
    }
}

void entrega()
{
    printf("Aqui esta la suma %i", x);
}
void main()
{
   obtener();
   entrega();
}
