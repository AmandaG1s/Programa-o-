#include <stdio.h>
#include <stdlib.h>
/*Leia uma velocidade em km/h (quilômetros por hora) e apresente-a convertida em m/s
(metros por segundo). A fórmula de conversão é: M = K/3.6, sendo K a velocidade em km/h e M
em m/s.*/

int main()
{
  float K, M;
  printf("Insira a velocidade quilometros por hora : ");
  scanf("%f", &K);
  M = K/ 3.6;
  printf("\nVlocidade em quilomentros por hora: %.2f", K);
  system("pause");
  return 0;

  
}
