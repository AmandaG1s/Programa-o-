#include <stdio.h>
/* Faça um programa que leia o valor de um produto e imprima o valor com desconto, tendo
em vista que o desconto foi de 12%.*/
int main()
{
  float valor, desconto, valor_final;
  printf("Insira a valor do produto:");
  scanf("%f",&valor);
  desconto = valor * 0.12;
  valor_final = valor - desconto;
  
  printf("\nValor com o desconto sera: %.2f",valor_final);
return 0;

}
