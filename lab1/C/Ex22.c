#include <stdio.h>
/*Leia um valor de comprimento em jardas e apresente-o convertido em metros. A fórmula de
conversão é: M = 0.91*J, sendo J o comprimento em jardas e M o comprimento em metros.
*/
int main() 
{
    float j, m;
    printf("Digite o comprimento em jardas: ");
    scanf("%f", &j);
    m = 0.91 * j;
    printf("O comprimento convertido em metros: %.2f",m);
    return 0;
}
