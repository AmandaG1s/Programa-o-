#include<stdio.h>
#include <math.h>
/*Leia a idade e o tempo de serviço de um trabalhador e escreva se ele pode ou não se
aposentar. As condições para aposentadoria são
 Ter pelo menos 65 anos;
 Ou ter trabalhado pelo menos 30 anos;
 Ou ter pelo menos 60 anos e trabalhado pelo menos 25 anos.*/
int main()
{
   int idade;
   float tempo_trabalho;

   printf("Insira a sua idade:");
   scanf("%d",&idade);
   printf("Quanto tempo de servico voce tem?");
   scanf("%f",&tempo_trabalho);
   if((idade >= 65)||(tempo_trabalho >= 30)||(idade ==60 && tempo_trabalho >= 25) )
   {
    printf("Voce esta apto a aposentar!");
   }
   else
   {
    printf("Voce ainda nao pode se aposentar!");
   }
   return 0;
}