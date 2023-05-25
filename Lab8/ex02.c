#include<stdio.h>
/*Escreva um programa que declare um inteiro, um real e um char, e
ponteiros para inteiro, real e char. Associe as variáveis aos ponteiros (use
&). Modifique os valores de cada variável usando os ponteiros. Imprima os
valores das variáveis antes e após a modificação.*/

int main()
{
    int x;
    float y;
    char z;

    int *p1;
    float *p2;
    char *p3;
    
    p1 = &x;
    p2 = &y;
    p3 = &z;
    printf("Escreva o valor de inteiro: ");
    scanf("%d",&x);
    printf("Escreva o valor do conjunto real: ");
    scanf("%f",&y);
    printf("Escreva o valor de char: ");
    scanf(" %c",&z);

    printf("=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-==-=-=-=-=\n");

    printf("Conteudo apontado para x: %d\n",*p1);
    *p1 = 15;
    printf("Conteudo apontado para x: %d\n",*p1);

    printf("Conteudo apontado para y: %f\n",*p2);
    *p2 = 2.5;
    printf("Conteudo apontado para y: %f\n",*p2);

    printf("Conteudo apontado para z: %c\n",*p3);
    *p3 = 'a';
    printf("Conteudo apontado para z: %c\n",*p3);
    
    return 0;
}