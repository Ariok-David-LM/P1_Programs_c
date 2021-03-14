#include <stdio.h>

int ent[10], i;

void obtener()
{
    printf("Dame los 10 numeros enteros \n");
    for(i=0;i<=9;i++)
    {
        scanf("%i",&ent[i]);
    }
}

void escribe()
{
    printf("Aqui estan tus 10 numeros \n");
    for(i=9;i>=0;i--)
    {
        printf("%i, ",ent[i]);
    }
}
void main()
{
   obtener();
   escribe();
}
