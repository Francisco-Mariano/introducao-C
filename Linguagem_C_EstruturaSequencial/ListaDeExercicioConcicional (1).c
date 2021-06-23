#include <stdio.h>
#include <stdlib.h>

int main(){

int algorismo, c1000, c100, c10, c;

printf("\nInfomre um numero inteiro com 4 algarismo.\n");
scanf( " %d", &algorismo);

 c1000 =    algorismo /1000;
 c100  =   (algorismo % 1000) / 100;
 c10   =  ((algorismo % 1000) % 100) / 10;
 c     = (((algorismo % 1000) % 100) % 10) / 1;

 printf("\n  c1000 = %d",c1000);
 printf("\n  c100  = %d",c100);
 printf("\n  c10   = %d",c10);
 printf("\n  c     = %d",c);

 printf("\n");
 printf("\n Soma de todos algorimos = %d . \n",c1000 + c100 + c10 + c );

 system("pause");
 return 0;
 }

