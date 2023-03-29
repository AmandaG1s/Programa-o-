#include<stdio.h>
/* Faça um programa que calcule e mostre a área de um trapézio. Sabe-se que:
𝐴 =
(basemaior + basemenor) ∗ altura
2
*/
int main()
{
   float area,baseM,basem,altura;
   printf("De o valor da base maior:");
   scanf("%f",&baseM);
   printf("De o valor da base menor:");
   scanf("%f",&basem);
   printf("De o valor da altura:");
   scanf("%f",&altura);
   area = (baseM + basem) * altura / 2;
   printf("O valor da area do trapezio sera:%.f",area);
   return 0;

}