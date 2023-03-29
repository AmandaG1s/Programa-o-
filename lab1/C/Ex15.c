#include <stdio.h>
#include <stdlib.h>
/* Leia um ângulo em radianos e apresente-o convertido em graus. A fórmula de conversão é:
G = R*180/, sendo G o ângulo em graus e R em radianos e  = 3.141592.*/
int main() 
{
    float g, r;
    const double p = 3.14;

    printf("Escreva o valor do angulo em radianos: ");
    scanf("%f", &r);

    g = r * 180/p;

    printf("\nO angulo convertido em graus eh: %.2f", g);
    system("pause");
    return 0;
}
