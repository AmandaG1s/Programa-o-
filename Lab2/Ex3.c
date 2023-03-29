#include<stdio.h>
#include<math.h>
/*. Leia um número real. Se o número for positivo imprima a raiz quadrada. Do contrário, imprima
o número ao quadrado.*/
int main()
{
 float numR;
 printf("Escreva um numero:");
 scanf("%f",&numR);
 if(numR>0)
 {
   printf("A raiz quadrada eh %.2f",sqrt(numR)); 
 }
 else
 {
   printf("O numero ao quadrado  eh %.2f",numR *= numR); 
 }
 return 0;
}
