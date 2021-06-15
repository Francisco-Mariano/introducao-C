#include <stdio.h>

void main(void)
{
  float Salario, SalReaj;

  printf("Digite o salario do funcionario: ");
  scanf("%f", &Salario);
  if (Salario <= 300)
     SalReaj = (0.35 * Salario) + Salario;
  else
     SalReaj = (0.15 * Salario) + Salario;
  printf("Salario Reajustado: R$ %.2f\n", SalReaj);
  system("pause");
}
