# include<stdio.h>
/*1. Escreva um programa que leia um número inteiro maior do que zero e devolva, na tela, a
soma de todos os seus algarismos. Por exemplo, ao número 251 corresponderá o valor 8 (2 + 5
+ 1). Se o número lido não for maior do que zero, o programa terminará com a mensagem:
“Número inválido”*/
int main()
{
	int numero,soma = 0,dig;
	
	printf("Digite um numero maior que 0: ");
	scanf("%d", &numero);

	if(numero > 0)
    {
		while(numero > 0)
        {
            dig = numero %10;
			soma += dig;
			numero /=  10;
		}
		printf("\nA soma de seus algarismos e: %d", soma);
	}
    else
    {
		printf("\nNumero Invalido!");
	}

	return 0;
}