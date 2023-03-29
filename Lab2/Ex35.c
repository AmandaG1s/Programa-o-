#include <stdio.h>
/*. Leia uma data e determine se ela é válida. Ou seja, verifique se o mês está entre 1 e 12, e
se o dia existe naquele mês. Note que Fevereiro tem 29 dias em anos bissextos, e 28 dias em
anos não bissextos.*/
int main() {
    int dia, mes, ano;
    int valido = 1; 

    printf("Escreva a data no formato DD/MM/AAAA: ");
    scanf("%d/%d/%d", &dia, &mes, &ano);

    
    if (mes < 1 || mes > 12)
    {
        valido = 0;
    }

    
    if (dia < 1)
 {
        valido = 0;
    } 
    else if (mes == 2) 
    { 
        if ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0)
         { 
            if (dia > 29) {
                valido = 0;
            }
        }
         else
         { 
            if (dia > 28)
            {
                valido = 0;
            }
        }
    } 
    else if (mes == 4 || mes == 6 || mes == 9 || mes == 11)
    { 
        if (dia > 30) 
        {
            valido = 0;
        }
    } 
    else 
    { 
        if (dia > 31) {
            valido = 0;
        }
    }

    // impressão do resultado
    if (valido) 
    {
        printf("Data valida\n");
    }
     else
    {
        printf("Data invalida\n");
    }

    return 0;
}
