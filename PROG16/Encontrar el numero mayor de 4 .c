#include <stdio.h>

int a,b,c,d;

void obtener()
{
    printf("Dame el primer numero ");
    scanf("%i",&a);
    printf("Dame el segundo numero ");
    scanf("%i",&b);
    printf("Dame el tercer numero ");
    scanf("%i",&c);
    printf("Dame el quarto numero ");
    scanf("%i",&d);
}

void encontrar()
{
    if(a>b)
    {
        if(a>c)
        {
           if(a>d)
           {
               printf("El numero mayor es %i",a);
           }
           if(d>a)
           {
               printf("El numero mayor es %i",d);
           }
        }
        if(c>a)
        {
            if(c>d)
            {
                printf("El numero mayor es %i",c);
            }
            if(d>c)
            {
                printf("El numero mayor es %i",d);
            }
        }
    }
    if(b>a)
    {
        if(b>c)
        {
            if(b>d)
            {
                printf("El numero mayor es %i",b);
            }
            if(d>b)
            {
                printf("El numero mayor es %i",d);
            }
        }
        if(c>b)
        {
            if(c>d)
            {
                printf("El numero mayor es %i",c);
            }
            if(d>c)
            {
                printf("El numero mayor es %i",d);
            }
        }
    }
}

void main()
{
    obtener();
    encontrar();
}
