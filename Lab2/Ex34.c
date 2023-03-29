#include <stdio.h>
/*Leia a nota e o número de faltas de um aluno, e escreva seu conceito. De acordo com a tabela
abaixo, quando o aluno tem mais de 20 faltas ocorre uma redução de conceito.
NOTA CONCEITO (ATÉ 20 FALTAS) CONCEITO (MAIS DE 20 FALTAS)
9.0 até 10.0 A B
7.5 até 8.9 B C
5.0 até 7.4 C D
4.0 até 4.9 D E
0.0 até 3.9 E E*/
int main() {
    float nota;
    int faltas;

    printf("Escreva a nota do aluno: ");
    scanf("%f", &nota);

    printf("Escreva o numero de faltas do aluno: ");
    scanf("%d", &faltas);

    if (faltas > 20) 
    {
        if (nota >= 9.0 && nota <= 10.0) 
        {
            printf("Conceito: B\n");
        } 
        else if (nota >= 7.5 && nota <= 8.9)
         {
            printf("Conceito: C\n");
        } 
        else if (nota >= 5.0 && nota <= 7.4) 
        {
            printf("Conceito: D\n");
        } 
        else if (nota >= 4.0 && nota <= 4.9) 
        {
            printf("Conceito: E\n");
        }
         else {
            printf("Conceito: E\n");
        }
    } 
    else
     {
        if (nota >= 9.0 && nota <= 10.0) 
        {
            printf("Conceito: A\n");
        } 
        else if (nota >= 7.5 && nota <= 8.9)
         {
            printf("Conceito: B\n");
        }
         else if (nota >= 5.0 && nota <= 7.4)
          {
            printf("Conceito: C\n");
        }
         else if (nota >= 4.0 && nota <= 4.9) 
        {
            printf("Conceito: D\n");
        }
         else 
         {
            printf("Conceito: E\n");
        }
    }

    return 0;
}
