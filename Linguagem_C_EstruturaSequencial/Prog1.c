#include <stdio.h>

void main(void)
{
   float PrecUnit, QtdeVend, ValCompra;

   printf("Digite o preco unitario: ");
   scanf("%f", &PrecUnit);
   printf("Digite a quantidade vendida: ");
   scanf("%f", &QtdeVend);
   ValCompra = PrecUnit * QtdeVend;
   printf("\nValor da Compra : R$ %.2f\n", ValCompra);
   system("pause");
}
