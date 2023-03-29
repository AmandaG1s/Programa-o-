#include <stdio.h>
#include <math.h>

int main()
 {
    int hora_chegada, min_chegada, hora_partida, min_partida;
    int duracao, horas_estacionamento;
    float valor_a_pagar;

    printf("Informe a hora e minuto de chegada (no formato hh:mm): ");
    scanf("%d:%d", &hora_chegada, &min_chegada);

    printf("Informe a hora e minuto de partida (no formato hh:mm): ");
    scanf("%d:%d", &hora_partida, &min_partida);

    duracao = (hora_partida - hora_chegada) * 60 + (min_partida - min_chegada);
    if (duracao < 0)
     {
        duracao += 24 * 60;  
    }

    
    horas_estacionamento = ceil(duracao / 60.0);
    if (horas_estacionamento <= 2) 
    {
        valor_a_pagar = horas_estacionamento * 1.0;
    } else if (horas_estacionamento <= 4)
     {
        valor_a_pagar = 2.0 + (horas_estacionamento - 2) * 1.4;
    } 
    else 
    {
        valor_a_pagar = 4.8 + (horas_estacionamento - 4) * 2.0;
    }
    printf("O valor a ser pago pelo estacionamento é de R$ %.2f\n", valor_a_pagar);

    return 0;
}
