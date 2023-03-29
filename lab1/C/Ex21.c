#include <stdio.h>
/*Leia um valor de massa em libras e apresente-o convertido em quilogramas. A fórmula de
conversão é: K = L*0.45, sendo K a massa em quilogramas e L a massa em libras.
*/
int main()
{
    float l,k;
    printf("Escreva o valor em libra");
    scanf("%f",&l);
    k = l*0.45;
    printf("Convecao para libra eh:%2f",k);
    return 0;
}
