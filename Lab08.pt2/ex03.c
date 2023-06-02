#include <stdio.h>
/*Crie um programa que contenha um array de inteiros contendo 5 elementos.
Utilizando apenas aritmética de ponteiros, leia esse array do teclado e
imprima o dobro de cada valor lido.
*/
int main() 
{
    int vetor[5];
    int *ponteiro = vetor; 

    printf("Escreva 5 inteiros:\n");

   
    for (int i = 0; i < 5; i++) 
    {
        scanf("%d", ponteiro);
        ponteiro++; 
    }

    ponteiro = vetor; 

    printf("O dobro:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", *ponteiro * 2);
        ponteiro++; 
    }

    return 0;
}