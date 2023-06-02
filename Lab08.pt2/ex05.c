#include <stdio.h>
/*Elabore um programa que receba duas strings digitadas pelo usuário e
verifique se a segunda string ocorre dentro da primeira. Use aritmética de
ponteiros para acessar os caracteres das strings.
*/

int main() {
    int array[5];
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
void preencherArray(int *array, int tamanho, int valor) {
    int *ptr = array;
    int *end = array + tamanho;

    while (ptr < end) {
        *ptr = valor;
        ptr++;
    }
}
