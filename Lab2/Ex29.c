#include<stdio.h>
#include <time.h>
/*. Faça uma prova de matemática para crianças que estão aprendendo a somar números
inteiros menores do que 100. Escolha números aleatórios entre 1 e 100, e mostre na tela a
pergunta: qual é a soma de a + b, onde a e b são os números aleatórios. Peça a resposta. Faça
cinco perguntas ao aluno, e mostre para ele as perguntas e as respostas corretas, além de
quantas vezes o aluno acertou.*/

int main() 
{
    int a, b, resposta, acertos = 0;
    srand(time(NULL));

    for (int i = 0; i < 5; i++)
     {
        a = rand() % 100 + 1;
        b = rand() % 100 + 1;

        
        printf("Qual é a soma de %d + %d? ", a, b);
        scanf("%d", &resposta);
        if (resposta == a + b)
        {
            printf("Resposta correta!\n");
            acertos++;
        }
        else
        {
            printf("Resposta incorreta. A resposta correta é %d.\n", a + b);
        }
    }
    printf("Você acertou %d questões de 5.\n", acertos);

    return 0;
}