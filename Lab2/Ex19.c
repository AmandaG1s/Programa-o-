#include<stdio.h>
/* Faça um programa para verificar se um determinado número inteiro e divisível por 3 ou 5,
mas, não simultaneamente pelos dois.*/
int main()
{
    int num;
    printf("Escreva um valor qualquer: ");
    scanf("%d", &num);

    if(num % 2 == 0 || num % 3 == 0 || num % 5 == 0)
    {
        printf("Divisivel por 2, 3 ou 5.\n");
    }
    else
    {
        printf("Nao divisivel por 2, 3 e 5.\n");
    }
    return 0;
}   
