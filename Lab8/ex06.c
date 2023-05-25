#include <stdio.h>
/*Escreva um programa que declare duas variáveis do tipo inteiro e duas do
tipo ponteiro de inteiro apontando para essas variáveis. Utilizando ponteiros,
o programa deve ler dois números para essas variáveis e os imprimir,
realizando as quatro operações básicas de matemática com esses números.*/

int main() {
    int num1, num2;
    int *pont1, *pont2;

    pont1 = &num1;
    pont2 = &num2;

    printf("Escreva o primeiro numero: ");
    scanf("%d", &num1);

    printf("Escreva o segundo numero: ");
    scanf("%d", &num2);

    printf("Os numeros digitados foram: %d e %d\n", *pont1, *pont2);

    int soma = *pont1 + *pont2;
    printf("A soma dos números é: %d\n", soma);

    int subtracao = *pont1 - *pont2;
    printf("A subtracao dos numeros eh: %d\n", subtracao);

    int multiplicacao = *pont1 * *pont2;
    printf("A multiplicacao dos numeros eh: %d\n", multiplicacao);

    int divisao = *pont1 / *pont2;
    printf("A divisao dos numeros eh: %d\n", divisao);

    return 0;
}
