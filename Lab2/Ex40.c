#include <stdio.h>
/*O custo ao consumidor de um carro novo é a soma do custo de fábrica, da comissão do
distribuidor, e dos impostos. A comissão e os impostos são calculados sobre o custo de fábrica,
de acordo com a tabela abaixo. Leia o custo de fábrica e escreva o custo ao consumidor.
CUSTO DE FÁBRICA % DO DISTRIBUIDOR % DOS IMPOSTOS
até R$12.000,00 5 isento
entre R$12.000,00 e R$25.000,00 10 15
acima de R$25.000,00 15 20*/
int main() {
    float custo_fabrica, comissao, impostos, custo_consumidor;

    printf("Escreva o custo de fabrica do carro: ");
    scanf("%f", &custo_fabrica);

    if (custo_fabrica <= 12000) {
        comissao = custo_fabrica * 0.05;
        impostos = 0;
    } else if (custo_fabrica <= 25000) {
        comissao = custo_fabrica * 0.1;
        impostos = custo_fabrica * 0.15;
    } else {
        comissao = custo_fabrica * 0.15;
        impostos = custo_fabrica * 0.2;
    }

    custo_consumidor = custo_fabrica + comissao + impostos;

    printf("O custo ao consumidor é: R$%.2f", custo_consumidor);

    return 0;
}
