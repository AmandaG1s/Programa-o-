#include <stdio.h>
#include <math.h>
/*. Calcule as raízes da equação de 2º grau.
Lembrando que:
𝑥 =
−𝑏 ± √
2𝑎
Onde
 = 𝑏
2 − 4𝑎𝑐
E ax2 + bx + c = 0 representa uma equação do 2º grau.
A variável a tem que ser diferente de zero. Caso seja igual, imprima a mensagem “Não é
equação de segundo grau”.
 Se  < 0, não existe real. Imprima a mensagem “Não existe raiz”.
 Se  = 0, existe uma raiz real. Imprima a raiz e a mensagem “Raiz única”.
 Se   0, imprima as duas raízes reais.*/
int main() 
{
    float a, b, c, delta, x1, x2;

    printf("Escreva o valor de a: ");
    scanf("%f", &a);

    if (a == 0) 
    {
        printf("Nao e equacao de segundo grau\n");
        return 0;
    }

    printf("Escreva o valor de b: ");
    scanf("%f", &b);

    printf("Escreva o valor de c: ");
    scanf("%f", &c);

    delta = pow(b, 2) - 4 * a * c;

    if (delta < 0) 
    {
        printf("Nao existe raiz\n");
    } else if (delta == 0)
     {
        x1 = -b / (2 * a);
        printf("Raiz unica: x = %.2f\n", x1);
    }
     else 
     {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("Raizes: x1 = %.2f, x2 = %.2f\n", x1, x2);
    }

    return 0;
}
