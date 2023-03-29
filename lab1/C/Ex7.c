#include <stdio.h>
#include <stdlib.h>
/* Leia uma temperatura em graus Fahrenheit e apresente-a convertida em graus Celsius. A
fórmula de conversão é: C = 5.0*(F- 32.0)/9.0, sendo C a temperatura em Celsius e F a
temperatura em Fahrenheit.
*/
int main()
{
    float c, f;
   puts("Converter F para C");
  puts("Temperatura em f: > ");
  scarf("%f", &f);
  c = 5.0*(f- 32.0)/9.0 ;//converção
  printf("f em c: > %.2f\n", c);
  system("pause");
  return 0;
}
