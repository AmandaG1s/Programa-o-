//Amanda Gomes-12221BCC016

Escreva um programa que:
a) Crie/abra um arquivo texto de nome “arq.txt”;
b) Permita que o usuário grave diversos caracteres nesse arquivo, até
que o usuário entre com o caractere ‘0’;
c) Feche o arquivo.
Agora, abra e leia o arquivo, caractere por caractere, e escreva na tela
todos os caracteres armazenados.

#include <stdio.h>

int main() {
    FILE *arquivo;
    char caractere;

    
    arquivo = fopen("arq.txt", "w");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.");
        return 1;
    }

    printf("Digite os caracteres (digite '0' para encerrar):\n");

    
    while (1) {
        scanf(" %c", &caractere);

        if (caractere == '0') {
            break;
        }

        fputc(caractere, arquivo);
    }

    
    fclose(arquivo);

    
    arquivo = fopen("arq.txt", "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.");
        return 1;
    }

    printf("Conteúdo do arquivo:\n");

    
    while ((caractere = fgetc(arquivo)) != EOF) {
        printf("%c", caractere);
    }

   
    fclose(arquivo);

    return 0;
}


2. Faça um programa que receba do usuário um arquivo texto e mostre na
tela quantas linhas esse arquivo possui.

#include <stdio.h>

int main() {
    char nomeArquivo[100];
    FILE *arquivo;
    int contadorLinhas = 0;
    char caractere;

    printf("Digite o nome do arquivo: ");
    scanf("%s", nomeArquivo);

    arquivo = fopen(nomeArquivo, "r");
    if (arquivo == NULL) {
        printf("Não foi possível abrir o arquivo.\n");
        return 1;
    }

    while ((caractere = fgetc(arquivo)) != EOF) {
        if (caractere == '\n') {
            contadorLinhas++;
        }
    }

    printf("O arquivo possui %d linha(s).\n", contadorLinhas);

    fclose(arquivo);
    return 0;
}


3. Faça um programa que receba do usuário um arquivo texto e mostre na
tela quantas letras são vogais.

#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *arquivo;
    char nomeArquivo[50];
    char caractere;
    int contador = 0;

    printf("Digite o nome do arquivo: ");
    scanf("%s", nomeArquivo);

    arquivo = fopen(nomeArquivo, "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    while ((caractere = fgetc(arquivo)) != EOF) {
        caractere = tolower(caractere); 
        if (caractere == 'a' || caractere == 'e' || caractere == 'i' || caractere == 'o' || caractere == 'u') {
            contador++;
        }
    }

    printf("O arquivo contém %d letras vogais.\n", contador);

    fclose(arquivo);

    return 0;
}



4. Faça um programa que receba do usuário um arquivo texto e mostre na
tela quantas letras são vogais e quantas são consoantes.

#include <stdio.h>
#include <ctype.h>

int main() {
    char nome_arquivo[100];
    FILE *arquivo;
    char caractere;
    int vogais = 0, consoantes = 0;

    printf("Digite o nome do arquivo de texto: ");
    scanf("%s", nome_arquivo);

    
    arquivo = fopen(nome_arquivo, "r");

    if (arquivo == NULL) {
        printf("Não foi possível abrir o arquivo.\n");
        return 1;
    }

    
    while ((caractere = fgetc(arquivo)) != EOF) {
        caractere = tolower(caractere); 

        if (isalpha(caractere)) { 
            if (caractere == 'a' || caractere == 'e' || caractere == 'i' || caractere == 'o' || caractere == 'u')
                vogais++;
            else
                consoantes++;
        }
    }

    
    fclose(arquivo);

    printf("Número de vogais: %d\n", vogais);
    printf("Número de consoantes: %d\n", consoantes);

    return 0;
}


5. Faça um programa que receba do usuário um arquivo texto e um
caractere. Mostre na tela quantas vezes aquele caractere ocorre dentro
do arquivo.

#include <stdio.h>

int contarCaractere(FILE *arquivo, char caractere) {
    int contador = 0;
    char c;
    while ((c = fgetc(arquivo)) != EOF) {
        if (c == caractere) {
            contador++;
        }
    }

    return contador;
}

int main() {
    char nomeArquivo[100];
    char caractere;

    printf("Digite o nome do arquivo: ");
    scanf("%s", nomeArquivo);

    printf("Digite o caractere a ser contado: ");
    scanf(" %c", &caractere);

    FILE *arquivo = fopen(nomeArquivo, "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    int quantidade = contarCaractere(arquivo, caractere);

    printf("O caractere '%c' ocorre %d vezes no arquivo.\n", caractere, quantidade);

    fclose(arquivo);

    return 0;
}

6. Faça um programa que receba do usuário um arquivo texto e mostre na
tela quantas vezes cada letra do alfabeto aparece dentro do arquivo.

#include <stdio.h>
#include <ctype.h>

#define TAMANHO_ALFABETO 26

int main() {
   
    int contagem[TAMANHO_ALFABETO] = {0};

    
    char nomeArquivo[100];

    printf("Digite o nome do arquivo de texto: ");
    scanf("%s", nomeArquivo);

   
    FILE *arquivo = fopen(nomeArquivo, "r");
    if (arquivo == NULL) {
        printf("Não foi possível abrir o arquivo.\n");
        return 1;
    }

    
    int c;
    while ((c = fgetc(arquivo)) != EOF) {
        
        if (isalpha(c)) {
            
            c = toupper(c);
            
            contagem[c - 'A']++;
        }
    }

   
    fclose(arquivo);

    
    printf("Contagem de letras:\n");
    for (int i = 0; i < TAMANHO_ALFABETO; i++) {
        printf("%c: %d\n", 'A' + i, contagem[i]);
    }

    return 0;
}

7. Faça um programa que receba do usuário um arquivo texto. Crie outro
arquivo texto contendo o texto do arquivo de entrada, mas com as
vogais substituídas por ‘*’.

#include <stdio.h>

int main() {
    FILE *entrada, *saida;
    char nomeArquivoEntrada[100], nomeArquivoSaida[100];
    char caractere;

    printf("Digite o nome do arquivo de entrada: ");
    scanf("%s", nomeArquivoEntrada);

    printf("Digite o nome do arquivo de saída: ");
    scanf("%s", nomeArquivoSaida);

    entrada = fopen(nomeArquivoEntrada, "r");
    saida = fopen(nomeArquivoSaida, "w");

    if (entrada == NULL) {
        printf("Erro ao abrir o arquivo de entrada.\n");
        return 1;
    }

    if (saida == NULL) {
        printf("Erro ao criar o arquivo de saída.\n");
        return 1;
    }

    while ((caractere = fgetc(entrada)) != EOF) {
        if (caractere == 'a' || caractere == 'e' || caractere == 'i' || caractere == 'o' || caractere == 'u' ||
            caractere == 'A' || caractere == 'E' || caractere == 'I' || caractere == 'O' || caractere == 'U') {
            fputc('*', saida);
        } else {
            fputc(caractere, saida);
        }
    }

    printf("Arquivo de saída criado com sucesso!\n");

    fclose(entrada);
    fclose(saida);

    return 0;
}

8. Faça um programa que leia o conteúdo de um arquivo e crie um arquivo
com o mesmo conteúdo, mas com todas as letras minúsculas
convertidas para maiúsculas. Os nomes dos arquivos serão fornecidos,
via teclado, pelo usuário. A função que converte maiúscula para
minúscula é o toupper(). Ela é aplicada em cada caractere da string.

#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *entrada, *saida;
    char nomeArquivoEntrada[100], nomeArquivoSaida[100];
    char caractere;

    printf("Digite o nome do arquivo de entrada: ");
    scanf("%s", nomeArquivoEntrada);

    printf("Digite o nome do arquivo de saída: ");
    scanf("%s", nomeArquivoSaida);

    entrada = fopen(nomeArquivoEntrada, "r");
    saida = fopen(nomeArquivoSaida, "w");

    if (entrada == NULL) {
        printf("Erro ao abrir o arquivo de entrada.\n");
        return 1;
    }

    if (saida == NULL) {
        printf("Erro ao criar o arquivo de saída.\n");
        return 1;
    }

    while ((caractere = fgetc(entrada)) != EOF) {
        caractere = toupper(caractere);
        fputc(caractere, saida);
    }

    printf("Arquivo de saída criado com sucesso!\n");

    fclose(entrada);
    fclose(saida);

    return 0;
}


9. Faça um programa que receba dois arquivos do usuário, e crie um
terceiro arquivo com o conteúdo dos dois primeiros juntos (o conteúdo
do primeiro seguido do conteúdo do segundo).

#include <stdio.h>

int main() {
    FILE *arquivo1, *arquivo2, *arquivo3;
    char nomeArquivo1[100], nomeArquivo2[100], nomeArquivo3[100];
    char caractere;

    printf("Digite o nome do primeiro arquivo: ");
    scanf("%s", nomeArquivo1);

    printf("Digite o nome do segundo arquivo: ");
    scanf("%s", nomeArquivo2);

    printf("Digite o nome do terceiro arquivo: ");
    scanf("%s", nomeArquivo3);

    arquivo1 = fopen(nomeArquivo1, "r");
    arquivo2 = fopen(nomeArquivo2, "r");
    arquivo3 = fopen(nomeArquivo3, "w");

    if (arquivo1 == NULL || arquivo2 == NULL || arquivo3 == NULL) {
        printf("Erro ao abrir os arquivos.\n");
        return 1;
    }

    
    while ((caractere = fgetc(arquivo1)) != EOF) {
        fputc(caractere, arquivo3);
    }

    
    while ((caractere = fgetc(arquivo2)) != EOF) {
        fputc(caractere, arquivo3);
    }

    printf("Arquivo de saída criado com sucesso!\n");

    fclose(arquivo1);
    fclose(arquivo2);
    fclose(arquivo3);

    return 0;
}


10.Faça um programa que receba o nome de um arquivo de entrada e outro
de saída. O arquivo de entrada contém em cada linha o nome de uma
cidade (ocupando 40 caracteres) e o seu número de habitantes. O
programa deverá ler o arquivo de entrada e gerar um arquivo de saída
onde aparece o nome da cidade mais populosa seguida pelo seu número
de habitantes.

#include <stdio.h>
#include <string.h>

#define MAX_CARACTERES 40

int main() {
    FILE *arquivoEntrada, *arquivoSaida;
    char nomeArquivoEntrada[100], nomeArquivoSaida[100];
    char cidade[MAX_CARACTERES + 1];
    int habitantes;
    char cidadeMaisPopulosa[MAX_CARACTERES + 1];
    int habitantesMaisPopulosos = 0;

    printf("Digite o nome do arquivo de entrada: ");
    scanf("%s", nomeArquivoEntrada);

    printf("Digite o nome do arquivo de saída: ");
    scanf("%s", nomeArquivoSaida);

    arquivoEntrada = fopen(nomeArquivoEntrada, "r");
    arquivoSaida = fopen(nomeArquivoSaida, "w");

    if (arquivoEntrada == NULL) {
        printf("Erro ao abrir o arquivo de entrada.\n");
        return 1;
    }

    if (arquivoSaida == NULL) {
        printf("Erro ao criar o arquivo de saída.\n");
        return 1;
    }

    while (fscanf(arquivoEntrada, "%40s %d", cidade, &habitantes) == 2) {
        if (habitantes > habitantesMaisPopulosos) {
            habitantesMaisPopulosos = habitantes;
            strcpy(cidadeMaisPopulosa, cidade);
        }
    }

    fprintf(arquivoSaida, "%s %d\n", cidadeMaisPopulosa, habitantesMaisPopulosos);

    printf("Arquivo de saída criado com sucesso!\n");

    fclose(arquivoEntrada);
    fclose(arquivoSaida);

    return 0;
}


11.Faça um programa no qual o usuário informa o nome do arquivo e uma
palavra, e retorne o número de vezes que aquela palavra aparece no
arquivo.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PALAVRA 100
#define MAX_LINHA 1000

int main() {
    FILE *arquivo;
    char nomeArquivo[100];
    char palavra[MAX_PALAVRA];
    char linha[MAX_LINHA];
    int contador = 0;

    printf("Digite o nome do arquivo: ");
    scanf("%s", nomeArquivo);

    printf("Digite a palavra a ser buscada: ");
    scanf("%s", palavra);

    arquivo = fopen(nomeArquivo, "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    while (fgets(linha, MAX_LINHA, arquivo) != NULL) {
        char *token = strtok(linha, " \t\n");

        while (token != NULL) {
            if (strcmp(token, palavra) == 0) {
                contador++;
            }

            token = strtok(NULL, " \t\n");
        }
    }

    printf("A palavra '%s' aparece %d vezes no arquivo.\n", palavra, contador);

    fclose(arquivo);

    return 0;
}

12.Abra um arquivo texto, calcule e escreva o número de caracteres, o
número de linhas e o número de palavras neste arquivo. Escreva
também quantas vezes cada letra ocorre no arquivo (ignorando letras
com acento). Obs.: palavras são separadas por um ou mais caracteres
espaço, tabulação ou nova linha.

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX_CARACTERES 1000

int main() {
    FILE *arquivo;
    char nomeArquivo[100];
    char caractere;
    int numCaracteres = 0;
    int numLinhas = 0;
    int numPalavras = 0;
    int contagemLetras[26] = {0}; // Contagem de letras de 'A' a 'Z'

    printf("Digite o nome do arquivo: ");
    scanf("%s", nomeArquivo);

    arquivo = fopen(nomeArquivo, "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    while ((caractere = fgetc(arquivo)) != EOF) {
        numCaracteres++;

        if (caractere == '\n') {
            numLinhas++;
        }

        if (isalpha(caractere)) {
            caractere = toupper(caractere);
            contagemLetras[caractere - 'A']++;
        }
    }

    
    if (numCaracteres > 0 && caractere != '\n') {
        numLinhas++;
    }

    
    rewind(arquivo);
    char palavra[MAX_CARACTERES + 1];
    while (fscanf(arquivo, "%s", palavra) == 1) {
        numPalavras++;
    }

    printf("Número de caracteres: %d\n", numCaracteres);
    printf("Número de linhas: %d\n", numLinhas);
    printf("Número de palavras: %d\n", numPalavras);

    
    printf("Contagem de ocorrências de cada letra:\n");
    for (int i = 0; i < 26; i++) {
        printf("%c: %d\n", 'A' + i, contagemLetras[i]);
    }

    fclose(arquivo);

    return 0;
}


13.Faça um programa que permita que o usuário entre com diversos nomes
e telefone para cadastro, e crie um arquivo com essas informações, uma
por linha. O usuário finaliza a entrada com ‘0’ para o telefone.

#include <stdio.h>
#include <stdlib.h>

#define MAX_NOME 100
#define MAX_TELEFONE 20

int main() {
    FILE *arquivo;
    char nome[MAX_NOME];
    char telefone[MAX_TELEFONE];

    arquivo = fopen("cadastro.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao criar o arquivo.\n");
        return 1;
    }

    printf("Digite o nome e telefone (0 para sair):\n");

    while (1) {
        printf("Nome: ");
        scanf("%s", nome);

        if (nome[0] == '0') {
            break;
        }

        printf("Telefone: ");
        scanf("%s", telefone);

        if (telefone[0] == '0') {
            break;
        }

        fprintf(arquivo, "%s %s\n", nome, telefone);
    }

    printf("Arquivo 'cadastro.txt' criado com sucesso!\n");

    fclose(arquivo);

    return 0;
}


14.#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_NOME 100
#define MAX_ARQUIVO 100
#define DATA_ATUAL_FORMATO "%d %m %Y"

typedef struct {
    char nome[MAX_NOME];
    int dia;
    int mes;
    int ano;
} Pessoa;

int calcularIdade(int diaNascimento, int mesNascimento, int anoNascimento, int diaAtual, int mesAtual, int anoAtual) {
    int idade = anoAtual - anoNascimento;

    if (mesAtual < mesNascimento || (mesAtual == mesNascimento && diaAtual < diaNascimento)) {
        idade--;
    }

    return idade;
}

int main() {
    FILE *arquivoEntrada, *arquivoSaida;
    char nomeArquivoEntrada[MAX_ARQUIVO];
    char nomeArquivoSaida[MAX_ARQUIVO];
    char dataAtualStr[MAX_NOME];
    time_t t = time(NULL);
    struct tm *dataAtual = localtime(&t);

    strftime(dataAtualStr, MAX_NOME, DATA_ATUAL_FORMATO, dataAtual);

    printf("Digite o nome do arquivo de entrada: ");
    scanf("%s", nomeArquivoEntrada);

    printf("Digite o nome do arquivo de saída: ");
    scanf("%s", nomeArquivoSaida);

    arquivoEntrada = fopen(nomeArquivoEntrada, "r");
    arquivoSaida = fopen(nomeArquivoSaida, "w");

    if (arquivoEntrada == NULL) {
        printf("Erro ao abrir o arquivo de entrada.\n");
        return 1;
    }

    if (arquivoSaida == NULL) {
        printf("Erro ao criar o arquivo de saída.\n");
        return 1;
    }

    int diaAtual, mesAtual, anoAtual;
    sscanf(dataAtualStr, "%d %d %d", &diaAtual, &mesAtual, &anoAtual);

    Pessoa pessoa;

    while (fscanf(arquivoEntrada, "%s %d %d %d", pessoa.nome, &pessoa.dia, &pessoa.mes, &pessoa.ano) == 4) {
        int idade = calcularIdade(pessoa.dia, pessoa.mes, pessoa.ano, diaAtual, mesAtual, anoAtual);
        fprintf(arquivoSaida, "%s %d\n", pessoa.nome, idade);
    }

    printf("Arquivo de saída criado com sucesso!\n");

    fclose(arquivoEntrada);
    fclose(arquivoSaida);

    return 0;
}

15.Faça um programa que receba como entrada o ano corrente e o nome de
dois arquivos: um de entrada e outro de saída. Cada linha do arquivo de
entrada contém o nome de uma pessoa (ocupando 40 caracteres) e o
seu ano de nascimento. O programa deverá ler o arquivo de entrada e
gerar um arquivo de saída onde aparece o nome da pessoa seguida por
uma string que representa a sua idade.
- Se a idade for menor do que 18 anos, escreva “menor de idade”;
- Se a idade for maior do que 18 anos, escreva “maior de idade”;
- Se a idade for igual a 18 anos, escreva “entrando na maior idade”.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NOME 40

typedef struct {
    char nome[MAX_NOME];
    int anoNascimento;
} Pessoa;

int calcularIdade(int anoNascimento, int anoCorrente) {
    return anoCorrente - anoNascimento;
}

void escreverIdadeNoArquivo(FILE *arquivo, int idade) {
    if (idade < 18) {
        fprintf(arquivo, "menor de idade\n");
    } else if (idade > 18) {
        fprintf(arquivo, "maior de idade\n");
    } else {
        fprintf(arquivo, "entrando na maior idade\n");
    }
}

int main() {
    int anoCorrente;
    char nomeArquivoEntrada[100];
    char nomeArquivoSaida[100];

    printf("Digite o ano corrente: ");
    scanf("%d", &anoCorrente);

    printf("Digite o nome do arquivo de entrada: ");
    scanf("%s", nomeArquivoEntrada);

    printf("Digite o nome do arquivo de saída: ");
    scanf("%s", nomeArquivoSaida);

    FILE *arquivoEntrada = fopen(nomeArquivoEntrada, "r");
    FILE *arquivoSaida = fopen(nomeArquivoSaida, "w");

    if (arquivoEntrada == NULL) {
        printf("Erro ao abrir o arquivo de entrada.\n");
        return 1;
    }

    if (arquivoSaida == NULL) {
        printf("Erro ao criar o arquivo de saída.\n");
        return 1;
    }

    Pessoa pessoa;

    while (fscanf(arquivoEntrada, "%s %d", pessoa.nome, &pessoa.anoNascimento) == 2) {
        int idade = calcularIdade(pessoa.anoNascimento, anoCorrente);
        fprintf(arquivoSaida, "%s ", pessoa.nome);
        escreverIdadeNoArquivo(arquivoSaida, idade);
    }

    printf("Arquivo de saída criado com sucesso!\n");

    fclose(arquivoEntrada);
    fclose(arquivoSaida);

    return 0;
}

16.Faça um programa que recebe um vetor de 10 números, converta cada
um desses números para binário e grave a sequência de 0s e 1s em um
arquivo texto. Cada número deve ser gravado em uma linha.

#include <stdio.h>

void decimalParaBinario(int decimal, char *binario) {
    int indice = 0;

    if (decimal == 0) {
        binario[indice++] = '0';
    } else {
        while (decimal > 0) {
            int resto = decimal % 2;
            binario[indice++] = resto + '0';
            decimal /= 2;
        }
    }

    binario[indice] = '\0';

    // Inverter o binário
    int inicio = 0;
    int fim = indice - 1;

    while (inicio < fim) {
        char temp = binario[inicio];
        binario[inicio] = binario[fim];
        binario[fim] = temp;
        inicio++;
        fim--;
    }
}

int main() {
    int numeros[10];

    printf("Digite 10 números:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &numeros[i]);
    }

    FILE *arquivo = fopen("binario.txt", "w");

    if (arquivo == NULL) {
        printf("Erro ao criar o arquivo.\n");
        return 1;
    }

    char binario[33];

    for (int i = 0; i < 10; i++) {
        decimalParaBinario(numeros[i], binario);
        fprintf(arquivo, "%s\n", binario);
    }

    printf("Arquivo 'binario.txt' criado com sucesso!\n");

    fclose(arquivo);

    return 0;
}


17.Faça um programa que leia um arquivo que contenha as dimensões de
uma matriz (linha e coluna), a quantidade de posições que serão
anuladas, e as posições a serem anuladas (linha e coluna). O programa
lê esse arquivo e, em seguida, produz um novo arquivo com a matriz
com as dimensões dadas no arquivo lido, e todas as posições
especificadas no arquivo ZERADAS e o restante recebendo o valor 1.
Ex: arquivo “matriz.txt”
3 3 2 /*3 e 3 dimensoes da matriz e 2 posicoes que serao
anuladas*/
1 0
1 2 /*Posicoes da matriz que serao anuladas.
arquivo “matriz_saida.txt”
saída:
1 1 1
0 1 0
1 1 1

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *arquivoEntrada, *arquivoSaida;
    char nomeArquivoEntrada[100];
    char nomeArquivoSaida[100];
    int linha, coluna, numAnuladas;

    printf("Digite o nome do arquivo de entrada: ");
    scanf("%s", nomeArquivoEntrada);

    printf("Digite o nome do arquivo de saída: ");
    scanf("%s", nomeArquivoSaida);

    arquivoEntrada = fopen(nomeArquivoEntrada, "r");
    arquivoSaida = fopen(nomeArquivoSaida, "w");

    if (arquivoEntrada == NULL) {
        printf("Erro ao abrir o arquivo de entrada.\n");
        return 1;
    }

    if (arquivoSaida == NULL) {
        printf("Erro ao criar o arquivo de saída.\n");
        return 1;
    }

    fscanf(arquivoEntrada, "%d %d %d", &linha, &coluna, &numAnuladas);

    int **matriz = (int **)malloc(linha * sizeof(int *));
    for (int i = 0; i < linha; i++) {
        matriz[i] = (int *)malloc(coluna * sizeof(int));
    }

    
    for (int i = 0; i < linha; i++) {
        for (int j = 0; j < coluna; j++) {
            matriz[i][j] = 1;
        }
    }

    int l, c;
    for (int i = 0; i < numAnuladas; i++) {
        fscanf(arquivoEntrada, "%d %d", &l, &c);
        matriz[l][c] = 0;
    }

    for (int i = 0; i < linha; i++) {
        for (int j = 0; j < coluna; j++) {
            fprintf(arquivoSaida, "%d ", matriz[i][j]);
        }
        fprintf(arquivoSaida, "\n");
    }

    printf("Arquivo de saída criado com sucesso!\n");

    fclose(arquivoEntrada);
    fclose(arquivoSaida);

    return 0;
}


18.Faça um programa que leia um arquivo contendo o nome e o preço de
diversos produtos (separados por linha), e calcule o total da compra.

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *arquivo;
    char nomeArquivo[100];
    char nomeProduto[100];
    float precoProduto;
    float totalCompra = 0;

    printf("Digite o nome do arquivo: ");
    scanf("%s", nomeArquivo);

    arquivo = fopen(nomeArquivo, "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    while (fscanf(arquivo, "%s %f", nomeProduto, &precoProduto) != EOF) {
        totalCompra += precoProduto;
    }

    printf("Total da compra: R$%.2f\n", totalCompra);

    fclose(arquivo);

    return 0;
}

19.Faça um programa que receba do usuário um arquivo que contenha o
nome e a nota de diversos alunos (da seguinte forma: NOME: JOÃO
NOTA: 8), um aluno por linha. Mostre na tela o nome e a nota do aluno
que possui a maior nota.

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *arquivo;
    char nomeArquivo[100];
    char nomeAluno[100];
    float notaAluno;
    float maiorNota = 0;
    char alunoMaiorNota[100];

    printf("Digite o nome do arquivo: ");
    scanf("%s", nomeArquivo);

    arquivo = fopen(nomeArquivo, "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    while (fscanf(arquivo, "NOME: %s NOTA: %f", nomeAluno, &notaAluno) != EOF) {
        if (notaAluno > maiorNota) {
            maiorNota = notaAluno;
            strcpy(alunoMaiorNota, nomeAluno);
        }
    }

    printf("Aluno com a maior nota: %s\n", alunoMaiorNota);
    printf("Nota: %.2f\n", maiorNota);

    fclose(arquivo);

    return 0;
}

20.Crie um programa que receba como entrada o número de alunos de uma
disciplina. Aloque dinamicamente dois vetores para armazenar as
informações a respeito desses alunos. O primeiro vetor contém o nome
dos alunos e o segundo contém suas notas finais. Crie um arquivo que
armazene, a cada linha, o nome do aluno e sua nota final. Use nomes
com no máximo 40 caracteres. Se o nome não contém 40 caracteres,
complete com espaço em branco.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int numAlunos;
    char nomeArquivo[100];

    printf("Digite o número de alunos: ");
    scanf("%d", &numAlunos);

    char **nomes = (char **)malloc(numAlunos * sizeof(char *));
    float *notas = (float *)malloc(numAlunos * sizeof(float));

    for (int i = 0; i < numAlunos; i++) {
        nomes[i] = (char *)malloc(41 * sizeof(char));  // 40 caracteres + 1 para o terminador null
    }

    for (int i = 0; i < numAlunos; i++) {
        printf("Digite o nome do aluno %d: ", i + 1);
        scanf(" %[^\n]s", nomes[i]);  // Lê o nome com espaços em branco

        printf("Digite a nota final do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
    }

    printf("Digite o nome do arquivo: ");
    scanf(" %[^\n]s", nomeArquivo);

    FILE *arquivo = fopen(nomeArquivo, "w");

    if (arquivo == NULL) {
        printf("Erro ao criar o arquivo.\n");
        return 1;
    }

    for (int i = 0; i < numAlunos; i++) {
        fprintf(arquivo, "%-40s %.2f\n", nomes[i], notas[i]);
    }

    printf("Arquivo criado com sucesso!\n");

    fclose(arquivo);

    for (int i = 0; i < numAlunos; i++) {
        free(nomes[i]);
    }
    free(nomes);
    free(notas);

    return 0;
}

21.Crie um programa que receba como entrada o número de alunos de uma
disciplina. Aloque dinamicamente em uma estrutura para armazenar as
informações a respeito desses alunos: nome do aluno e sua nota final.
Use nomes com no máximo 40 caracteres. Em seguida, salve os dados
dos alunos em um arquivo binário. Por fim, leia o arquivo e mostre o
nome do aluno com a maior nota.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NOME 40

typedef struct {
    char nome[MAX_NOME];
    float notaFinal;
} Aluno;

int main() {
    int numAlunos;
    char nomeArquivo[100];

    printf("Digite o número de alunos: ");
    scanf("%d", &numAlunos);

    Aluno *alunos = (Aluno *)malloc(numAlunos * sizeof(Aluno));

    for (int i = 0; i < numAlunos; i++) {
        printf("Digite o nome do aluno %d: ", i + 1);
        scanf(" %[^\n]s", alunos[i].nome);  // Lê o nome com espaços em branco

        printf("Digite a nota final do aluno %d: ", i + 1);
        scanf("%f", &alunos[i].notaFinal);
    }

    printf("Digite o nome do arquivo binário: ");
    scanf(" %[^\n]s", nomeArquivo);

    FILE *arquivo = fopen(nomeArquivo, "wb");

    if (arquivo == NULL) {
        printf("Erro ao criar o arquivo.\n");
        return 1;
    }

    fwrite(alunos, sizeof(Aluno), numAlunos, arquivo);

    fclose(arquivo);

    free(alunos);

    
    arquivo = fopen(nomeArquivo, "rb");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    Aluno alunoMaiorNota;
    float maiorNota = 0;

    while (fread(&alunoMaiorNota, sizeof(Aluno), 1, arquivo) == 1) {
        if (alunoMaiorNota.notaFinal > maiorNota) {
            maiorNota = alunoMaiorNota.notaFinal;
        }
    }

    fclose(arquivo);

    
    arquivo = fopen(nomeArquivo, "rb");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    while (fread(&alunoMaiorNota, sizeof(Aluno), 1, arquivo) == 1) {
        if (alunoMaiorNota.notaFinal == maiorNota) {
            printf("Aluno com a maior nota: %s\n", alunoMaiorNota.nome);
            printf("Nota: %.2f\n", alunoMaiorNota.notaFinal);
            break;
        }
    }

    fclose(arquivo);

    return 0;
}

22.Faça um programa que recebe como entrada o nome de um arquivo de
entrada e o nome de um arquivo de saída. O arquivo de entrada contém
o nome de um aluno ocupando 40 caracteres e três inteiros que indicam
suas notas. O programa deverá ler o arquivo de entrada e gerar um
arquivo de saída onde aparece o nome do aluno e as suas notas em
ordem crescente.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAMANHO_NOME 41

typedef struct {
    char nome[TAMANHO_NOME];
    int notas[3];
} Aluno;

int comparar(const void *a, const void *b) {
    const int *notaA = (const int *)a;
    const int *notaB = (const int *)b;
    return (*notaA - *notaB);
}

void lerArquivo(const char *nomeArquivoEntrada, Aluno alunos[], int *numAlunos) {
    FILE *arquivo = fopen(nomeArquivoEntrada, "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo de entrada.\n");
        exit(1);
    }

    *numAlunos = 0;
    while (fscanf(arquivo, "%40s %d %d %d", alunos[*numAlunos].nome, &alunos[*numAlunos].notas[0], &alunos[*numAlunos].notas[1], &alunos[*numAlunos].notas[2]) == 4) {
        (*numAlunos)++;
    }

    fclose(arquivo);
}

void escreverArquivo(const char *nomeArquivoSaida, Aluno alunos[], int numAlunos) {
    FILE *arquivo = fopen(nomeArquivoSaida, "w");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo de saída.\n");
        exit(1);
    }

    for (int i = 0; i < numAlunos; i++) {
        qsort(alunos[i].notas, 3, sizeof(int), comparar);
        fprintf(arquivo, "%s %d %d %d\n", alunos[i].nome, alunos[i].notas[0], alunos[i].notas[1], alunos[i].notas[2]);
    }

    fclose(arquivo);

    printf("Arquivo de saída gerado com sucesso!\n");
}

int main() {
    char nomeArquivoEntrada[100];
    char nomeArquivoSaida[100];
    int numAlunos;
    Aluno alunos[100];

    printf("Digite o nome do arquivo de entrada: ");
    scanf("%s", nomeArquivoEntrada);
    printf("Digite o nome do arquivo de saída: ");
    scanf("%s", nomeArquivoSaida);

    lerArquivo(nomeArquivoEntrada, alunos, &numAlunos);
    escreverArquivo(nomeArquivoSaida, alunos, numAlunos);

    return 0;
}

23.Escreva um programa que leia a profissão e o tempo de serviço (em
anos) de cada um dos 5 funcionários de uma empresa e armazene-os no
arquivo “emp.txt”. Cada linha do arquivo corresponde aos dados de um
funcionário. Utilize o comando fprintf(). Em seguida, leia o mesmo
arquivo utilizando fscanf(). Apresente os dados na tela.

#include <stdio.h>

#define MAX_FUNCIONARIOS 5
#define TAMANHO_PROFISSAO 50

typedef struct {
    char profissao[TAMANHO_PROFISSAO];
    int tempoServico;
} Funcionario;

void escreverDadosNoArquivo(Funcionario funcionarios[]) {
    FILE* arquivo = fopen("emp.txt", "w");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    for (int i = 0; i < MAX_FUNCIONARIOS; i++) {
        fprintf(arquivo, "%s %d\n", funcionarios[i].profissao, funcionarios[i].tempoServico);
    }

    fclose(arquivo);

    printf("Dados gravados no arquivo com sucesso!\n");
}

void lerDadosDoArquivo() {
    FILE* arquivo = fopen("emp.txt", "r");

    if (arquivo == NULL) {
        printf("Arquivo não encontrado.\n");
        return;
    }

    Funcionario funcionarios[MAX_FUNCIONARIOS];

    for (int i = 0; i < MAX_FUNCIONARIOS; i++) {
        fscanf(arquivo, "%s %d", funcionarios[i].profissao, &funcionarios[i].tempoServico);
    }

    fclose(arquivo);

    printf("Dados lidos do arquivo:\n");
    for (int i = 0; i < MAX_FUNCIONARIOS; i++) {
        printf("Profissão: %s\n", funcionarios[i].profissao);
        printf("Tempo de serviço: %d anos\n", funcionarios[i].tempoServico);
        printf("\n");
    }
}

int main() {
    Funcionario funcionarios[MAX_FUNCIONARIOS];

    printf("Digite os dados dos funcionários:\n");
    for (int i = 0; i < MAX_FUNCIONARIOS; i++) {
        printf("Funcionário %d:\n", i+1);
        printf("Profissão: ");
        scanf("%s", funcionarios[i].profissao);
        printf("Tempo de serviço (em anos): ");
        scanf("%d", &funcionarios[i].tempoServico);
        printf("\n");
    }

    escreverDadosNoArquivo(funcionarios);

    lerDadosDoArquivo();

    return 0;
}

24.Implemente um controle simples de mercadorias em uma despensa
doméstica. Para cada produto armazene um código numérico, descrição
e quantidade atual. O programa deve ter opções para entrada e retirada
de produtos, bem como um relatório geral e um de produtos não
disponíveis. Armazene os dados em arquivo binário.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[50];
    char telefone[20];
    int diaAniversario;
    int mesAniversario;
} Contato;

void inserirContato(Contato** agenda, int* numContatos) {
    *numContatos += 1;
    *agenda = realloc(*agenda, (*numContatos) * sizeof(Contato));

    Contato novoContato;

    printf("Entre com o nome do contato: ");
    scanf("%s", novoContato.nome);

    printf("Entre com o telefone do contato: ");
    scanf("%s", novoContato.telefone);

    printf("Entre com o dia do aniversario do contato: ");
    scanf("%d", &(novoContato.diaAniversario));

    printf("Entre com o mes do aniversario do contato: ");
    scanf("%d", &(novoContato.mesAniversario));

    (*agenda)[(*numContatos) - 1] = novoContato;

    printf("Contato inserido com sucesso!\n");
}

void removerContato(Contato** agenda, int* numContatos, char* nome) {
    int posicao = -1;

    for (int i = 0; i < *numContatos; i++) {
        if (strcmp((*agenda)[i].nome, nome) == 0) {
            posicao = i;
            break;
        }
    }

    if (posicao == -1) {
        printf("Contato não encontrado.\n");
        return;
    }

    for (int i = posicao; i < *numContatos - 1; i++) {
        (*agenda)[i] = (*agenda)[i + 1];
    }

    *numContatos -= 1;
    *agenda = realloc(*agenda, (*numContatos) * sizeof(Contato));

    printf("Contato removido com sucesso!\n");
}

void pesquisarContato(Contato* agenda, int numContatos, char* nome) {
    int encontrado = 0;

    for (int i = 0; i < numContatos; i++) {
        if (strcmp(agenda[i].nome, nome) == 0) {
            printf("Nome: %s\n", agenda[i].nome);
            printf("Telefone: %s\n", agenda[i].telefone);
            printf("Aniversário: %d/%d\n", agenda[i].diaAniversario, agenda[i].mesAniversario);
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        printf("Contato não encontrado.\n");
    }
}

void listarContatos(Contato* agenda, int numContatos) {
    printf("Lista de contatos:\n");

    for (int i = 0; i < numContatos; i++) {
        printf("Contato %d:\n", i + 1);
        printf("Nome: %s\n", agenda[i].nome);
        printf("Telefone: %s\n", agenda[i].telefone);
        printf("Aniversário: %d/%d\n\n", agenda[i].diaAniversario, agenda[i].mesAniversario);
    }
}

void listarContatosPorLetra(Contato* agenda, int numContatos, char letra) {
    printf("Contatos com nome iniciado pela letra '%c':\n", letra);

    for (int i = 0; i < numContatos; i++) {
        if (agenda[i].nome[0] == letra) {
            printf("Nome: %s\n", agenda[i].nome);
            printf("Telefone: %s\n", agenda[i].telefone);
            printf("Aniversário: %d/%d\n\n", agenda[i].diaAniversario, agenda[i].mesAniversario);
        }
    }
}

void imprimirAniversariantesMes(Contato* agenda, int numContatos, int mes) {
    printf("Aniversariantes do mês %d:\n", mes);

    for (int i = 0; i < numContatos; i++) {
        if (agenda[i].mesAniversario == mes) {
            printf("Nome: %s\n", agenda[i].nome);
            printf("Telefone: %s\n", agenda[i].telefone);
            printf("Aniversário: %d/%d\n\n", agenda[i].diaAniversario, agenda[i].mesAniversario);
        }
    }
}

void salvarDadosEmArquivo(Contato* agenda, int numContatos) {
    FILE* arquivo = fopen("agenda_contatos.bin", "wb");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    fwrite(&numContatos, sizeof(int), 1, arquivo);
    fwrite(agenda, sizeof(Contato), numContatos, arquivo);

    fclose(arquivo);

    printf("Dados salvos em arquivo com sucesso!\n");
}

void carregarDadosDeArquivo(Contato** agenda, int* numContatos) {
    FILE* arquivo = fopen("agenda_contatos.bin", "rb");

    if (arquivo == NULL) {
        printf("Arquivo de dados não encontrado.\n");
        return;
    }

    fread(numContatos, sizeof(int), 1, arquivo);

    *agenda = realloc(*agenda, (*numContatos) * sizeof(Contato));

    fread(*agenda, sizeof(Contato), *numContatos, arquivo);

    fclose(arquivo);

    printf("Dados carregados do arquivo com sucesso!\n");
}

void liberarMemoria(Contato* agenda) {
    free(agenda);
}

int main() {
    Contato* agenda = NULL;
    int numContatos = 0;

    int opcao;

    do {
        printf("\n--- MENU ---\n");
        printf("1. Inserir contato\n");
        printf("2. Remover contato\n");
        printf("3. Pesquisar contato pelo nome\n");
        printf("4. Listar todos os contatos\n");
        printf("5. Listar contatos por letra inicial\n");
        printf("6. Imprimir aniversariantes do mês\n");
        printf("7. Salvar dados em arquivo\n");
        printf("8. Carregar dados de arquivo\n");
        printf("0. Sair\n");

        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                inserirContato(&agenda, &numContatos);
                break;
            case 2: {
                char nome[50];
                printf("Entre com o nome do contato a ser removido: ");
                scanf("%s", nome);
                removerContato(&agenda, &numContatos, nome);
                break;
            }
            case 3: {
                char nome[50];
                printf("Entre com o nome do contato a ser pesquisado: ");
                scanf("%s", nome);
                pesquisarContato(agenda, numContatos, nome);
                break;
            }
            case 4:
                listarContatos(agenda, numContatos);
                break;
            case 5: {
                char letra;
                printf("Entre com a letra inicial dos contatos a serem listados: ");
                scanf(" %c", &letra);
                listarContatosPorLetra(agenda, numContatos, letra);
                break;
            }
            case 6: {
                int mes;
                printf("Entre com o mês dos aniversariantes a serem listados: ");
                scanf("%d", &mes);
                imprimirAniversariantesMes(agenda, numContatos, mes);
                break;
            }
            case 7:
                salvarDadosEmArquivo(agenda, numContatos);
                break;
            case 8:
                carregarDadosDeArquivo(&agenda, &numContatos);
                break;
            case 0:
                printf("Encerrando o programa...\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
                break;
        }
    } while (opcao != 0);

    liberarMemoria(agenda);

    return 0;
}


25.Faça um programa gerenciar uma agenda de contatos. Para cada
contato armazene o nome, o telefone e o aniversário (dia e mês). O
programa deve permitir
 inserir contato;
 remover contato;
 pesquisar um contato pelo nome;
 listar todos os contatos;
 listar os contatos cujo nome inicia com uma dada letra;
 imprimir os aniversariantes do mês.
Sempre que o programa for encerrado, os contatos devem ser
armazenados em um arquivo binário. Quando o programa iniciar, os
contatos devem ser inicializados com os dados contidos neste arquivo
binário.


26.Crie um programa que declare uma estrutura para o cadastro de alunos.
a) Dever ao ser armazenados, para cada aluno: matrícula, sobrenome
(apenas um), e ano de nascimento;
b) Ao início do programa, o usuário deverá informar o número de alunos
que serão armazenados;
c) O programa deverá alocar dinamicamente a quantidade necessária
de memória para armazenar os registros dos alunos;
d) O programa deverá pedir ao usuário que entre com as informações
dos alunos;
e) Em seguida, essas informações dever ˜ao ser gravadas em um
arquivo;
f) Ao final, mostrar os dados armazenados e liberar a memória alocada.
Ao iniciar o programa, forneça ao usuário uma opção para carregar os
registros do arquivo para a memória do computador alocando
dinamicamente a quantidade de memória necessária.
Dica: para que o usuário possa entrar com novos dados, além dos que
foram obtidos a partir do arquivo, use a função realloc() para realocar a
quantidade de memória usada.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int matricula;
    char sobrenome[50];
    int anoNascimento;
} Aluno;

void cadastrarAluno(Aluno** alunos, int* numAlunos) {
    *numAlunos += 1;
    *alunos = realloc(*alunos, (*numAlunos) * sizeof(Aluno));

    Aluno novoAluno;

    printf("Entre com a matrícula do aluno: ");
    scanf("%d", &(novoAluno.matricula));

    printf("Entre com o sobrenome do aluno: ");
    scanf("%s", novoAluno.sobrenome);

    printf("Entre com o ano de nascimento do aluno: ");
    scanf("%d", &(novoAluno.anoNascimento));

    (*alunos)[(*numAlunos) - 1] = novoAluno;

    printf("Aluno cadastrado com sucesso!\n");
}

void exibirAlunos(Aluno* alunos, int numAlunos) {
    printf("Dados dos alunos:\n");

    for (int i = 0; i < numAlunos; i++) {
        printf("Aluno %d:\n", i + 1);
        printf("Matrícula: %d\n", alunos[i].matricula);
        printf("Sobrenome: %s\n", alunos[i].sobrenome);
        printf("Ano de Nascimento: %d\n\n", alunos[i].anoNascimento);
    }
}

void salvarDadosEmArquivo(Aluno* alunos, int numAlunos) {
    FILE* arquivo = fopen("dados_alunos.txt", "w");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    for (int i = 0; i < numAlunos; i++) {
        fprintf(arquivo, "Matrícula: %d\n", alunos[i].matricula);
        fprintf(arquivo, "Sobrenome: %s\n", alunos[i].sobrenome);
        fprintf(arquivo, "Ano de Nascimento: %d\n\n", alunos[i].anoNascimento);
    }

    fclose(arquivo);

    printf("Dados salvos em arquivo com sucesso.\n");
}

void liberarMemoria(Aluno* alunos) {
    free(alunos);
    printf("Memória liberada.\n");
}

int main() {
    Aluno* alunos = NULL;
    int numAlunos = 0;
    int opcao;

    printf("Informe o número de alunos: ");
    scanf("%d", &numAlunos);

    alunos = malloc(numAlunos * sizeof(Aluno));

    do {
        printf("\nSelecione uma opção:\n");
        printf("1 - Cadastrar aluno\n");
        printf("2 - Exibir alunos cadastrados\n");
        printf("3 - Salvar dados em arquivo\n");
        printf("4 - Liberar memória\n");
        printf("0 - Sair do programa\n");
        printf("Opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                cadastrarAluno(&alunos, &numAlunos);
                break;
            case 2:
                exibirAlunos(alunos, numAlunos);
                break;
            case 3:
                salvarDadosEmArquivo(alunos, numAlunos);
                break;
            case 4:
                liberarMemoria(alunos);
                alunos = NULL;
                numAlunos = 0;
                break;
            case 0:
                printf("Programa encerrado.\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    } while (opcao != 0);

    if (alunos != NULL) {
        liberarMemoria(alunos);
    }

    return 0;
}

27.Faça um programa para gerenciar as notas dos alunos de uma turma
salva em um arquivo. O programa deverá ter um menu contendo as
seguintes opções:
 Definir informações da turma;
 Inserir aluno e notas;
 Exibir alunos e médias;
 Exibir alunos aprovados;
 Exibir alunos reprovados;
 Salvar dados em Disco;
 Sair do programa (fim).
Faça a rotina que gerencia o menu dentro do main, e para cada uma das
opções deste menu, crie uma função específica.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ALUNOS 100
#define TAM_NOME 50

typedef struct {
    char nome[TAM_NOME];
    float nota1;
    float nota2;
    float media;
} Aluno;

Aluno turma[MAX_ALUNOS];
int numAlunos = 0;

void definirInformacoesTurma() {
    printf("Digite o número de alunos da turma: ");
    scanf("%d", &numAlunos);

    printf("Informações da turma definidas.\n");
}

void inserirAlunoNotas() {
    if (numAlunos >= MAX_ALUNOS) {
        printf("Limite máximo de alunos atingido.\n");
        return;
    }

    Aluno aluno;

    printf("Digite o nome do aluno: ");
    scanf("%s", aluno.nome);

    printf("Digite a nota 1 do aluno: ");
    scanf("%f", &aluno.nota1);

    printf("Digite a nota 2 do aluno: ");
    scanf("%f", &aluno.nota2);

    aluno.media = (aluno.nota1 + aluno.nota2) / 2.0;

    turma[numAlunos] = aluno;
    numAlunos++;

    printf("Aluno inserido com sucesso.\n");
}

void exibirAlunosMedias() {
    printf("Alunos e médias:\n");

    for (int i = 0; i < numAlunos; i++) {
        printf("Aluno: %s\n", turma[i].nome);
        printf("Média: %.2f\n\n", turma[i].media);
    }
}

void exibirAlunosAprovados() {
    printf("Alunos aprovados:\n");

    for (int i = 0; i < numAlunos; i++) {
        if (turma[i].media >= 6.0) {
            printf("Aluno: %s\n", turma[i].nome);
            printf("Média: %.2f\n\n", turma[i].media);
        }
    }
}

void exibirAlunosReprovados() {
    printf("Alunos reprovados:\n");

    for (int i = 0; i < numAlunos; i++) {
        if (turma[i].media < 6.0) {
            printf("Aluno: %s\n", turma[i].nome);
            printf("Média: %.2f\n\n", turma[i].media);
        }
    }
}

void salvarDadosDisco() {
    FILE *arquivo = fopen("dados_turma.txt", "w");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    for (int i = 0; i < numAlunos; i++) {
        fprintf(arquivo, "Aluno: %s\n", turma[i].nome);
        fprintf(arquivo, "Nota 1: %.2f\n", turma[i].nota1);
        fprintf(arquivo, "Nota 2: %.2f\n", turma[i].nota2);
        fprintf(arquivo, "Média: %.2f\n\n", turma[i].media);
    }

    fclose(arquivo);

    printf("Dados salvos em disco com sucesso.\n");
}

int main() {
    int opcao;

    do {
        printf("Selecione uma opção:\n");
        printf("1 - Definir informações da turma\n");
        printf("2 - Inserir aluno e notas\n");
        printf("3 - Exibir alunos e médias\n");
        printf("4 - Exibir alunos aprovados\n");
        printf("5 - Exibir alunos reprovados\n");
        printf("6 - Salvar dados em disco\n");
        printf("7 - Sair do programa\n");
        printf("Opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                definirInformacoesTurma();
                break;
            case 2:
                inserirAlunoNotas();
                break;
            case 3:
                exibirAlunosMedias();
                break;
            case 4:
                exibirAlunosAprovados();
                break;
            case 5:
                exibirAlunosReprovados();
                break;
            case 6:
                salvarDadosDisco();
                break;
            case 7:
                printf("Programa encerrado.\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }

        printf("\n");
    } while (opcao != 7);

    return 0;
}

28.Faça um programa que recebe como entrada o nome de um arquivo de
entrada e o nome de um arquivo de saída. Cada linha do arquivo de
entrada possui colunas de tamanho de 30 caracteres. No arquivo de
saída deverá ser escrito o arquivo de entrada de forma inversa. Veja um
exemplo:
Arquivo de entrada:
Hoje eh dia de prova de PP
A prova esta muito facil
Vou tirar uma boa nota
Arquivo de saida:
Aton aob amu rarit uov
Licaf otium atse avorp A
PP ed avorp ed aid he ejoH

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_COLUNAS 30

void inverterLinha(char *linha) {
    int tamanho = strlen(linha);
    char *temp = (char *)malloc((tamanho + 1) * sizeof(char));

    for (int i = 0; i < tamanho; i++) {
        temp[i] = linha[tamanho - i - 1];
    }
    temp[tamanho] = '\0';

    strcpy(linha, temp);

    free(temp);
}

int main() {
    char nome_arquivo_entrada[100];
    char nome_arquivo_saida[100];

    printf("Digite o nome do arquivo de entrada: ");
    scanf("%s", nome_arquivo_entrada);

    printf("Digite o nome do arquivo de saída: ");
    scanf("%s", nome_arquivo_saida);

    FILE *arquivo_entrada = fopen(nome_arquivo_entrada, "r");
    FILE *arquivo_saida = fopen(nome_arquivo_saida, "w");

    if (arquivo_entrada == NULL || arquivo_saida == NULL) {
        printf("Erro ao abrir os arquivos.\n");
        return 1;
    }

    char linha[MAX_COLUNAS + 1];

    while (fgets(linha, sizeof(linha), arquivo_entrada) != NULL) {
        inverterLinha(linha);
        fprintf(arquivo_saida, "%s", linha);
    }

    fclose(arquivo_entrada);
    fclose(arquivo_saida);

    printf("Arquivo de saída gerado com sucesso.\n");

    return 0;
}

29.Codifique um programa que manipule um arquivo contendo registros
descritos pelos seguintes campos: codigo_vendedor, nome_vendedor,
valor_da_venda e mes. A manipulação do arquivo em questão é feita
através da execução das operações disponibilizadas pelo seguinte menu:
 Criar o arquivo de dados;
 Incluir um determinado registro no arquivo;
 Excluir um determinado vendedor no arquivo;
 Alterar o valor de uma venda no arquivo;
 Imprimir os registros na saída padrão;
 Excluir o arquivo de dados;
 Finalizar o programa.
Os registros devem estar ordenados no arquivo, de forma crescente, de
acordo com as Informações contidas nos campos código vendedor e mês.
Não deve existir mais de um registro no arquivo com mesmos valores nos
campos código vendedor e mês.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NOME 50

typedef struct {
    int codigo_vendedor;
    char nome_vendedor[MAX_NOME];
    float valor_da_venda;
    int mes;
} Registro;

void criarArquivoDados() {
    FILE *arquivo = fopen("dados.txt", "w");

    if (arquivo == NULL) {
        printf("Erro ao criar o arquivo.\n");
        return;
    }

    fclose(arquivo);

    printf("Arquivo de dados criado com sucesso.\n");
}

void incluirRegistro() {
    FILE *arquivo = fopen("dados.txt", "a");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    Registro novo_registro;

    printf("Digite o código do vendedor: ");
    scanf("%d", &novo_registro.codigo_vendedor);

    printf("Digite o nome do vendedor: ");
    scanf(" %[^\n]s", novo_registro.nome_vendedor);

    printf("Digite o valor da venda: ");
    scanf("%f", &novo_registro.valor_da_venda);

    printf("Digite o mês: ");
    scanf("%d", &novo_registro.mes);

    fwrite(&novo_registro, sizeof(Registro), 1, arquivo);

    fclose(arquivo);

    printf("Registro incluído com sucesso.\n");
}

void excluirRegistro() {
    FILE *arquivo = fopen("dados.txt", "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    int codigo, mes;
    printf("Digite o código do vendedor a ser excluído: ");
    scanf("%d", &codigo);

    printf("Digite o mês: ");
    scanf("%d", &mes);

    FILE *temp = fopen("temp.txt", "w");

    Registro registro;

    while (fread(&registro, sizeof(Registro), 1, arquivo) == 1) {
        if (registro.codigo_vendedor != codigo || registro.mes != mes) {
            fwrite(&registro, sizeof(Registro), 1, temp);
        }
    }

    fclose(arquivo);
    fclose(temp);

    remove("dados.txt");
    rename("temp.txt", "dados.txt");

    printf("Registro excluído com sucesso.\n");
}

void alterarValorVenda() {
    FILE *arquivo = fopen("dados.txt", "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    int codigo, mes;
    printf("Digite o código do vendedor: ");
    scanf("%d", &codigo);

    printf("Digite o mês: ");
    scanf("%d", &mes);

    FILE *temp = fopen("temp.txt", "w");

    Registro registro;

    while (fread(&registro, sizeof(Registro), 1, arquivo) == 1) {
        if (registro.codigo_vendedor == codigo && registro.mes == mes) {
            printf("Digite o novo valor da venda: ");
            scanf("%f", &registro.valor_da_venda);
        }
        fwrite(&registro, sizeof(Registro), 1, temp);
    }

    fclose(arquivo);
    fclose(temp);

    remove("dados.txt");
    rename("temp.txt", "dados.txt");

    printf("Valor da venda alterado com sucesso.\n");
}

void imprimirRegistros() {
    FILE *arquivo = fopen("dados.txt", "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    Registro registro;

    while (fread(&registro, sizeof(Registro), 1, arquivo) == 1) {
        printf("Código: %d\n", registro.codigo_vendedor);
        printf("Nome: %s\n", registro.nome_vendedor);
        printf("Valor da venda: %.2f\n", registro.valor_da_venda);
        printf("Mês: %d\n", registro.mes);
        printf("--------------------------\n");
    }

    fclose(arquivo);
}

void excluirArquivoDados() {
    remove("dados.txt");
    printf("Arquivo de dados excluído.\n");
}

int main() {
    int opcao;

    do {
        printf("\nMenu:\n");
        printf("1. Criar arquivo de dados\n");
        printf("2. Incluir um registro\n");
        printf("3. Excluir um vendedor\n");
        printf("4. Alterar o valor de uma venda\n");
        printf("5. Imprimir os registros\n");
        printf("6. Excluir o arquivo de dados\n");
        printf("7. Finalizar o programa\n");
        printf("Digite uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                criarArquivoDados();
                break;
            case 2:
                incluirRegistro();
                break;
            case 3:
                excluirRegistro();
                break;
            case 4:
                alterarValorVenda();
                break;
            case 5:
                imprimirRegistros();
                break;
            case 6:
                excluirArquivoDados();
                break;
            case 7:
                printf("Programa finalizado.\n");
                break;
            default:
                printf("Opção inválida.\n");
        }
    } while (opcao != 7);

    return 0;
}
