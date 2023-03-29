#include <stdio.h>
#include <stdbool.h>
/*. Leia uma data de nascimento de uma pessoa fornecida através de três números inteiros: Dia,
Mês e Ano. Teste a validade desta data para saber se está é uma data válida. Teste se o dia
fornecido é um dia válido: dia > 0, dia  28 para o mês de fevereiro (29 se o ano for bissexto),
dia  30 em abril, junho, setembro e novembro, dia  31 nos outros meses. Teste a validade do
mês: mês > 0 e mês < 13. Teste a validade do ano: ano  ano atual (use uma constante definida
com o valor igual a 2022). Imprimir: “data válida” ou “data inválida” no final da execução do
programa.
*/
bool isBissexto(int ano) {
    return (ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0);
}

bool isDataValida(int dia, int mes, int ano)  
{
    if (ano > ANO_ATUAL) return false;

    if (mes < 1 || mes > 12) return false;

    if (dia < 1 || dia > 31) return false;

    if (mes == 2) {
        if (isBissexto(ano)) {
            if (dia > 29) return false;
        } else {
            if (dia > 28) return false;
        }
    } else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
        if (dia > 30) return false;
    }

    return true;
}

int main() {
    int dia, mes, ano;

    printf("Digite a data de nascimento no formato (dd mm aaaa): ");
    scanf("%d %d %d", &dia, &mes, &ano);

    if (isDataValida(dia, mes, ano)) {
        printf("Data válida.\n");
    } else {
        printf("Data inválida.\n");
    }

    return 0;
}
