#include <stdio.h>
/*Receba o salário-base de um funcionário. Calcule e imprima o salário a receber, sabendo-se
que esse funcionário tem uma gratificação de 5% sobre o salário-base. Além disso, ele paga 7%
de imposto sobre o salário-base.
*/
int main()
{
  
  float salario,imposto, grat, salariototal;

  printf("Coloque o salario:R$");
  scanf("%f",&salario);

  grat = salario * 0.05;
  imposto = salario * 0.07;
  salariototal = salario + grat - imposto;
  
  printf("\nSalario total eh:R$%.2f",salariototal);
  return 0;
}
