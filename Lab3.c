//Aluna:Amanda Gomes Da Silva-12221BCC016

Ex 1
#include <stdio.h>

int main() {
    int count = 0;
    int num = 1;
    
    while (count < 5) {
        if (num % 3 == 0) {
            printf("%d\n", num);
            count++;
        }
        num++;
    }
    
    return 0;
}
Ex 2
#include<stdio.h>
int main()
{
    int i;
    i = 1;
    for(i = 1;i<100;i++)
    {
       printf("%d,",i);
      i +=1;  
    }
    while(i <= 100)
    {
      printf("%d,",i);
      i +=1;
    }
    printf("Abaixo ira imprimir de 1 a 100\n");  
    do
    {
        printf("%d\n",i);  
        i++;    
    }
    while (i <= 100);
    return 0;
}
Ex 3 
#include 3
int main()
{
      int contador = 10;
      while(contador >= 1)
      {
        printf("%d \n", contador);
	 contador--;

      }
      printf("FIM!\n");
      return 0;
}
Ex 4
#include <stdio.h>

int main() {
    int num = 0;

    while (num <= 100000) {
        printf("%d\n", num);
        num += 1000;
    }

    return 0;
}
Ex 5
#include <stdio.h>

int main() {
    int i, num, soma = 0;

    for (i = 0; i < 10; i++) {
        printf("Digite o %do valor: ", i+1);
        scanf("%d", &num);
        soma += num;
    }

    printf("A soma dos 10 valores é: %d\n", soma);

    return 0;
}
Ex 6
#include <stdio.h>

int main() {
   int numeros[10];
   int soma = 0;
   
   for (int i = 0; i < 10; i++) {
      printf("Digite o %dº número: ", i+1);
      scanf("%d", &numeros[i]);
      soma += numeros[i];
   }
   
   float media = (float) soma / 10.0;
   printf("A média dos 10 números é %.2f\n", media);

   return 0;
}
Ex 7
#include <stdio.h>

int main() {
    int num, maior, menor;
    
    // leitura do primeiro número
    printf("Digite o 1o número: ");
    scanf("%d", &num);
    
    // inicialização das variáveis maior e menor
    maior = num;
    menor = num;
    
    // leitura dos demais números e comparação com o maior e menor
    for(int i = 2; i <= 10; i++) {
        printf("Digite o %do número: ", i);
        scanf("%d", &num);
        
        if(num > maior) {
            maior = num;
        }
        if(num < menor) {
            menor = num;
        }
    }
    
    // impressão do maior e menor valores lidos
    printf("O maior número lido foi %d\n", maior);
    printf("O menor número lido foi %d\n", menor);
    
    return 0;
}
Ex 8
#include <stdio.h>

int main() {
    int i, num, maior, menor;

    // Lê o primeiro número e inicializa as variáveis maior e menor com ele
    printf("Digite o 1o numero: ");
    scanf("%d", &num);
    maior = num;
    menor = num;

    // Lê os próximos 9 números e verifica se eles são maiores ou menores
    for (i = 2; i <= 10; i++) {
        printf("Digite o %do numero: ", i);
        scanf("%d", &num);
        
        if (num > maior) {
            maior = num;
        }
        
        if (num < menor) {
            menor = num;
        }
    }

    // Imprime o menor e o maior número lido
    printf("O menor numero digitado foi: %d\n", menor);
    printf("O maior numero digitado foi: %d\n", maior);

    return 0;
}
Ex 9
#include <stdio.h>

int main() {
    int n, i, num = 1;
    
    printf("Digite um número inteiro: ");
    scanf("%d", &n);
    
    printf("Os %d primeiros números naturais ímpares são: ", n);
    
    for (i = 1; i <= n; i++) {
        printf("%d ", num);
        num += 2;
    }
    
    return 0;
}
Ex 10
#include <stdio.h>

int main() {
    int i, soma = 0;
    
    for(i = 2; i <= 100; i += 2) {
        soma += i;
        if(i == 100) {
            printf("%d", i);
        } else {
            printf("%d + ", i);
        }
    }
    
    printf(" = %d\n", soma);
    
    return 0;
}
Ex 11
#include <stdio.h>

int main() {
    int n, i;
    
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &n);
    
    printf("Números naturais de 0 até %d:\n", n);
    for (i = 0; i <= n; i++) {
        printf("%d ", i);
    }
    
    return 0;
}
Ex 12
#include <stdio.h>

int main() {
    int num, soma = 0;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    printf("Divisores de %d: ", num);
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            printf("%d ", i);
            soma += i;
        }
    }
    printf("\nSoma dos divisores de %d: %d", num, soma);

    return 0;
}

Ex 13
#include <stdio.h>

int main() {
    int soma = 0;
    for (int i = 1; i < 1000; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            soma += i;
        }
    }
    printf("A soma dos números abaixo de 1000 que são múltiplos de 3 ou 5 é: %d\n", soma);
    return 0;
}
Ex 14
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int d1, d2, n;

    // Define a semente para a função rand()
    srand(time(NULL));

    // Lê o número de vezes que os dados serão lançados
    printf("Digite o número de vezes que os dados serão lançados: ");
    scanf("%d", &n);

    // Simula o lançamento dos dados n vezes
    for (int i = 1; i <= n; i++) {
        // Gera números aleatórios para os valores dos dados
        d1 = rand() % 6 + 1;
        d2 = rand() % 6 + 1;

        // Imprime os valores dos dados e a relação entre eles
        printf("Lançamento %d: d1 = %d, d2 = %d, ", i, d1, d2);
        if (d1 > d2) {
            printf("d1 > d2\n");
        } else if (d1 < d2) {
            printf("d1 < d2\n");
        } else {
            printf("d1 = d2\n");
        }
    }

    return 0;
}
Ex 15
#include <stdio.h>
#include <math.h>

int main() {
    float num;

    do {
        printf("Digite um valor positivo (ou 0/negativo para sair): ");
        scanf("%f", &num);

        if (num > 0) {
            printf("Quadrado: %.2f\n", pow(num, 2));
            printf("Cubo: %.2f\n", pow(num, 3));
            printf("Raiz Quadrada: %.2f\n", sqrt(num));
        }
    } while (num > 0);

    return 0;
}
Ex 16
#include <stdio.h>

int main() {
    int opcao;
    float num1, num2, resultado;

    do {
        printf("\nMenu de Opcoes:\n");
        printf("1 - Adicao\n");
        printf("2 - Subtracao\n");
        printf("3 - Multiplicacao\n");
        printf("4 - Divisao\n");
        printf("5 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("\nDigite o primeiro numero: ");
                scanf("%f", &num1);
                printf("Digite o segundo numero: ");
                scanf("%f", &num2);
                resultado = num1 + num2;
                printf("\nResultado da Adicao: %.2f\n", resultado);
                break;
            case 2:
                printf("\nDigite o primeiro numero: ");
                scanf("%f", &num1);
                printf("Digite o segundo numero: ");
                scanf("%f", &num2);
                resultado = num1 - num2;
                printf("\nResultado da Subtracao: %.2f\n", resultado);
                break;
            case 3:
                printf("\nDigite o primeiro numero: ");
                scanf("%f", &num1);
                printf("Digite o segundo numero: ");
                scanf("%f", &num2);
                resultado = num1 * num2;
                printf("\nResultado da Multiplicacao: %.2f\n", resultado);
                break;
            case 4:
                printf("\nDigite o primeiro numero: ");
                scanf("%f", &num1);
                printf("Digite o segundo numero: ");
                scanf("%f", &num2);
                if (num2 != 0) {
                    resultado = num1 / num2;
                    printf("\nResultado da Divisao: %.2f\n", resultado);
                } else {
                    printf("\nERRO: Impossivel dividir por zero!\n");
                }
                break;
            case 5:
                printf("\nSaindo...\n");
                break;
            default:
                printf("\nOpcao invalida! Tente novamente.\n");
                break;
        }
    } while (opcao != 5);

    return 0;
}
Ex 17
#include <stdio.h>

int main() {
    float altura_chico = 1.5, altura_ze = 1.1;
    int anos = 0;

    while (altura_ze <= altura_chico) {
        altura_chico += 0.02;
        altura_ze += 0.03;
        anos++;
    }

    printf("Serão necessários %d anos para que Zeh seja maior que Chico.\n", anos);

    return 0;
}
Ex 18
#include <stdio.h>

int main() {
    int ano_atual, ano_inicio = 1995;
    float salario = 2000.0, aumento = 0.015;

    printf("Digite o ano atual: ");
    scanf("%d", &ano_atual);

    for (int i = ano_inicio + 1; i <= ano_atual; i++) {
        aumento *= 2; // aumenta o dobro do ano anterior
        salario += salario * aumento; // aplica o aumento ao salário
    }

    printf("Salario atual: R$ %.2f", salario);

    return 0;
}
Ex 19
#include <stdio.h>

int main() {
    int saque, nota100, nota50, nota20, nota10, nota5, nota2, nota1;
    printf("Informe o valor do saque: ");
    scanf("%d", &saque);

    nota100 = saque / 100;
    saque = saque % 100;

    nota50 = saque / 50;
    saque = saque % 50;

    nota20 = saque / 20;
    saque = saque % 20;

    nota10 = saque / 10;
    saque = saque % 10;

    nota5 = saque / 5;
    saque = saque % 5;

    nota2 = saque / 2;
    saque = saque % 2;

    nota1 = saque;

    printf("Notas de 100: %d\n", nota100);
    printf("Notas de 50: %d\n", nota50);
    printf("Notas de 20: %d\n", nota20);
    printf("Notas de 10: %d\n", nota10);
    printf("Notas de 5: %d\n", nota5);
    printf("Notas de 2: %d\n", nota2);
    printf("Notas de 1: %d\n", nota1);

    return 0;
}
Ex 20
#include <stdio.h>
#include <stdbool.h>

#define LIMITE 2000000

int main() {
    bool numeros[LIMITE + 1];
    long long soma = 0;

    // Inicializa o vetor com todos os números como primos
    for (int i = 2; i <= LIMITE; i++) {
        numeros[i] = true;
    }

    // Executa o Crivo de Eratóstenes
    for (int i = 2; i <= LIMITE; i++) {
        if (numeros[i]) {
            soma += i;
            for (int j = i + i; j <= LIMITE; j += i) {
                numeros[j] = false;
            }
        }
    }

    printf("A soma de todos os numeros primos abaixo de %d eh: %lld", LIMITE, soma);

    return 0;
}
Ex 21
#include <stdio.h>

// Função que verifica se um número é primo
int eh_primo(int n) {
    if (n <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int a, b, cont = 0;
    
    printf("Digite dois numeros a e b (a < b): ");
    scanf("%d %d", &a, &b);
    
    // Laço de repetição para contar quantos números primos existem entre a e b
    for (int i = a; i <= b; i++) {
        if (eh_primo(i)) {
            cont++;
        }
    }
    
    printf("Existem %d numeros primos entre %d e %d\n", cont, a, b);
    
    return 0;
}
Ex 22
#include <stdio.h>

// função para verificar se um número é palíndromo
int is_palindrome(int num) {
    int reversed = 0;
    int temp = num;
    while (temp > 0) {
        reversed = 10 * reversed + (temp % 10);
        temp /= 10;
    }
    return (num == reversed);
}

int main() {
    int max_palindrome = 0;
    for (int i = 100; i <= 999; i++) {
        for (int j = 100; j <= 999; j++) {
            int product = i * j;
            if (is_palindrome(product) && product > max_palindrome) {
                max_palindrome = product;
            }
        }
    }
    printf("Maior palindromo: %d\n", max_palindrome);
    return 0;
}
Ex23
#include <stdio.h>

int main() {
    int n, i, j, num = 1;

    printf("Digite o número de linhas do Triângulo de Floyd: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        for(j = 1; j <= i; j++) {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }

    return 0;
}
