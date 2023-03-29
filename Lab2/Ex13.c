#include<stdio.h>
/*Faça um algoritmo que calcule a média ponderada das notas de 3 provas. A primeira e a
segunda prova têm peso 1 e a terceira tem peso 2. Ao final, mostrar a média do estudante e
indicar se o estudante foi aprovado ou reprovado. A nota para aprovação deve ser igual ou
superior a 60 pontos*/
int main()
{
    float nota1,nota2,nota3,media;
    printf("Escreva a primeira nota:\n");
    scanf("%f",&nota1);
    printf("Escreva a segunda nota:\n");
    scanf("%f",&nota2);
    printf("Escreva a terceira nota:\n");
    scanf("%f",&nota3);
    media = nota1 * 1 + nota2 * 1 + nota3 * 2 / 1 + 1 + 2;
    if(media >= 60)
    {
    printf("\nO aluno foi aprovado!");
    }
    else
    {
    printf("\nO aluno foi reprovado!");
        
    }
 return 0;
}