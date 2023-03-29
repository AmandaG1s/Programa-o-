#include<stdio.h>
/*A nota final de um estudante é calculada a partir de três notas atribuídas entre o intervalo
de 0 até 10, respectivamente, a um trabalho de laboratório, a uma avaliação semestral e a um
exame final. A média das três notas mencionadas anteriormente obedece aos pesos: Trabalho
de Laboratório: 2; Avaliação Semestral: 3; Exame Final: 5. De acordo com o resultado, mostre na
tela se o aluno está reprovado (média entre 0 e 2,9), de recuperação (entre 3 e 4,9) ou se foi
aprovado. Faça todas as verificações necessárias.*/
int main()
{
    float trabLabo;
	float avaStral;
	float exaFinal;
	float mediaPond;

	printf("Digite a Nota do Trabalho de Laboratorio:");
	scanf("%f", &trabLabo);

	printf("Digite a Nota da Avaliacao Semestral:");
	scanf("%f", &avaStral);

	printf("Digite a Nota do Exame Final:");
	scanf("%f", &exaFinal);

	mediaPond = ((trabLabo * 2) + (avaStral * 3) + (exaFinal * 5)) / (2 + 3 + 5);

	if(mediaPond >= 0 && mediaPond <= 2.9)
    {
		printf("\nAluno Reprovado!!!");
	}
    else if(mediaPond >= 3 && mediaPond <= 4.9)
    {
		printf("\nAluno em Recuperacao!!!");
	}
    else if(mediaPond > 5)
    {
		printf("\nAluno Aprovado!!!");
	}
    else
    {
		printf("\nNota Invalida!!!");
	}

	return 0;
}