#include <stdio.h>

void main(void)
{
  int Idade, TotalDias;

  printf("\nDigite sua idade: ");
  scanf("%i", &Idade);
  while (Idade > 0)
  {
    TotalDias = Idade * 365;
    printf("Sua idade em dias: %i\n", TotalDias);
    printf("\nDigite sua idade: ");
    scanf("%i", &Idade);
  }
  system("pause");
}
