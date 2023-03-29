#include<stdio.h>
/*0. Faça um programa que receba a altura e o sexo de uma pessoa e calcule e mostre seu peso
ideal, utilizando as seguintes fórmulas (onde h corresponde à altura):
 Homens: (72,7 * h) – 58,0
 Mulheres: (62,1 * h) – 44,7*/
int main()
{
    char sexo;
    float h,resultado;
    printf("Qual o seu sexo?");
    scanf("%c",&sexo);
    
    printf("Qual a sua altura?");
    scanf("%f",&h);
    if(sexo == 'F')
    {
        resultado = ((62.1*h)-44.7);
    }
    else if(sexo == 'M')
    {
       resultado = ((72.7*h)-58.0);
    }
     printf("O seu peso ideal eh:%f\n",resultado);
    return 0;
   
   

}