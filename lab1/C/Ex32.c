#include<stdio.h>
/*Leia um número inteiro e imprima a soma do sucessor de seu triplo com o antecessor de seu
dobro.*/
int main()
{
  int num, sucessor, antecessor,total;
printf("Escreva um numero inteiro:");
scanf("%d", &num);
sucessor = (num +1 * 3);
antecessor = (num -1 *2);
total = sucessor + antecessor;
return 0;

}
