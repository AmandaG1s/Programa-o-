#include <stdio.h>
/*Crie um programa que contenha um array de float contendo 10 elementos.
Utilizando aritmética de ponteiro, imprima o endereço de cada posição
desse array.
*/
int main() {
    float vetor[10] = {8.5, 4.7, 3.2, 0.5, 1.1, 7.9, 9.1, 8.7, 20.4, 11.4};
    float *ponteiro = vetor; // Ponteiro para o início do array

    for (int i = 0; i < 10; i++) 
    {
        printf("Endereco do elemento %d: %p\n", i, ponteiro);
        ponteiro++; 
    }

    return 0;
}