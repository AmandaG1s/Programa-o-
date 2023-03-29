#include <stdio.h>
/*Uma empresa contrata um encanador a R$30,00 por dia. Faça um programa que solicite o
número de dias trabalhados pelo encanador e imprima a quantia líquida que deverá ser paga,
sabendo-se que são descontados 8% para imposto de renda.
*/
int main()
{
   int dia, quantia_liquida,imposto; 
   int dia = 30;
   int imposto = 0.8;
   printf("Dias trabalhados:");
   scanf("%f",dias);
   quantia_liquida = dias - imposto;
   return 0;     
}
