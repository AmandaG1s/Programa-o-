#include<stdio.h>
/*Escreva um programa que contenha duas variáveis inteiras. Compare seus
endereços e exiba o maior endereço.*/
int main()
{
    int a;
    int b;

    int *pa;
    int *pb;

    pa = &a;
    pb = &b;

    printf("Escreva um numero inteiro: ");
    scanf("%d",&a);
    printf("Escreva um numero inteiro: ");
    scanf("%d",&b);
    //mostrar a posição que os ponteiros estão imprimindo!
    //printf("Ponteiro a %p e %p\n",pa,pb);
    //Não necessariamente entrará no if else, porém a coordenada aparecerá a maior

    if(*pa > *pb)
    { 
        printf("# A eh maior! #");
    }
    else if(*pb > *pa)
    {
        printf("# B eh maior! #");
    }


    return 0;
}