#include <stdio.h>
// Leia um valor inteiro em segundos, e imprima-o em horas, minutos e segundos
int main()
{
    int segu, h, m, s, restante;

    printf("Digite uma quantidade de segundos: ");
    scanf("%d", &segu);
    
    h = segu / 3600;
    resto = seg % 3600;
    m = restante / 60;
    s = restante % 60;
    printf("%d:%d:%d\n", h, m, s);
    return 0;
}
