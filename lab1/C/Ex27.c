#include <stdio.h>
/*Leia um valor de área em hectares e apresente-o convertido em metros quadrados m2
. A
fórmula de conversão é: M = H*10000, sendo M a área em metros quadrados e H a área em
hectares.*/
int main() 
{
    float h, m;
    printf("Escreva a area em m");
    scanf("%f", &m);
    m = h * 10000;
    printf("A area em hectares eh: %.2f",m);
    return 0;
}
