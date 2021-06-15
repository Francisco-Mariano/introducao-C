#include <stdio.h>

void main(void)
{
  int QtdeCasas;
  float QtdeGraos, TotalGraos;

  TotalGraos = 0;
  QtdeGraos = 1;
  for (QtdeCasas=1; QtdeCasas<=64; QtdeCasas=QtdeCasas+1)
  {
     TotalGraos = TotalGraos + QtdeGraos;
     QtdeGraos = QtdeGraos * 2;
  }
  printf("Total de graos que o monge deve receber: %.0f\n", TotalGraos);
  system("pause");
}
