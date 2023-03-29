#include<stdio.h>
#include<math.h>
/*Faça um programa que leia um número e, caso ele seja positivo, calcule e mostre:
 O número digitado ao quadrado
 A raiz quadrada do número digitado*/
int main()
{
   float num;
   printf("Escreva um numero:");
   scanf("%f",&num);
   if(num>0)
   {
    printf("Numero ao quadrado eh:%.2f",num*=num);
    printf("\nA raiz quadrada eh:%.2f",sqrt(num));
   }
   return 0;
}