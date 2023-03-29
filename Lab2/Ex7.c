#include<stdio.h>
#include<math.h>
/* Faça um programa que receba dois números e mostre o maior. Se por acaso, os dois números
forem iguais, imprima a mensagem: “Números iguais”
*/
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
    }
    if(num1<num2)
    {
      
       printf("\nNum2 eh maior que num1");
    }
     
    if(num1==num2)
    {
       printf("\nNumeros iguais");
    }
     
     
    
    
    return 0;
}