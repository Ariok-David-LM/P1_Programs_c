
# include <stdio.h>

int x,n;

void pedir()
{
    printf("Dame el numero ");
    scanf("%i",&n);
}
void definir()
{
    x=n%2;
    if(x==0)
    {
        printf("El numero %i es par.",n);
    }
    else
    {
        printf("El numero %i es impar.",n);
    }
}
void main()
{
    pedir();
    definir();
}
