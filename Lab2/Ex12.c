#include<stdio.h>
#include<math.h>
/* Ler um número inteiro. Se o número lido for negativo, escreva a mensagem “Número
inválido”. Se o número for positivo, calcular o logaritmo deste número.*/
int main()
{
 int num,rest;
 printf("Escreva um numero:");
 scanf("%d",&num);
 if(num>0)
 {
    rest = log10(num);
   printf("O logaritmo desse numero %d eh:%d",num,rest);
 }
 else
{
 printf("Numero invalido!");
}
return 0;
}