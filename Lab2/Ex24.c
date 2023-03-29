#include <stdio.h>
/*Uma empresa vende o mesmo produto para quatro diferentes estados. Cada estado possui
uma taxa diferente de imposto sobre o produto (MG 7%; SP 12%; RJ 15%; MS 8%). Faça um
programa em que o usuário entre com o valor e o estado destino do produto e o programa
retorne o preço final do produto acrescido do imposto do estado em que ele será vendido. Se o
estado digitado não for válido, mostrar uma mensagem de erro.
*/
int main() {
    float preco;
    char estado[3];
    float imposto;

    printf("Digite o valor do produto: ");
    scanf("%f", &preco);

    printf("Digite o estado destino (MG, SP, RJ ou MS): ");
    scanf("%s", estado);

    if (estado[0] == 'M' && estado[1] == 'G')
     {
        imposto = 0.07;
    } else if (estado[0] == 'S' && estado[1] == 'P')
     {
        imposto = 0.12;
    } else if (estado[0] == 'R' && estado[1] == 'J') 
    {
        imposto = 0.15;
    } else if (estado[0] == 'M' && estado[1] == 'S') 
    {
        imposto = 0.08;
    } else 
    {
        printf("Estado invalido!\n");
        return 0;
    }

    float preco_final = preco * (1 + imposto);
    printf("Preco final: R$ %.2f\n", preco_final);

    return 0;
}
