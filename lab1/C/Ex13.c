#include <stdio.h>
#include <stdlib.h>
/*Leia uma distância em quilômetros e apresente-a convertida em milhas. A fórmula de
conversão é: M = K/1.61, sendo K a distância em quilômetros e M em milhas.*/

int main()
{
    float K, M;
    printf("Insira o valor em milhas:");
    scanf("%f", &K);
    M = M / 1.61;
    printf("\nA distancia convertida em milhas: %.2f", M);
    system("pause");
    return 0;
}
