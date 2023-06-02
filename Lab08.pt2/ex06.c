#include <stdio.h>
/*Elabore um programa que dado um array e um valor do mesmo tipo do
array, preencha os elementos de array com esse valor. Não utilize índices
para percorrer o array, apenas aritmética de ponteiros.
*/

int main() {
    int array[10];
    int valor;

    printf("Digite o valor para preencher o array: ");
    scanf("%d", &valor);

    preencherArray(array, sizeof(array) / sizeof(array[0]), valor);

    printf("Array preenchido:\n");
    for (int i = 0; i < sizeof(array) / sizeof(array[0]); i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
void preenchervetor(int *vetor, int tamanho, int valor) {
    int *ptr = vetor;
    int *end = vetor + tamanho;

    while (ptr < end) {
        *ptr = valor;
        ptr++;
    }
}