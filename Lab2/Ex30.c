#include<stdio.h>
// Faça um programa que receba três números e mostre-os em ordem crescente
int main()
{
    int a,b,c;
    printf("Escreva o primeiro numero:");
    scanf("%d",&a);
     printf("Escreva o segundo numero:");
    scanf("%d",&b);
     printf("Escreva o terceiro numero: ");
    scanf("%d",&c);
    printf("Em ordem crescente");
    if(a < b && b < c)
    {
        printf("%d %d %d",a,b,c);
    }
    else if (a<c && c<b)
    {
         printf("%d %d %d",a,c,b);
    }
    else if (b<a && a<c)
    {
         printf("%d %d %d",b,a,c);
    }
    else if (b<c && a<b)
    {
         printf("%d %d %d",b,c,a);
    }
    else if (c<a && a<b)
    {
         printf("%d %d %d",c,a,b);
    }
    else
    {
     printf("%d %d %d",c,b,a);
    }
    return 0;
    
}