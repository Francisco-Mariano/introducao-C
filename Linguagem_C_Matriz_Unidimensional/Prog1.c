#include <stdio.h>

void main(void)
{
   char TabLetras[50];
   int Col, Total_A, Total_E, Total_I, Total_O, Total_U;

   for (Col=0; Col<=49;Col=Col+1)
   {
      printf("Digite um caracter (letra, simbolo, digito): ");
      scanf(" %c", &TabLetras[Col]);
   }

   Total_A = 0;
   Total_E = 0;
   Total_I = 0;
   Total_O = 0;
   Total_U = 0;
   for (Col=0; Col<=49; Col=Col+1)
   {
      if (TabLetras[Col] == 'A' || TabLetras[Col] == 'a')
         Total_A = Total_A + 1;
      if (TabLetras[Col] == 'E' || TabLetras[Col] == 'e')
         Total_E = Total_E + 1;
      if (TabLetras[Col] == 'I' || TabLetras[Col] == 'i')
         Total_I = Total_I + 1;
      if (TabLetras[Col] == 'O' || TabLetras[Col] == 'o')
         Total_O = Total_O + 1;
      if (TabLetras[Col] == 'U' || TabLetras[Col] == 'u')
         Total_U = Total_U + 1;
   }
   printf("Qtde. de vogal A: %i\n", Total_A);
   printf("Qtde. de vogal E: %i\n", Total_E);
   printf("Qtde. de vogal I: %i\n", Total_I);
   printf("Qtde. de vogal O: %i\n", Total_O);
   printf("Qtde. de vogal U: %i\n", Total_U);
   system("pause");
}
