#include <stdio.h>
/*Uma empresa decide dar um aumento aos seus funcionários de acordo com uma tabela que
considera o salário atual e o tempo de serviço de cada funcionário. Os funcionários com menor
salário terão um aumento proporcionalmente maior do que os funcionários com um salário
maior, e conforme o tempo de serviço na empresa, cada funcionário irá receber um bônus
adicional de salário. Faça um programa que leia:
 o valor do salário atual do funcionário;
 o tempo de serviço desse funcionário na empresa (número de anos de trabalho na
empresa).
Use as tabelas abaixo para calcular o salário reajustado deste funcionário e imprima o valor do
salário final reajustado, ou uma mensagem caso o funcionário não tenha direito a nenhum
aumento.
Salário Atual Reajuste (%) Tempo de Serviço Bônus
Até 500,00 25% Abaixo de 1 ano Sem bônus
Até 1000,00 20% De 1 a 3 anos 100,00
Até 1500,00 15% De 4 a 6 anos 200,00
Até 2000,00 10% De 7 a 10 anos 300,00
Acima de 2000,00 Sem reajuste Mais de 10 anos 500,00
*/
int main() {
    float salario_atual, salario_reajustado;
    int tempo_servico, bonus;

    printf("Escreva o salario atual do funcionario: ");
    scanf("%f", &salario_atual);

    printf("Escreva o tempo de serviço do funcionario em anos: ");
    scanf("%d", &tempo_servico);

    if (salario_atual <= 500) {
        salario_reajustado = salario_atual * 1.25; // aumento de 25%
        bonus = 0; // sem bônus
    } else if (salario_atual <= 1000) {
        salario_reajustado = salario_atual * 1.20; 
        if (tempo_servico >= 1 && tempo_servico <= 3)
         {
            bonus = 100;
        }
         else
        {
            bonus = 0;
        }
    } else if (salario_atual <= 1500) 
    {
        salario_reajustado = salario_atual * 1.15; 
        if (tempo_servico >= 4 && tempo_servico <= 6) 
        {
            bonus = 200;
        } else {
            bonus = 0;
        }
    } 
    else if (salario_atual <= 2000) 
    {
        salario_reajustado = salario_atual * 1.10;
        if (tempo_servico >= 7 && tempo_servico <= 10) 
        {
            bonus = 300;
        } else {
            bonus = 0;
        }
    }
     else 
    {
        salario_reajustado = salario_atual; 
        if (tempo_servico > 10) {
            bonus = 500;
        } else {
            bonus = 0;
        }
    }

    if (salario_reajustado == salario_atual)
     {
        printf("Funcionario não tem direito a aumento.\n");
    } 
    else
     {
        salario_reajustado += bonus;
        printf("Salario final reajustado: R$ %.2f\n", salario_reajustado);
    }

    return 0;
}
