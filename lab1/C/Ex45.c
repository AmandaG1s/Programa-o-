#include <stdio.h>
/*Faça um programa para converter uma letra maiúscula em letra minúscula. Use a tabela
ASCII para resolver o problema.*/
int main()
{
char letra;
    printf("Escreva uma letra maiuscula: ");
    scanf("%c", &letra);
    letra = toupper(letra);
    printf("\nLetra em minuscula: %c " , letra);
    return 0;
}
