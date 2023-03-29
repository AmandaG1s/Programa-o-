#include <stdio.h>
/*Receba a altura do degrau de uma escada e a altura que o usuário deseja alcançar subindo
a escada. Calcule e mostre quantos degraus o usuário deverá subir para atingir seu objetivo.*/
int main()
{
 float dgr, al, qtd;
    printf("Coloque a altura do degrau em centimetros: ");
    scanf("%f", &dgr);
    printf("Qual eh a altura  para alcancar em metros:");
    scanf("%f", &al);
    qtd =  (dgr*100) / alt;
    printf("\nA quantidade de degraus para alcancar a altura sera:%.0f" , qtd);
    return 0;
}
