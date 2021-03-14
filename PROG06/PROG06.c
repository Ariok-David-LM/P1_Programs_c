# include <stdio.h>

int c,n,f;

void obtener()
{
 printf("De que numero quieres el factorial");
 scanf("%i",&n);
}

void factorial()
{
 c=1;
 f=1;
 while (c<=n)
 {
  f=f*c;
  c=c+1;
 }
}

void entregar()
{
 printf("%i, ",f);
}

void main()
{
 obtener();
 factorial();
 entregar();
}
