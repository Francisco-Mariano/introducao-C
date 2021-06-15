#include <stdio.h>

void main(void)
{
    float Nota1, Nota2, Nota3, Nota4, Media;

    printf("Digite a 1a. nota: ");
    scanf("%f", &Nota1);
    printf("Digite a 2a. nota: ");
    scanf("%f", &Nota2);
    printf("Digite a 3a. nota: ");
    scanf("%f", &Nota3);
    printf("Digite a 4a. nota: ");
    scanf("%f", &Nota4);
    Media = (Nota1 +  Nota2 + Nota3 + Nota4)/4;
    printf("Media do aluno : %.1f\n", Media);

    if (Media >= 5)
       printf("Aluno Aprovado\n");
    else
       printf("Aluno Reprovado\n");

    system("pause");
}
