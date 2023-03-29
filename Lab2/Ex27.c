#include<stdio.h>
/*Escreva um programa que, dada a idade de um nadador, classifique-o em uma das seguintes
categorias:
Categoria Idade
Infantil A
Infantil B
Juvenil A
Juvenil B
Sênior
5 a 7
8 a 10
11 a 13
14 a 17
maiores de 18 anos*/
int main()
{
    int idade;
    printf("Qual a sua idade?");
    scanf("%d",&idade);
    if(idade > 5 && idade <7 )
    {
        printf("\nInfantil A");
    }
    if(idade > 8 && idade <10 )
    {
        printf("\nInfantil B");
    }
    if(idade > 11 && idade <13 )
    {
        printf("\nJuvenil A");
    }
    if(idade > 14 && idade <17 )
    {
        printf("\nJuvenil B");
    }
    if(idade > 18 )
    {
        printf("\nSenior");
    }
    return 0;
}