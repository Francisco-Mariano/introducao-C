#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hhmmss, hh,mm,ss,cal;
    printf("\n Informe a hora no formato hhmmss:\n");
    scanf(" %d",&hhmmss);

    hh =  (hhmmss / 10000) * 120;
    mm = ((hhmmss % 10000) / 100) * 60;
    ss = ((hhmmss % 10000) % 100) /  1;

    printf("\n");
    printf("\n Hora hhmmss e convertido para segundos e de: %d \n",hh+mm+ss);
    system("pause");
    return 0;

}
