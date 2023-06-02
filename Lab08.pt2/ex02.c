#include <stdio.h>
/*Crie um programa que contenha uma matriz de float contendo 3 linhas e 3
colunas. Utilizando aritmética de ponteiro, imprima o endereço de cada
posição dessa matriz.*/
int main() 
{
    int linha,coluna;
    float matriz[3][3] = 
    {
        {4.9, 5.9, 6.9},
        {4.8, 5.8, 6.8},
        {4.7, 5.7, 6.7}
    };
    float *ponteiro = &matriz[0][0]; 

    for (int linha = 0; linha < 3; linha++) 
    {
        for (int coluna = 0; coluna < 3; coluna++) 
        {
            printf("Endereco do elemento [%d][%d]: %p\n", linha, coluna, ponteiro);
            ponteiro++; 
        }
    }

    return 0;
}