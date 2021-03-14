#include <stdio.h>

int vi,vf,inc,sn;

void pedir()
{
  printf("dame el valor inicial de la serie ");
  scanf("%i",&vi);
  printf("dame el valor final de la serie ");
  scanf("%i",&vf);
  printf("dame el incremento de la serie ");
  scanf("%i",&inc);
}
void serie()
{
    sn = vi;
    do
    {
        printf("%i, ",sn);
        sn =sn+inc;
    }while(sn<=vf);
}
void main()
{
  pedir();
  serie();
}
