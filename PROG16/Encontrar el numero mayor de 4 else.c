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
            else
            {
                printf("El numero mayor es %i",d);
            }
        }
        else
        {
            if(c>d)
            {
                printf("El numero mayor es %i",c);
            }
            else
            {
                printf("El numero mayor es %i",d);
            }
        }
    }
    else
    {
        if(b>c)
        {
            if(b>d)
            {
                printf("El numero mayor es %i",b);
            }
            else
            {
                printf("El numero mayor es %i",d);
            }
        }
        else
        {
            if(c>d)
            {
                printf("El numero mayor es %i",c);
            }
            else
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
