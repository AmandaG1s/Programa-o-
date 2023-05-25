#include <stdio.h>
/*Faça um programa que leia dois variáveis do tipo inteiro (A e B) e duas do
tipo ponteiro de inteiro apontando para essas variáveis. Utilizando ponteiros,
o programa deve retornar a soma do dobro dos dois números lidos. O dobro
de A na própria variável A e o dobro de B na própria variável B.*/

void dobrar(int *ptr) 
{
    *ptr = 2 * (*ptr);
}

int main() {
    int A, B;
    int *ptrA, *ptrB;

    printf("Digite o valor de A: ");
    scanf("%d", &A);

    printf("Digite o valor de B: ");
    scanf("%d", &B);

    ptrA = &A;
    ptrB = &B;

    dobrar(ptrA);
    dobrar(ptrB);

    int resultado = *ptrA + *ptrB;
    printf("A soma do dobro de A e B é: %d\n", resultado);

    return 0;
}