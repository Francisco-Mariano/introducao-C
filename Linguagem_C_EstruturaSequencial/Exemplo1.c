#include <stdio.h>

void main(void)
{
  int Idade, QtdeDias;

  printf("Digite sua a idade: ");
  scanf("%i", &Idade);
  QtdeDias = Idade * 365;
  printf("\nSua idade em dias e' %i\n", QtdeDias);
  system("pause");
}
