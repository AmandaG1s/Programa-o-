#include<stdio.h>
/*Leia a distância em Km e a quantidade de litros de gasolina consumidos por um carro em um
percurso, calcule o consumo em Km/l e escreva uma mensagem de acordo com a tabela abaixo:
CONSUMO (Km/l) MENSAGEM
menor que 8 Venda o carro!
entre 8 e 14 Econômico!
maior que 14 Super econômico!
*/
int main()
{
     float d,l,c;

     printf("digite a distancia percorrida em km: " );
     scanf("%f",&d);
     printf("digite quantos litros foram consumidos: " );
     scanf("%f",&l);

     c=d/l;

    if(c<8)
    {
    printf("Seu carro gasta muito!");
     }
     else if(c>8 && c<14)
    {
     printf("Seu carro eh economico");
    }
    else
    {
     printf("Super economico");
    }
    return 0;

         
}