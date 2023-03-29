#include <stdio.h>
#include <stdlib.h>
// Leia um número real e imprima o resultado do quadrado desse número.
 int main()
 {
    float a;
    puts("Escreva um numero: > "); //puts putchar significa "put char" (colocar caractere), utilizado para "colocar" um caractere na saída de dados
    scanf("%f", &a);
    //vai efetuar a primeira ação
    a= a * a;

    printf("Valor de n ao quadrado: > %.0f\n", a);
    system("pause");
    return 0;
 }
