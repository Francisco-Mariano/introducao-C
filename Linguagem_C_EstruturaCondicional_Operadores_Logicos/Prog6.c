#include <stdio.h>

void main(void)
{
  float SaldoMedio, ValorCred;

  ValorCred = 0;
  printf("Digite o saldo medio: ");
  scanf("%f", &SaldoMedio);
  if (SaldoMedio < 2000)
     ValorCred = 0.1 * SaldoMedio;
  if (SaldoMedio >= 2000 && SaldoMedio < 3000)
     ValorCred = 0.2 * SaldoMedio;
  if (SaldoMedio >= 3000 && SaldoMedio < 4000)
     ValorCred = 0.25 * SaldoMedio;
  printf("\n\nValor do Saldo Medio: R$ %.2f\n", SaldoMedio);
  printf("Valor do Credito: R$ %.2f\n", ValorCred);
  system("pause");
}



