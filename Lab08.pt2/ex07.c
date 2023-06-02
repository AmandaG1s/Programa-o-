#include <stdio.h>
/*Escreva um programa que receba um array de inteiros com 10 elementos
digitados pelo usuário e encontre o menor (min) e o maior (max) elemento
desse array. Utilize ponteiros tanto para acessar o array quanto para acessar
as variáveis min e max, ou seja, são necessários pelo menos 3 ponteiros.
*/

int main() {
    int vetor[10];
    int i;

    printf("Digite 10 números inteiros:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    int min, max;
    encontrarMinMax(vetor, sizeof(vetor) / sizeof(int), &min, &max);

    printf("Menor elemento: %d\n", min);
    printf("Maior elemento: %d\n", max);

    return 0;
}
void encontrarMinMax(int *vet, int tamanho, int *min, int *max) 
{
    int i;
    *min = *max = vet[0];  

    for (i = 1; i < tamanho; i++) 
    {
        if (vet[i] < *min) 
        {
            *min = vet[i]; 
        }
        if (vet[i] > *max) 
        {
            *max =vet[i];  
        }
    }
}