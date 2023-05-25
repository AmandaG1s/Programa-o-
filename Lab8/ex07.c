#include <stdio.h>
/*Faça um programa que declare três variáveis do tipo inteiro e três do tipo
ponteiro de inteiro apontando para essas variáveis. Utilizando ponteiros, leia
três números e os imprima em ordem crescente. O programa deve
apresentar também o endereço de memória desses números.*/

int main() {
    int num1, num2, num3;
    int *ptr1, *ptr2, *ptr3;

    ptr1 = &num1;
    ptr2 = &num2;
    ptr3 = &num3;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    printf("Digite o terceiro numero: ");
    scanf("%d", &num3);

    printf("Os numeros digitados foram: %d, %d e %d\n", *ptr1, *ptr2, *ptr3);

    
    if (*ptr1 > *ptr2) {
        int temp = *ptr1;
        *ptr1 = *ptr2;
        *ptr2 = temp;
    }

    if (*ptr2 > *ptr3) {
        int temp = *ptr2;
        *ptr2 = *ptr3;
        *ptr3 = temp;
    }

    if (*ptr1 > *ptr2) {
        int temp = *ptr1;
        *ptr1 = *ptr2;
        *ptr2 = temp;
    }

    printf("Os numeros em ordem crescente sao: %d, %d e %d\n", *ptr1, *ptr2, *ptr3);

    printf("Endereço de memoria dos numeros:\n");
    printf("Numero 1: %p\n", (void *)&num1);
    printf("Numero 2: %p\n", (void *)&num2);
    printf("Numero 3: %p\n", (void *)&num3);

    return 0;
}
