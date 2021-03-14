# include <stdio.h>

int n,n2,c,s,x;

void imprimen()
{
    printf("%i,",n);
}

void imprimen2()
{
    printf("%i,",n2);
}

void pedir()
{
    printf("¿Cuantos numeros de la serie quieres?");
    scanf("%i",&s);
}

void serie()
{
    n=1;
    c=1;
    if(c<=s)
    {
        imprimen();
        if(c<s)
        {
            n2=1;
            c=c+1;
            imprimen2();
            while(c<s)
            {
                x=c%2;
                if(x==0)
                {
                    n=n+n2;
                    c=c+1;
                    imprimen();
                }
                else
                {
                    n2=n2+n;
                    c=c+1;
                    imprimen2();
                }
            }
        }
    }
}

void main()
{
    pedir();
    serie();
}
