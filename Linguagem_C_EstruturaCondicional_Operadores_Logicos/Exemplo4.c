#include <stdio.h>

void main(void)
{
    float Lado1, Lado2, Lado3;

    printf("Digite a medida do lado 1: ");
	scanf("%f", &Lado1);
    printf("Digite a medida do lado 2: ");
	scanf("%f", &Lado2);
    printf("Digite a medida do lado 3: ");
	scanf("%f", &Lado3);

    if (Lado1 == Lado2  &&  Lado1 == Lado3  &&  Lado2 == Lado3)
        printf("Triangulo Equilatero\n\n");

    if (Lado1 == Lado2 || Lado1 == Lado3 || Lado2 == Lado3)
        printf("Triangulo Isosceles\n\n");

    if (Lado1 != Lado2 &&  Lado1 != Lado3 &&  Lado2 != Lado3)
        printf("Triangulo Escaleno\n\n");

    system("pause");
}
