#include <stdio.h>

void main(void)
{
    int Idade, TotalDias, Cont;

    for (Cont=1; Cont<=5; Cont=Cont+1)
    {
      printf("\nDigite sua idade: ");
      scanf("%i", &Idade);
      TotalDias = Idade * 365;
      printf("Sua idade em dias: %i\n", TotalDias);
    }
    system("pause");
}
