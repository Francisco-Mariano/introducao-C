#include <stdio.h>
#include <stdlib.h>

int main()
{
  int numEntrada,c1000, c100, c10 ,c;

  printf("\n Informe o numero que sera exibido de forma inversa\n");
  scanf(" %d", &numEntrada);

  c1000 = numEntrada / 1000;
  c100  =(numEntrada % 1000)/100;
  c10   = ((numEntrada %1000)%100)/10;
  c     =(((numEntrada %1000)%100)%10)/1;

  printf("\n Confirme o quarta   posicao do numero de entrada = %d",c);
  printf("\n Confirme o terceiro posicao do numero de entrada = %d",c10);
  printf("\n Confirme o segunda  posicao do numero de entrada = %d",c100);
  printf("\n Confirme o primeira posicao do numero de entrada = %d",c1000);
  printf("\n");

  printf("\nSendo assim, numero exibidos de forma invertida %d!!!\n",c*1000+c10*100+c100*10+c1000*1);


  system("pause");
  return 0;
}
