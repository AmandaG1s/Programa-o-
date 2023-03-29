#include<stdio.h>
// Faça um programa que receba dois números e mostre qual deles é o maior.
int main()
{
    float num1, num2;
    printf("Escreva um numeros:");
    scanf("%f",&num1);
    printf("Escreva um numeros:");
    scanf("%f",&num2);
    if(num1>num2)
    {
       printf("Num1 é maior que num2"); 
    }
    else
    {
        printf("Num2 é maior que num1");
    }
    return 0;
}