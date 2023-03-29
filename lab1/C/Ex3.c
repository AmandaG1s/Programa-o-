#include <stdio.h>

//. Peça ao usuário para digitar três valores inteiros e imprima a soma deles.
int main()
{
int num1, num2, num3 = 0;
printf("Escreva o primeiro numero");
scanf("%d", &num1);

printf("Escreva o segundo numero");
scanf("%d", &num2);

printf("Escreva o terceiro numero");
scanf("%d", &num3);

printf("Soma: %d", num1+num2+num3);
system("pause");
return 0;

}
