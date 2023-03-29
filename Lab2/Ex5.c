#include<stdio.h>
// Faça um programa que receba um número inteiro e verifique se este número é par ou ímpar
int main()
{
    int num;
    printf("Escreva um numero:");
    scanf("%d",&num);
    if (num % 2 == 0) 
    {
    printf("O numero eh par");
    }
 else 
{
    puts("O numero é impar");
}
return 0;
}