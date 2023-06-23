//Amanda Gomes-12221BCC016


Ex 1
Crie um programa que:
a) Aloque dinamicamente um array de 5 números inteiros;
b) Peça para o usuário digitar os 5 números no espaço alocado;
c) Mostre na tela os 5 números;
d) Libere a memória alocada.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int* numeros = (int*)malloc(5 * sizeof(int));

    if (numeros == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    printf("Digite 5 números inteiros:\n");

    for (int i = 0; i < 5; i++) {
        scanf("%d", &numeros[i]); 

    printf("Os números digitados foram:\n");

    for (int i = 0; i < 5; i++) {
        printf("%d ", numeros[i]); 
    }

    printf("\n");

    free(numeros); // liberando a memória alocada

    return 0;
}
Ex2
Faça um programa que leia do usuário o tamanho de um vetor a ser lido
e faça a alocação dinâmica de memória. Em seguida, leia do usuário
seus valores e imprima o vetor lido.
#include <stdio.h>
#include <stdlib.h>

int main() {
    int tamanho;
    int* vetor;

    
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    
    vetor = (int*) malloc(tamanho * sizeof(int));

    
    if (vetor == NULL) {
        printf("Erro na alocação de memória.\n");
        return 1;
    }

    
    printf("Digite os valores do vetor:\n");
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &vetor[i]);
    }

    
    printf("Vetor lido:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    
    free(vetor);

    return 0;
}
Ex3
Faça um programa que leia do usuário o tamanho de um vetor a ser lido
e faça a alocação dinâmica de memória. Em seguida, leia do usuário
seus valores e mostre quantos dos números são pares e quantos são
ímpares.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int tamanho;
    int *vetor;
    int i, pares = 0, impares = 0;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    
    vetor = (int*) malloc(tamanho * sizeof(int));

    if (vetor == NULL) {
        printf("Erro ao alocar memória.");
        return 1;
    }

    printf("Digite os valores do vetor:\n");

    for (i = 0; i < tamanho; i++) {
        scanf("%d", &vetor[i]);

        if (vetor[i] % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
    }

    printf("Quantidade de números pares: %d\n", pares);
    printf("Quantidade de números ímpares: %d\n", impares);

    
    free(vetor);

    return 0;
}

Ex4
Faça um programa que receba do usuário o tamanho de uma string e
chame uma função para alocar dinamicamente essa string. Em seguida,
o usuário deverá informar o conteúdo dessa string. O programa imprime
a string sem suas vogais.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char* alocarString(int tamanho) {
    char* str = (char*)malloc((tamanho + 1) * sizeof(char));
    return str;
}


void removerVogais(char* str) {
    int i, j;
    int tamanho = strlen(str);

    for (i = 0, j = 0; i < tamanho; i++) {
        char ch = str[i];

        // Verifica se o caractere atual não é uma vogal (maiúscula ou minúscula)
        if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u' &&
            ch != 'A' && ch != 'E' && ch != 'I' && ch != 'O' && ch != 'U') {
            str[j] = ch;
            j++;
        }
    }

    str[j] = '\0';  

int main() {
    int tamanho;
    char* str;

    printf("Digite o tamanho da string: ");
    scanf("%d", &tamanho);

   
    str = alocarString(tamanho);

    if (str == NULL) {
        printf("Erro ao alocar memória.");
        return 1;
    }

    printf("Digite o conteúdo da string: ");
    scanf(" %[^\n]", str);

   
    removerVogais(str);

    printf("String sem vogais: %s\n", str);

    free(str);

    return 0;
}
ex5
Faça um programa que leia um número N e:
a) Crie dinamicamente e leia um vetor de inteiro de N posições;
b) Leia um número inteiro X e conte e mostre os múltiplos desse número
que existem no vetor.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, *vetor, X, i, cont = 0;

    printf("Digite o valor de N: ");
    scanf("%d", &N);

    vetor = (int*)malloc(N * sizeof(int));

    if (vetor == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    printf("Digite os elementos do vetor:\n");
    for (i = 0; i < N; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("Digite o valor de X: ");
    scanf("%d", &X);

    printf("Múltiplos de %d no vetor:\n", X);
    for (i = 0; i < N; i++) {
        if (vetor[i] % X == 0) {
            printf("%d ", vetor[i]);
            cont++;
        }
    }

    if (cont == 0) {
        printf("Nenhum múltiplo encontrado.\n");
    }

    free(vetor);

    return 0;
}
Ex6
Faça um programa que simule a memória de um computador: o usuário
irá especificar o tamanho da memória, ou seja, quantos bytes serão
alocados do tipo inteiro. Para tanto, a memória solicitada deve ser um
valor múltiplo do tamanho do tipo inteiro. Em seguida, o usuário terá 2
opções: inserir um valor em uma determinada posição ou consultar o
valor contido em uma determinada posição. A memória deve iniciar com
todos os dados zerados.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *memoria = NULL;
    int tamanho_memoria = 0;
    int tamanho_inteiro = sizeof(int);
    int opcao, posicao, valor;

    printf("Digite o tamanho da memória (em bytes): ");
    scanf("%d", &tamanho_memoria);

   
    if (tamanho_memoria % tamanho_inteiro != 0) {
        printf("O tamanho da memória deve ser um múltiplo do tamanho do tipo inteiro.\n");
        return 1;
    }

    
    memoria = (int *)calloc(tamanho_memoria / tamanho_inteiro, sizeof(int));

    while (1) {
        printf("\nEscolha uma opção:\n");
        printf("1. Inserir valor em uma posição\n");
        printf("2. Consultar valor em uma posição\n");
        printf("3. Sair\n");
        printf("Opção: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            printf("Digite a posição: ");
            scanf("%d", &posicao);

            if (posicao < 0 || posicao >= tamanho_memoria / tamanho_inteiro) {
                printf("Posição inválida.\n");
                continue;
            }

            printf("Digite o valor: ");
            scanf("%d", &valor);

            memoria[posicao] = valor;
            printf("Valor %d inserido na posição %d.\n", valor, posicao);
        } else if (opcao == 2) {
            printf("Digite a posição: ");
            scanf("%d", &posicao);

            if (posicao < 0 || posicao >= tamanho_memoria / tamanho_inteiro) {
                printf("Posição inválida.\n");
                continue;
            }

            valor = memoria[posicao];
            printf("Valor contido na posição %d: %d\n", posicao, valor);
        } else if (opcao == 3) {
            break;
        } else {
            printf("Opção inválida.\n");
        }
    }

    free(memoria);

    return 0;
}
Ex7
Escreva um programa que leia primeiro os 6 números gerados pela
loteria e depois os 6 números do seu bilhete. O programa então compara
quantos números o jogador acertou. Em seguida, ele aloca espaço para
um vetor de tamanho igual a quantidade de números corretos e guarda
os números corretos nesse vetor. Finalmente, o programa exibe os
números sorteados e os seus números corretos.
#include <stdio.h>
#include <stdlib.h>

int main() {
    int numerosSorteados[6];
    int numerosBilhete[6];
    int numerosCorretos[6];
    int quantidadeCorretos = 0;
  
    printf("Digite os 6 números sorteados:\n");
    for (int i = 0; i < 6; i++) {
        scanf("%d", &numerosSorteados[i]);
    }
  
    printf("Digite os 6 números do seu bilhete:\n");
    for (int i = 0; i < 6; i++) {
        scanf("%d", &numerosBilhete[i]);
    }
  
    // Comparar os números sorteados com os números do bilhete
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            if (numerosSorteados[i] == numerosBilhete[j]) {
                numerosCorretos[quantidadeCorretos] = numerosSorteados[i];
                quantidadeCorretos++;
                break;
            }
        }
    }
  
    printf("Números sorteados: ");
    for (int i = 0; i < 6; i++) {
        printf("%d ", numerosSorteados[i]);
    }
  
    printf("\nNúmeros corretos: ");
    for (int i = 0; i < quantidadeCorretos; i++) {
        printf("%d ", numerosCorretos[i]);
    }
  
    printf("\n");
  
    return 0;
}
Ex8
Faça um programa para armazenar em memória um vetor de dados
contendo 1500 valores do tipo int, usando a função de alocação
dinâmica de memória CALLOC:
a) Faça um loop e verifique se o vetor contém realmente os 1500
valores inicializados com zero (conte os 1500 zeros do vetor);
b) Atribua para cada elemento do vetor o valor do seu índice junto a
este vetor;
c) Exibir na tela os 10 primeiros e os 10 últimos elementos do vetor.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int tamanho = 1500;
    int* vetor = (int*)calloc(tamanho, sizeof(int));
  
    int contadorZeros = 0;
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] == 0) {
            contadorZeros++;
        }
    }
  
    printf("Quantidade de zeros no vetor: %d\n", contadorZeros);
  
    
    for (int i = 0; i < tamanho; i++) {
        vetor[i] = i;
    }
  
   
    printf("Primeiros 10 elementos do vetor:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
  
    
    printf("Últimos 10 elementos do vetor:\n");
    for (int i = tamanho - 10; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
  
    
    free(vetor);
  
    return 0;
}
Ex9
Faça um programa que leia uma quantidade qualquer de números
armazenando-os na memória e pare a leitura quando o usuário entrar
um número negativo. Em seguida, imprima o vetor lido. Use a função
REALLOC.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int tamanhoInicial = 5;
    int quantidade = 0;
    int* vetor = (int*)malloc(tamanhoInicial * sizeof(int));
    int numero;

    printf("Digite os números (digite um número negativo para parar):\n");

    while (1) {
        scanf("%d", &numero);
        
        if (numero < 0) {
            break;
        }

        vetor[quantidade] = numero;
        quantidade++;

        if (quantidade == tamanhoInicial) {
            tamanhoInicial *= 2;
            vetor = (int*)realloc(vetor, tamanhoInicial * sizeof(int));
        }
    }

    printf("Vetor lido:\n");
    for (int i = 0; i < quantidade; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    free(vetor);

    return 0;
}
Ex10
Faça um programa que pergunte ao usuário quantos valores ele deseja
armazenar em um vetor de double, depois use a função MALLOC para
reservar (alocar) o espaço de memória de acordo com o especificado
pelo usuário. Esse vetor deve ter um tamanho maior ou igual a 10
elementos. Use este vetor dinâmico como um vetor comum, atribuindo
aos 10 primeiros elementos do vetor valores aleatórios (usando a função
rand) entre 0 e 100. Exiba na tela os valores armazenados nos 10
primeiros elementos do vetor.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int quantidade;

    printf("Digite a quantidade de valores que deseja armazenar (no mínimo 10): ");
    scanf("%d", &quantidade);

   
    if (quantidade < 10) {
        printf("A quantidade deve ser no mínimo 10.\n");
        return 0;
    }

    double* vetor = (double*)malloc(quantidade * sizeof(double));

   
    if (vetor == NULL) {
        printf("Erro ao alocar memória.\n");
        return 0;
    }

    
    srand(time(NULL)); 
    for (int i = 0; i < 10; i++) {
        vetor[i] = (double)(rand() % 101);
    }

    
    printf("Valores armazenados nos 10 primeiros elementos do vetor:\n");
    for (int i = 0; i < 10; i++) {
        printf("%.2f ", vetor[i]);
    }
    printf("\n");

    free(vetor);

    return 0;
}
Ex11
Crie um programa que declare uma estrutura (registro) para o cadastro
de alunos.
a) Deverão ser armazenados, para cada aluno: matrícula, sobrenome
(apenas um) e ano de nascimento;
b) Ao início do programa, o usuário deverá informar o número de alunos
que serão armazenados;
c) O programa deverá alocar dinamicamente a quantidade necessária
de memória para armazenar os registros dos alunos;
d) O programa deverá pedir ao usuário que entre com as informações
dos alunos.
e) Ao final, mostrar os dados armazenados e liberar a memória alocada.

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int matricula;
    char sobrenome[50];
    int anoNascimento;
} Aluno;

int main() {
    int quantidadeAlunos;

    printf("Digite o número de alunos a serem cadastrados: ");
    scanf("%d", &quantidadeAlunos);

    Aluno* alunos = (Aluno*)malloc(quantidadeAlunos * sizeof(Aluno));

    printf("Entre com as informações dos alunos:\n");
    for (int i = 0; i < quantidadeAlunos; i++) {
        printf("Aluno %d:\n", i + 1);
        printf("Matrícula: ");
        scanf("%d", &alunos[i].matricula);
        printf("Sobrenome: ");
        scanf("%s", alunos[i].sobrenome);
        printf("Ano de nascimento: ");
        scanf("%d", &alunos[i].anoNascimento);
    }

    printf("Dados dos alunos cadastrados:\n");
    for (int i = 0; i < quantidadeAlunos; i++) {
        printf("Aluno %d:\n", i + 1);
        printf("Matrícula: %d\n", alunos[i].matricula);
        printf("Sobrenome: %s\n", alunos[i].sobrenome);
        printf("Ano de nascimento: %d\n", alunos[i].anoNascimento);
    }

    free(alunos);

    return 0;
}
Ex12
.Considere um cadastro de produtos de um estoque, com as seguintes
informações para cada produto:
 Código de identificação do produto: representado por um valor
inteiro
 Nome do produto: com até 50 caracteres
 Quantidade disponível no estoque: representado por um número
inteiro
 Preço de venda: representado por um valor real
a) Defina uma estrutura, denominada produto, que tenha os campos
apropriados para guardar as informações de um produto;
b) Crie um conjunto de N produtos (N é um valor fornecido pelo usuário)
e peca ao usuário para entrar com as informações de cada produto;
c) Encontre o produto com o maior preço de venda;
d) Encontre o produto com a maior quantidade disponível no estoque.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int codigo;
    char nome[50];
    int quantidade;
    float preco;
} Produto;

int main() {
    int quantidadeProdutos;

    printf("Digite o número de produtos a serem cadastrados: ");
    scanf("%d", &quantidadeProdutos);

    Produto* produtos = (Produto*)malloc(quantidadeProdutos * sizeof(Produto));

    printf("Entre com as informações dos produtos:\n");
    for (int i = 0; i < quantidadeProdutos; i++) {
        printf("Produto %d:\n", i + 1);
        printf("Código: ");
        scanf("%d", &produtos[i].codigo);
        printf("Nome: ");
        scanf(" %[^\n]", produtos[i].nome);
        printf("Quantidade disponível: ");
        scanf("%d", &produtos[i].quantidade);
        printf("Preço de venda: ");
        scanf("%f", &produtos[i].preco);
    }

    Produto produtoMaiorPreco = produtos[0];
    Produto produtoMaiorQuantidade = produtos[0];

    for (int i = 1; i < quantidadeProdutos; i++) {
        if (produtos[i].preco > produtoMaiorPreco.preco) {
            produtoMaiorPreco = produtos[i];
        }

        if (produtos[i].quantidade > produtoMaiorQuantidade.quantidade) {
            produtoMaiorQuantidade = produtos[i];
        }
    }

    printf("Produto com o maior preço de venda:\n");
    printf("Código: %d\n", produtoMaiorPreco.codigo);
    printf("Nome: %s\n", produtoMaiorPreco.nome);
    printf("Quantidade disponível: %d\n", produtoMaiorPreco.quantidade);
    printf("Preço de venda: %.2f\n", produtoMaiorPreco.preco);

    printf("Produto com a maior quantidade disponível no estoque:\n");
    printf("Código: %d\n", produtoMaiorQuantidade.codigo);
    printf("Nome: %s\n", produtoMaiorQuantidade.nome);
    printf("Quantidade disponível: %d\n", produtoMaiorQuantidade.quantidade);
    printf("Preço de venda: %.2f\n", produtoMaiorQuantidade.preco);

    free(produtos);

    return 0;
}
Ex13
Escreva um programa que aloque dinamicamente uma matriz (de
inteiros) de dimensões definidas pelo usuário e a leia. Em seguida,
implemente uma função que receba um valor, retorne 1 caso o valor
esteja na matriz ou retorne 0 caso não esteja na matriz.

#include <stdio.h>
#include <stdlib.h>

int verificaValorMatriz(int** matriz, int linhas, int colunas, int valor) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            if (matriz[i][j] == valor) {
                return 1; // Valor encontrado na matriz
            }
        }
    }

    return 0; 
}

int main() {
    int linhas, colunas;

    printf("Digite o número de linhas da matriz: ");
    scanf("%d", &linhas);
    printf("Digite o número de colunas da matriz: ");
    scanf("%d", &colunas);

    
    int** matriz = (int**)malloc(linhas * sizeof(int*));
    for (int i = 0; i < linhas; i++) {
        matriz[i] = (int*)malloc(colunas * sizeof(int));
    }

    
    printf("Digite os valores da matriz:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    int valor;

    printf("Digite um valor para verificar se está presente na matriz: ");
    scanf("%d", &valor);

    int resultado = verificaValorMatriz(matriz, linhas, colunas, valor);

    if (resultado) {
        printf("O valor %d está presente na matriz.\n", valor);
    } else {
        printf("O valor %d não está presente na matriz.\n", valor);
    }

    
    for (int i = 0; i < linhas; i++) {
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}
Ex14
.Construa um programa que leia o número de linhas e de colunas de uma
matriz de números reais, aloque espaço dinamicamente para esta e a
inicialize com valores fornecidos pelo usuário. Ao final, o programa
deverá retornar a matriz na saída padrão com layout apropriado.

#include <stdio.h>
#include <stdlib.h>


double** alocarMatriz(int linhas, int colunas) {
    double** matriz = (double**)malloc(linhas * sizeof(double*));
    for (int i = 0; i < linhas; i++) {
        matriz[i] = (double*)malloc(colunas * sizeof(double));
    }
    return matriz;
}


void liberarMatriz(double** matriz, int linhas) {
    for (int i = 0; i < linhas; i++) {
        free(matriz[i]);
    }
    free(matriz);
}


void lerMatriz(double** matriz, int linhas, int colunas) {
    printf("Digite os valores da matriz:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            scanf("%lf", &matriz[i][j]);
        }
    }
}


void exibirMatriz(double** matriz, int linhas, int colunas) {
    printf("Matriz:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%.2lf\t", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int linhas, colunas;

    printf("Digite o número de linhas da matriz: ");
    scanf("%d", &linhas);

    printf("Digite o número de colunas da matriz: ");
    scanf("%d", &colunas);

    
    double** matriz = alocarMatriz(linhas, colunas);

    
    lerMatriz(matriz, linhas, colunas);

    
    exibirMatriz(matriz, linhas, colunas);

    
    liberarMatriz(matriz, linhas);

    return 0;
}


15.Faça um programa que leia dois números N e M e:
a) Crie e leia uma matriz de inteiros N x M;
b) Localize os três maiores números de uma matriz e mostre a linha e a
coluna onde estão.

#include <stdio.h>

void encontrarTresMaioresNumeros(int matriz[][100], int n, int m) {
    int maioresNumeros[3] = {0};
    int coordenadas[3][2] = {{-1, -1}, {-1, -1}, {-1, -1}};

    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int valor = matriz[i][j];

            if (valor > maioresNumeros[0]) {
                maioresNumeros[2] = maioresNumeros[1];
                coordenadas[2][0] = coordenadas[1][0];
                coordenadas[2][1] = coordenadas[1][1];

                maioresNumeros[1] = maioresNumeros[0];
                coordenadas[1][0] = coordenadas[0][0];
                coordenadas[1][1] = coordenadas[0][1];

                maioresNumeros[0] = valor;
                coordenadas[0][0] = i;
                coordenadas[0][1] = j;
            } else if (valor > maioresNumeros[1]) {
                maioresNumeros[2] = maioresNumeros[1];
                coordenadas[2][0] = coordenadas[1][0];
                coordenadas[2][1] = coordenadas[1][1];

                maioresNumeros[1] = valor;
                coordenadas[1][0] = i;
                coordenadas[1][1] = j;
            } else if (valor > maioresNumeros[2]) {
                maioresNumeros[2] = valor;
                coordenadas[2][0] = i;
                coordenadas[2][1] = j;
            }
        }
    }

    
    printf("Os três maiores números foram encontrados nas seguintes coordenadas:\n");
    for (int k = 0; k < 3; k++) {
        printf("Linha: %d, Coluna: %d\n", coordenadas[k][0], coordenadas[k][1]);
    }
}

void lerMatriz(int matriz[][100], int n, int m) {
    printf("Digite os valores da matriz:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
}

int main() {
    int matriz[100][100];
    int n, m;

    printf("Digite o número de linhas da matriz: ");
    scanf("%d", &n);

    printf("Digite o número de colunas da matriz: ");
    scanf("%d", &m);

    lerMatriz(matriz, n, m);

    encontrarTresMaioresNumeros(matriz, n, m);

    return 0;
}


16.Faça um programa que leia dois números N e M:
a) Crie e leia uma matriz N x M de inteiros;
b) Crie e construa uma matriz transposta M x N de inteiros;
c) Mostre as duas matrizes.


17.Faça um programa que leia números do teclado e os armazene em um
vetor alocado dinamicamente. O usuário irá digitar uma sequência de
números, sem limite de quantidade. Os números serão digitados um a
um e, sendo que caso ele deseje encerrar a entrada de dados, ele irá
digitar o número ZERO. Os dados devem ser armazenados na memória
deste modo:
a) Inicie com um vetor de tamanho 10 alocado dinamicamente;
b) Após, caso o vetor alocado esteja cheio, aloque um novo vetor do
tamanho do vetor anterior adicionado espaço para mais 10 valores
(tamanho N+10, onde N inicia com 10);
c) Copie os valores já digitados da área inicial para esta área maior e
libere a memória da área inicial;
d) Repita este procedimento de expandir dinamicamente com mais 10
valores o vetor alocado cada vez que o mesmo estiver cheio. Assim o
vetor irá ser “expandido” de 10 em 10 valores.
Ao final, exiba o vetor lido. Não use a função REALLOC.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *vetor = (int *)malloc(10 * sizeof(int)); 
    int tamanho_atual = 10;  
    int indice = 0;  

    int numero;
    printf("Digite os numeros (0 para encerrar):\n");

    while (1) {
        scanf("%d", &numero);

        if (numero == 0) {
            break;
        }

        vetor[indice] = numero;
        indice++;

        if (indice == tamanho_atual) {
            
            int novo_tamanho = tamanho_atual + 10;
            int *novo_vetor = (int *)malloc(novo_tamanho * sizeof(int));

            
            for (int i = 0; i < tamanho_atual; i++) {
                novo_vetor[i] = vetor[i];
            }

            free(vetor);  // Liberar memória do vetor antigo
            vetor = novo_vetor;  // Apontar o vetor para o novo vetor alocado
            tamanho_atual = novo_tamanho;  // Atualizar o tamanho atual
        }
    }

    printf("Vetor lido:\n");
    for (int i = 0; i < indice; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    free(vetor);  

    return 0;
}

18.Escreva um programa para fazer a alocação dinâmica dos blocos de
dados conforme solicitado abaixo:
a) Vetor de 1024 Bytes (1 Kbyte);
b) Matriz de inteiros de dimensão 10 × 10;
c) Vetor para armazenar 50 registros contendo: nome do produto (30
caracteres), código do produto (inteiro) e preço em reais;
d) Texto de até 100 linhas com até 80 caracteres em cada linha.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[30];
    int codigo;
    float preco;
} Registro;

int main() {
    // Alocação dinâmica do vetor de 1024 bytes
    char* vetorBytes = (char*) malloc(1024 * sizeof(char));

    // Alocação dinâmica da matriz de inteiros 10x10
    int** matrizInteiros = (int**) malloc(10 * sizeof(int*));
    for (int i = 0; i < 10; i++) {
        matrizInteiros[i] = (int*) malloc(10 * sizeof(int));
    }

    // Alocação dinâmica do vetor de registros
    Registro* vetorRegistros = (Registro*) malloc(50 * sizeof(Registro));

    // Alocação dinâmica do texto de até 100 linhas com até 80 caracteres em cada linha
    char** texto = (char**) malloc(100 * sizeof(char*));
    for (int i = 0; i < 100; i++) {
        texto[i] = (char*) malloc(81 * sizeof(char));
    }

    // Exemplo de uso dos blocos de dados alocados dinamicamente
    strcpy(vetorBytes, "Exemplo de vetor de bytes.");
    matrizInteiros[0][0] = 1;
    vetorRegistros[0].codigo = 1001;
    vetorRegistros[0].preco = 10.99;
    strcpy(vetorRegistros[0].nome, "Produto A");
    strcpy(texto[0], "Exemplo de texto.");

    // Liberar a memória alocada
    free(vetorBytes);
    
    for (int i = 0; i < 10; i++) {
        free(matrizInteiros[i]);
    }
    free(matrizInteiros);
    
    free(vetorRegistros);
    
    for (int i = 0; i < 100; i++) {
        free(texto[i]);
    }
    free(texto);

    return 0;
}


19.Faça um programa para associar nomes as linhas de uma matriz de
caracteres. O usuário irá informar o número máximo de nomes que
poderão ser armazenados. Cada nome poderá ter até 30 caracteres com
o '\0'. O usuário poderá usar 5 opções diferentes para manipular a
matriz:
a) Gravar um nome em uma linha da matriz;
b) Apagar o nome contido em uma linha da matriz;
c) Informar um nome, procurar a linha onde ele se encontra e substituir
por outro nome;
d) Informar um nome, procurar a linha onde ele se encontra e apagar;
e) Pedir para recuperar o nome contido em uma linha da matriz.

#include <stdio.h>
#include <string.h>

#define MAX_NOMES 10
#define TAM_NOME 31
#define TAM_MATRIZ MAX_NOMES * TAM_NOME

void gravarNome(char matriz[][TAM_NOME]) {
    int linha;
    char nome[TAM_NOME];

    printf("Digite o número da linha: ");
    scanf("%d", &linha);

    if (linha < 1 || linha > MAX_NOMES) {
        printf("Linha inválida!\n");
        return;
    }

    printf("Digite o nome a ser gravado: ");
    scanf(" %30[^\n]", nome);

    strncpy(matriz[linha - 1], nome, TAM_NOME - 1);
    matriz[linha - 1][TAM_NOME - 1] = '\0';

    printf("Nome gravado com sucesso!\n");
}

void apagarNome(char matriz[][TAM_NOME]) {
    int linha;

    printf("Digite o número da linha: ");
    scanf("%d", &linha);

    if (linha < 1 || linha > MAX_NOMES) {
        printf("Linha inválida!\n");
        return;
    }

    matriz[linha - 1][0] = '\0';

    printf("Nome apagado com sucesso!\n");
}

void substituirNome(char matriz[][TAM_NOME]) {
    char nomeAntigo[TAM_NOME];
    char nomeNovo[TAM_NOME];

    printf("Digite o nome a ser substituído: ");
    scanf(" %30[^\n]", nomeAntigo);

    printf("Digite o novo nome: ");
    scanf(" %30[^\n]", nomeNovo);

    for (int i = 0; i < MAX_NOMES; i++) {
        if (strcmp(matriz[i], nomeAntigo) == 0) {
            strncpy(matriz[i], nomeNovo, TAM_NOME - 1);
            matriz[i][TAM_NOME - 1] = '\0';
            printf("Nome substituído com sucesso!\n");
            return;
        }
    }

    printf("Nome não encontrado na matriz!\n");
}

void apagarNomeExistente(char matriz[][TAM_NOME]) {
    char nome[TAM_NOME];

    printf("Digite o nome a ser apagado: ");
    scanf(" %30[^\n]", nome);

    for (int i = 0; i < MAX_NOMES; i++) {
        if (strcmp(matriz[i], nome) == 0) {
            matriz[i][0] = '\0';
            printf("Nome apagado com sucesso!\n");
            return;
        }
    }

    printf("Nome não encontrado na matriz!\n");
}

void recuperarNome(char matriz[][TAM_NOME]) {
    int linha;

    printf("Digite o número da linha: ");
    scanf("%d", &linha);

    if (linha < 1 || linha > MAX_NOMES) {
        printf("Linha inválida!\n");
        return;
    }

    if (matriz[linha - 1][0] != '\0') {
        printf("Nome na linha %d: %s\n", linha, matriz[linha - 1]);
    } else {
        printf("Não há nome na linha %d\n", linha);
    }
}

int main() {
    char matriz[MAX_NOMES][TAM_NOME];
    char opcao;

    for (int i = 0; i < MAX_NOMES; i++) {
        matriz[i][0] = '\0';
    }

    do {
        printf("\nOpções:\n");
        printf("a) Gravar um nome em uma linha da matriz\n");
        printf("b) Apagar o nome contido em uma linha da matriz\n");
        printf("c) Informar um nome, procurar a linha onde ele se encontra e substituir por outro nome\n");
        printf("d) Informar um nome, procurar a linha onde ele se encontra e apagar\n");
        printf("e) Pedir para recuperar o nome contido em uma linha da matriz\n");
        printf("s) Sair\n");
        printf("Escolha uma opção: ");
        scanf(" %c", &opcao);

        switch (opcao) {
            case 'a':
                gravarNome(matriz);
                break;
            case 'b':
                apagarNome(matriz);
                break;
            case 'c':
                substituirNome(matriz);
                break;
            case 'd':
                apagarNomeExistente(matriz);
                break;
            case 'e':
                recuperarNome(matriz);
                break;
            case 's':
                printf("Encerrando o programa...\n");
                break;
            default:
                printf("Opção inválida!\n");
        }
    } while (opcao != 's');

    return 0;
}

20.Faça um programa que:
a) Peça para o usuário entrar com o nome e a posição (coordenadas X e
Y) de N cidades e as armazene em um vetor de estruturas (N é
informado pelo usuário);
b) Crie uma matriz de distâncias entre cidades de tamanho N x N;
c) Calcule as distâncias entre cada duas cidades e armazene na matriz;
d) Exiba na tela a matriz de distancias obtida;
e) Quando o usuário digitar o número de duas cidades o programa
deverá retornar a distância entre elas.

#include <stdio.h>
#include <math.h>

#define MAX_CIDADES 100

typedef struct {
    char nome[100];
    int x;
    int y;
} Cidade;

double calcularDistancia(Cidade cidade1, Cidade cidade2) {
    int deltaX = cidade2.x - cidade1.x;
    int deltaY = cidade2.y - cidade1.y;
    return sqrt(deltaX * deltaX + deltaY * deltaY);
}

int main() {
    int numCidades;
    printf("Digite o número de cidades: ");
    scanf("%d", &numCidades);
    
    Cidade cidades[MAX_CIDADES];
    
    
    for (int i = 0; i < numCidades; i++) {
        printf("Cidade %d:\n", i+1);
        printf("Nome: ");
        scanf("%s", cidades[i].nome);
        printf("Coordenada X: ");
        scanf("%d", &cidades[i].x);
        printf("Coordenada Y: ");
        scanf("%d", &cidades[i].y);
    }
    
    
    double distancias[MAX_CIDADES][MAX_CIDADES];
    
   
    for (int i = 0; i < numCidades; i++) {
        for (int j = 0; j < numCidades; j++) {
            distancias[i][j] = calcularDistancia(cidades[i], cidades[j]);
        }
    }
    
    printf("Matriz de distâncias:\n");
    for (int i = 0; i < numCidades; i++) {
        for (int j = 0; j < numCidades; j++) {
            printf("%.2lf\t", distancias[i][j]);
        }
        printf("\n");
    }
    
    
    int cidade1, cidade2;
    printf("\nDigite o número de duas cidades para obter a distância entre elas:\n");
    printf("Cidade 1: ");
    scanf("%d", &cidade1);
    printf("Cidade 2: ");
    scanf("%d", &cidade2);
    
    double distancia = distancias[cidade1-1][cidade2-1];
    printf("Distância entre as cidades: %.2lf\n", distancia);
    
    return 0;
}


21.Faça um programa que leia quatro números a, b, c e d, que serão as
dimensões de duas matrizes, e:
a) Crie e leia uma matriz, dadas as dimensões dela;
b) Crie e construa uma matriz que seja o produto de duas matrizes. Na
sua função main(), imprima as duas matrizes e o produto entre elas,
se existir.
#include <stdio.h>

void multiplyMatrices(int a, int b, int c, int d, int matrix1[a][b], int matrix2[c][d], int result[a][d]) {
    int i, j, k;
    
    // Inicializa a matriz de resultado com zeros
    for (i = 0; i < a; i++) {
        for (j = 0; j < d; j++) {
            result[i][j] = 0;
        }
    }
    
    // Calcula o produto das matrizes
    for (i = 0; i < a; i++) {
        for (j = 0; j < d; j++) {
            for (k = 0; k < b; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

int main() {
    int a, b, c, d;
    
    printf("Digite as dimensoes da primeira matriz (a e b): ");
    scanf("%d %d", &a, &b);
    
    printf("Digite as dimensoes da segunda matriz (c e d): ");
    scanf("%d %d", &c, &d);
    
    // Verifica se as dimensões são compatíveis para o produto de matrizes
    if (b != c) {
        printf("As dimensoes das matrizes nao sao compativeis para o produto.\n");
        return 0;
    }
    
    int matrix1[a][b], matrix2[c][d], result[a][d];
    int i, j;
    
    printf("Digite os elementos da primeira matriz:\n");
    for (i = 0; i < a; i++) {
        for (j = 0; j < b; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }
    
    printf("Digite os elementos da segunda matriz:\n");
    for (i = 0; i < c; i++) {
        for (j = 0; j < d; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }
    
    // Calcula o produto das matrizes
    multiplyMatrices(a, b, c, d, matrix1, matrix2, result);
    
    // Imprime as matrizes e o produto
    printf("\nMatriz 1:\n");
    for (i = 0; i < a; i++) {
        for (j = 0; j < b; j++) {
            printf("%d ", matrix1[i][j]);
        }
        printf("\n");
    }
    
    printf("\nMatriz 2:\n");
    for (i = 0; i < c; i++) {
        for (j = 0; j < d; j++) {
            printf("%d ", matrix2[i][j]);
        }
        printf("\n");
    }
    
    printf("\nProduto das matrizes:\n");
    for (i = 0; i < a; i++) {
        for (j = 0; j < d; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
