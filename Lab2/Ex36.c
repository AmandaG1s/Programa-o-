#include <stdio.h>
/* Escreva um programa que, dado o valor da venda, imprima a comissão que deverá ser paga
ao vendedor. Para calcular a comissão, considere a tabela abaixo:
Venda mensal Comissão
Maior ou igual a R$100.000,00 R$700,00 + 16% das vendas
Menor que R$100.000,00 e maior ou igual a R$80.000,00 R$650,00 + 14% das vendas
Menor que R$80.000,00 e maior ou igual a R$60.000,00 R$600,00 + 14% das vendas
Menor que R$60.000,00 e maior ou igual a R$40.000,00 R$550,00 + 14% das vendas
Menor que R$40.000,00 e maior ou igual a R$20.000,00 R$500,00 + 14% das vendas
Menor que R$20.000,00 R$400,00 + 14% das vendas*/
int main() 
{
    float venda, comissao;
    
    printf("Escreva o valor da venda: ");
    scanf("%f", &venda);
    
    if (venda >= 100000.0) 
    {
        comissao = 700.0 + 0.16 * venda;
    } 
    else if (venda >= 80000.0)
     {
        comissao = 650.0 + 0.14 * venda;
    } else if (venda >= 60000.0) 
    {
        comissao = 600.0 + 0.14 * venda;
    } 
    else if (venda >= 40000.0)
     {
        comissao = 550.0 + 0.14 * venda;
    } 
    else if (venda >= 20000.0) 
    {
        comissao = 500.0 + 0.14 * venda;
    }
     else 
    {
        comissao = 400.0 + 0.14 * venda;
    }
    
    printf("Comissao: R$ %.2f\n", comissao);
    
    return 0;
}
