#include<stdio.h>
#include<math.h>

/*. Leia um número fornecido pelo usuário. Se esse número for positivo, calcule a raiz quadrada
do número. Se o número for negativo, mostre uma mensagem dizendo que o número é inválido.*/

int main()
{
int num;
printf("Escreva um numero:");
scanf("%d",&num);
if(num >=0)
{
  printf("A raiz quadrada eh %.2f",sqrt(num));//%.2f significa para quantas casas decimais 
  
}
else
{
    printf("Numero eh invalido");
}

return 0;
}