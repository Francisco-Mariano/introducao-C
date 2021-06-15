#include <stdio.h>

void main(void)
{
    int Idade, TotalDias;
    char Continua;

    do{
      printf("\nDigite sua idade: ");
      scanf("%i", &Idade);
      TotalDias = Idade * 365;
      printf("Sua idade em dias: %i\n", TotalDias);
      printf("Deseja continuar (S/N): ");
      scanf(" %c", &Continua);
    }while (Continua == 'S' || Continua == 's');
    system("pause");
}
