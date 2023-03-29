#include<stdio.h>
/*Escreva um programa que, dados dois números inteiros, mostre na tela o maior deles, assim
como a diferença existente entre ambos.*/
int main ()
{
    int num1,num2;
    printf ("Escreva um numero ");
    scanf ("%d",&num1);
    printf("Escreva um numero ");
    scanf ("%d",&num2);

    if(num1>num2)
    {
       printf("\nNum1 eh maior que num2"); 
       num2=num1-num2;
    printf("\nA diferenca dos numeros digitados: %d",num2);
    }
    else
    {
        printf("\nNum2 eh maior que num1");
     num1=num2-num1;
    printf("\nA diferenca dos numeros digitados: %d",num1);
    }
    return 0;
}