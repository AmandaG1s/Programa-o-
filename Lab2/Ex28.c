#include <stdio.h>
#include <math.h>
/*. Faça um programa que leia três números inteiros positivos e efetue o cálculo de uma das
seguintes médias de acordo com um valor numérico digitado pelo usuário:
(a) Geométrica: √𝑥 ∗ 𝑦 ∗ 𝑧
3
(b) Ponderada: [(1∗𝑥)+(2∗𝑦)+(3∗𝑧)]
3
(c) Harmônica:
1
1
𝑥
+
1
𝑦
+
1
𝑧
(d) Aritmética:
(𝑥+𝑦+𝑧)
3*/
int main() {
    int x, y, z, opcao;
    float media;

    printf("Digite tres numeros inteiros positivos:\n");
    scanf("%d %d %d", &x, &y, &z);

    printf("\nEscolha uma opcao de media:\n");
    printf("1 - Geometrica\n");
    printf("2 - Ponderada\n");
    printf("3 - Harmonica\n");
    printf("4 - Aritmetica\n");
    scanf("%d", &opcao);
    switch(opcao) {
        case 1:
            media = cbrt(x * y * z);
            printf("\nMedia Geometrica: %.2f", media);
            break;
        case 2:
            media = (1*x + 2*y + 3*z) / 3.0;
            printf("\nMedia Ponderada: %.2f", media);
            break;
        case 3:
            media = 1 / (1/x + 1/y + 1/z);
            printf("\nMedia Harmonica: %.2f", media);
            break;
        case 4:
            media = (x + y + z) / 3.0;
            printf("\nMedia Aritmetica: %.2f", media);
            break;
        default:
            printf("\nOpcao invalida.");
    }

    return 0;
}
