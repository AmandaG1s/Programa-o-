#include <stdio.h>
/*. Escrever um programa que leia o código do produto escolhido do cardápio de uma
lanchonete e a quantidade. O programa deve calcular o valor a ser pago por aquele lanche.
Considere que a cada execução somente será calculado um pedido. O cardápio da lanchonete
segue o padrão abaixo:
Especificação Código Preço
Cachorro Quente 100 1,20
Bauru Simples 101 1,30
Bauru com Ovo 102 1,50
Hambúrguer 103 1,20
Cheeseburguer 104 1,70
Suco 105 2,20
Refrigerante 106 1,00*/
int main() {
    int codigo, quantidade;
    float preco;

    printf("Cardapio da lanchonete:\n");
    printf("Codigo 100 - Cachorro Quente - Preco: R$1,20\n");
    printf("Codigo 101 - Bauru Simples - Preco: R$1,30\n");
    printf("Codigo 102 - Bauru com Ovo - Preco: R$1,50\n");
    printf("Codigo 103 - Hamburguer - Preco: R$1,20\n");
    printf("Codigo 104 - Cheeseburguer - Preco: R$1,70\n");
    printf("Codigo 105 - Suco - Preco: R$2,20\n");
    printf("Codigo 106 - Refrigerante - Preco: R$1,00\n");

    printf("\nEscreva o codigo do produto desejado: ");
    scanf("%d", &codigo);

    switch (codigo) {
        case 100:
            preco = 1.20;
            printf("Produto escolhido: Cachorro Quente\n");
            break;
        case 101:
            preco = 1.30;
            printf("Produto escolhido: Bauru Simples\n");
            break;
        case 102:
            preco = 1.50;
            printf("Produto escolhido: Bauru com Ovo\n");
            break;
        case 103:
            preco = 1.20;
            printf("Produto escolhido: Hamburguer\n");
            break;
        case 104:
            preco = 1.70;
            printf("Produto escolhido: Cheeseburguer\n");
            break;
        case 105:
            preco = 2.20;
            printf("Produto escolhido: Suco\n");
            break;
        case 106:
            preco = 1.00;
            printf("Produto escolhido: Refrigerante\n");
            break;
        default:
            printf("Codigo invalido!\n");
            return 0;
    }

    printf("Escreva a quantidade desejada: ");
    scanf("%d", &quantidade);

    float valor_total = preco * quantidade;

    printf("Valor total a ser pago: R$%.2f\n", valor_total);

    return 0;
}
