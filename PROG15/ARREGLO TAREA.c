#include <stdio.h>

int pri[10],seg[10],ter[10],i;

void obtener()
{
    printf("Dame los 10 numeros enteros del primer arreglo\n");
    for(i=0;i<=9;i++)
    {
        printf("Casilla %i : " ,i+1);
        scanf("%i",&pri[i]);
    }
    printf("Dame los 10 numeros enteros del segundo arreglo\n");
    for(i=0;i<=9;i++)
    {
        printf("Casilla %i : " ,i+1);
        scanf("%i",&seg[i]);
    }
}

void suma()
{
    for(i=0;i<=9;i++)
    {
        ter[i]=(pri[i])+(seg[i]);
    }
}

void mostrar()
{
    printf("Los resultados de ..... \n");
    for(i=0;i<=9;i++)
    {
        printf("La suma de las casillas %i = %i\n",i+1,ter[i]);
    }
}

void main()
{
   obtener();
   suma();
   mostrar();
}
