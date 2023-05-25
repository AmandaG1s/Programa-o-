#include <stdio.h>
/*Escreva um programa que contenha duas variáveis inteiras. Leia essas
variáveis do teclado. Em seguida, compare seus endereços e exiba o
conteúdo do maior endereço.*/

int main() {
    int valor1, valor2;
    int *endereco1;
    int *endereco2;

    printf("Digite o valor 1: ");
    scanf("%d", &valor1);
    printf("Digite o valor 2: ");
    scanf("%d", &valor2);

    endereco1 = &valor1;
    endereco2 = &valor2;

    printf("\nEndereco 1: %p\n", endereco1);
    printf("Endereco 2: %p\n", endereco2);

    if (endereco1 > endereco2) 
    {
        printf("Maior endereco: %p\n", endereco1);
    } 
    else if (endereco2 > endereco1) 
    {
        printf("Maior endereco: %p\n", endereco2);
    } 
    else 
    {
        printf("Os enderecos são iguais.\n");
    }

    return 0;
}