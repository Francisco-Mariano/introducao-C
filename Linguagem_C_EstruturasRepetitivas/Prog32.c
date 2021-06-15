#include <stdio.h>

void main(void)
{
  float AlturaAnacleto, AlturaFelisberto;
  int QtdeAnos;

  AlturaAnacleto = 1.5;
  AlturaFelisberto = 1.1;

  QtdeAnos = 0;
  while (AlturaAnacleto > AlturaFelisberto)
  {
      QtdeAnos = QtdeAnos + 1;
      AlturaAnacleto = AlturaAnacleto + 0.02;
      AlturaFelisberto = AlturaFelisberto + 0.03;
  }
  printf("Qtde. de anos necessaria para que a altura de Felisberto\n");
  printf("seja superior a altura do Anacleto: %i\n", QtdeAnos);
  system("pause");
}
