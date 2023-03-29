#include <stdio.h>
#include <stdlib.h>
// Leia um número real e imprima a quinta parte deste número

int main()
{
    float b, quinta;
    puts("Escreva um numer: ");
    scanf("%f", &b);
    quinta = b / 5;
    
    printf("\nA quinta parte de um numero sera: %f\n", quinta);

    system("pause");
    return 0;

}
