#include<stdio.h>
/*Determine se um determinado ano lido é bissexto. Sendo que um ano é bissexto se for
divisível por 400 ou se for divisível por 4 e não for divisível por 100. Por exemplo: 1988, 1992,
1996.
*/
int main()
{
 int ano;
printf("Digite o Ano q deseja consultar\n");
scanf("%i",&ano);
if (ano%400==0 || ano%4==0 && ano%100!=0)
{
printf("%i,eh ano bissexto!",ano);
}
else
{
printf ("%i, nao eh ano bissexto!", ano);
}
return 0;
}
  
