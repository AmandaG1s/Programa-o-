#include <stdio.h>
/*Leia um valor de comprimento em centímetros e apresente-o convertido em polegadas. A
fórmula de conversão é: P = C/2.54, sendo C o comprimento em centímetros e P o comprimento
em polegadas*/
int main()

{
 float c, p;
    printf("Escreva o valor em polegadas: ");
    scanf("%f", &c);
    p = c / 2.54;
    printf("\n O valor convertido em centimetros eh: %.2fcm", p);
    return 0;
}
