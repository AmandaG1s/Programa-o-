#include <stdio.h>
/*Três amigos jogaram na loteria. Caso eles ganhem, o prêmio deve ser repartido
proporcionalmente ao valor que cada deu para a realização da aposta. Faça um programa que
leia quanto cada apostador investiu, o valor do prêmio, e imprima quanto cada um ganharia do
prêmio com base no valor investido.
*/
int main()
{
float amg1, amg2, amg3, vlrarre;
float premio = 999.999;
float pct1, pct2, pct3;
    printf("\nValor aposta amigo 1: ");
    scanf("%f", &amg1);
    printf("\nValor aposta amigo 2: ");
    scanf("%f", &amg2);
    printf("\nValor aposta amigo 3: ");
    scanf("%f", &amg3);

    vlrarre = amg1 + amg2 + amg3;
    printf("\nValor arrecadado para aposta: %.2f" , vlrarre);
   
    printf("\nO valor do premio eh: %.3f" , premio);
 
    pct1 = (amg1 * 100)/vlrarre;
    pct2 = (amg2 * 100)/vlrarre;
    pct3 = (amg3 * 100)/vlrarre;
    
    printf("\nAmigo 1 apostou: %.2f porcento do total arrecadado.", pct1);
    printf("\nAmigo 2 apostou: %.2f porcento do total arrecadado.", pct2);
    printf("\nAmigo 3 apostou: %.2f porcento do total arrecadado.", pct3);
    printf("\nAmigo 1 recebera: R$%.2f.", premio * pct1/100);
    printf("\nAmigo 2 recebera: R$%.2f.", premio * pct2/100);
    printf("\nAmigo 3 recebera: R$%.2f.", premio * pct3/100);
    return 0;
}
