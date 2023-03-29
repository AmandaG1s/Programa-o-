#include<stdio.h>
/* Leia o salário de um trabalhador e o valor da prestação de um empréstimo. Se a prestação for
maior que 20% do salário imprima: “Empréstimo não concedido”, caso contrário imprima:
“Empréstimo concedido”
*/
int main()
{
   float salario,valor_prestacao,percentual;
   printf("Quanto eh o valor do salario:");
   scanf("%f",&salario);
   printf("Quanto eh o valor da parcela:");
   scanf("%f",&valor_prestacao);
   percentual = salario * 0.2;
   if(valor_prestacao <= percentual)
   {
   printf("\nEmprestimo concedido");
   }
   else
   {
    printf("\nEmprestimo nao concedido");
   }
   return 0;
}