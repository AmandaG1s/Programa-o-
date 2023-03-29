#include<stdio.h>
/*Usando switch, escreva um programa que leia um inteiro entre 1 e 12 e imprima o mês
correspondente a este número. Isto é, janeiro se 1, fevereiro se 2, e assim por diante.*/
int main()
{
    int mes;

	printf("Digite um Numero para saber o Mes: ");
	fflush(stdout);//Necessário para Bug do eclipse em Windows
	scanf("%d", &mes);

	//Inicio switch case

	switch(mes){

	case 1:
		printf("\nJaneiro!");
		break;

	case 2:
		printf("\nFevereiro!");
		break;

	case 3:
		printf("\nMarco!");
		break;

	case 4:
		printf("\nAbril!");
		break;

	case 5:
		printf("\nMaio!");
		break;

	case 6:
		printf("\nJunho!");
		break;

	case 7:
		printf("\nJulho!");
		break;

	case 8:
		printf("\nAgosto!");
		break;

	case 9:
		printf("\nSetembro!");
		break;

	case 10:
		printf("\nOutubro!");
		break;

	case 11:
		printf("\nNovembro!");
		break;

	case 12:
		printf("\nDezembro!");
		break;

	default :
		printf("\nO Numero digitado e Invalido!\n");
        break;
	}

	return 0;
}