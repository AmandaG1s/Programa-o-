//Amanda Gomes-12221BCC016


1. Escreva um trecho de código para fazer a criação dos novos tipos de dados conforme
solicitado abaixo:
- Horário: composto de hora, minutos e segundos.
- Data: composto de dia, mês e ano.
- Compromisso: composto de uma data, horário e texto que descreve o compromisso.

typedef struct {
    int hora;
    int minutos;
    int segundos;
} Horario;

typedef struct {
    int dia;
    int mes;
    int ano;
} Data;

typedef struct {
    Data data;
    Horario horario;
    char texto[100];
} Compromisso;

2. Implemente um programa que leia o nome, a idade e o endereço de uma pessoa e armazene
os dados em uma estrutura.

#include <stdio.h>

typedef struct {
    char nome[50];
    int idade;
    char endereco[100];
} Pessoa;

int main() {
    Pessoa pessoa;

    printf("Entre com os dados da pessoa:\n");
    printf("Nome: ");
    fgets(pessoa.nome, 50, stdin);
    printf("Idade: ");
    scanf("%d", &pessoa.idade);
    getchar(); // Limpa o buffer do teclado
    printf("Endereco: ");
    fgets(pessoa.endereco, 100, stdin);

    printf("\nDados da pessoa:\n");
    printf("Nome: %s", pessoa.nome);
    printf("Idade: %d\n", pessoa.idade);
    printf("Endereco: %s", pessoa.endereco);

    return 0;
}


3. Construa uma estrutura aluno com nome, número de matrıcula e curso. Leia do usuário a
informação de 5 alunos, armazene em um vetor dessa estrutura e imprima os dados na tela.

#include <stdio.h>

typedef struct {
    char nome[50];
    int matricula;
    char curso[50];
} Aluno;

int main() {
    Aluno alunos[5];

    printf("Entre com os dados dos alunos:\n");

    for (int i = 0; i < 5; i++) {
        printf("\nAluno %d:\n", i+1);

        printf("Nome: ");
        fgets(alunos[i].nome, 50, stdin);

        printf("Matricula: ");
        scanf("%d", &alunos[i].matricula);
        getchar(); // Limpa o buffer do teclado

        printf("Curso: ");
        fgets(alunos[i].curso, 50, stdin);
    }

    printf("\nDados dos alunos:\n");

    for (int i = 0; i < 5; i++) {
        printf("\nAluno %d:\n", i+1);
        printf("Nome: %s", alunos[i].nome);
        printf("Matricula: %d\n", alunos[i].matricula);
        printf("Curso: %s", alunos[i].curso);
    }

    return 0;
}

4. Crie uma estrutura representando os alunos de um determinado curso. A estrutura deve
conter a matrícula do aluno, nome, nota da primeira prova, nota da segunda prova e nota
da terceira prova.
a) Permita ao usuário entrar com os dados de 5 alunos;
b) Encontre o aluno com maior nota da primeira prova;
c) Encontre o aluno com maior média geral;
d) Encontre o aluno com menor média geral;
e) Para cada aluno diga se ele foi aprovado ou reprovado, considerando o valor 6 para
aprovação.

#include <stdio.h>

typedef struct {
    int matricula;
    char nome[50];
    float nota1;
    float nota2;
    float nota3;
} Aluno;

int main() {
    Aluno alunos[5];
    float maiorNota1 = 0;
    float maiorMedia = 0;
    float menorMedia = 10;

    printf("Entre com os dados dos alunos:\n");

    for (int i = 0; i < 5; i++) {
        printf("\nAluno %d:\n", i+1);

        printf("Matricula: ");
        scanf("%d", &alunos[i].matricula);
        getchar(); // Limpa o buffer do teclado

        printf("Nome: ");
        fgets(alunos[i].nome, 50, stdin);

        printf("Nota 1: ");
        scanf("%f", &alunos[i].nota1);
        getchar();

        printf("Nota 2: ");
        scanf("%f", &alunos[i].nota2);
        getchar();

        printf("Nota 3: ");
        scanf("%f", &alunos[i].nota3);
        getchar();

        if (alunos[i].nota1 > maiorNota1) {
            maiorNota1 = alunos[i].nota1;
        }

        float media = (alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3) / 3;

        
        if (media > maiorMedia) {
            maiorMedia = media;
        }

      
        if (media < menorMedia) {
            menorMedia = media;
        }

        
        if (media >= 6) {
            printf("Situação: Aprovado\n");
        } else {
            printf("Situação: Reprovado\n");
        }
    }

    printf("\nAluno com maior nota na primeira prova:\n");

    for (int i = 0; i < 5; i++) {
        if (alunos[i].nota1 == maiorNota1) {
            printf("Matrícula: %d\n", alunos[i].matricula);
            printf("Nome: %s", alunos[i].nome);
            printf("Nota 1: %.2f\n", alunos[i].nota1);
            printf("Nota 2: %.2f\n", alunos[i].nota2);
            printf("Nota 3: %.2f\n", alunos[i].nota3);
            break;
        }
    }

    printf("\nAluno com maior média geral:\n");

    for (int i = 0; i < 5; i++) {
        float media = (alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3) / 3;
        if (media == maiorMedia) {
            printf("Matrícula: %d\n", alunos[i].matricula);
            printf("Nome: %s", alunos[i].nome);
            printf("Nota 1: %.2f\n", alunos[i].nota1);
            printf("Nota 2: %.2f\n", alunos[i].nota2);
            printf("Nota 3: %.2f\n", alunos[i].nota3);
            printf("Média: %.2f\n", media);
            break;
        }

5. Considerando a estrutura
struct vetor {
float a;
float b;
float c;
};
para representar um vetor no R3, implemente um programa que calcule a soma de dois vetores.
#include <stdio.h>

struct vetor {
    float a;
    float b;
    float c;
};

int main() {
    struct vetor v;

    printf("Entre com os valores de a, b e c:\n");
    scanf("%f %f %f", &v.a, &v.b, &v.c);

    printf("\nValores informados:\n");
    printf("a: %.2f\n", v.a);
    printf("b: %.2f\n", v.b);
    printf("c: %.2f\n", v.c);

    return 0;
}


6. Faça um programa que realize a leitura dos seguintes dados relativos a um conjunto de
alunos: Matricula, Nome, Código da Disciplina, Nota1 e Nota2. Considere uma turma de até
10 alunos. Após ler todos os dados digitados, e depois de armazena-los em um vetor de
estrutura, exibir na tela a listagem final dos alunos com as suas respectivas medias finais
(use uma média ponderada: Nota1 com peso = 1.0 e Nota2 com peso = 2.0).

#include <stdio.h>

struct Aluno {
    int matricula;
    char nome[50];
    int codigoDisciplina;
    float nota1;
    float nota2;
};

int main() {
    struct Aluno turma[10];
    int numAlunos;

    printf("Digite o número de alunos (até 10): ");
    scanf("%d", &numAlunos);

    
    for (int i = 0; i < numAlunos; i++) {
        printf("\nDados do Aluno %d:\n", i + 1);
        printf("Matrícula: ");
        scanf("%d", &turma[i].matricula);
        printf("Nome: ");
        scanf("%s", turma[i].nome);
        printf("Código da Disciplina: ");
        scanf("%d", &turma[i].codigoDisciplina);
        printf("Nota 1: ");
        scanf("%f", &turma[i].nota1);
        printf("Nota 2: ");
        scanf("%f", &turma[i].nota2);
    }

    printf("\nLista Final de Alunos:\n");
    for (int i = 0; i < numAlunos; i++) {
        float mediaFinal = (turma[i].nota1 + 2 * turma[i].nota2) / 3;
        printf("Aluno %d\n", i + 1);
        printf("Matrícula: %d\n", turma[i].matricula);
        printf("Nome: %s\n", turma[i].nome);
        printf("Código da Disciplina: %d\n", turma[i].codigoDisciplina);
        printf("Média Final: %.2f\n", mediaFinal);
        printf("----------------------\n");
    }

    return 0;
}

7. Faça um programa que converta coordenadas polares para cartesianas:
 Crie e leia um ponto em coordenada polar, composto por raio (r) e argumento (a)
em radianos;
 Crie outro ponto, agora em coordenada cartesiana, composto por x e y, sabendo
que x = r * cos(a) e y = r * sin(a).
No programa principal, leia um ponto em coordenada polar e mostre as coordenadas do
ponto gerado no plano cartesiano.

#include <stdio.h>
#include <math.h>

struct PontoPolar {
    float raio;
    float argumento;
};

struct PontoCartesiano {
    float x;
    float y;
};

int main() {
    struct PontoPolar polar;
    struct PontoCartesiano cartesiano;

    printf("Digite as coordenadas polares (raio e argumento em radianos): ");
    scanf("%f %f", &polar.raio, &polar.argumento);

    
    cartesiano.x = polar.raio * cos(polar.argumento);
    cartesiano.y = polar.raio * sin(polar.argumento);

    
    printf("Coordenadas Cartesianas:\n");
    printf("x: %.2f\n", cartesiano.x);
    printf("y: %.2f\n", cartesiano.y);

    return 0;
}

8. Faça um programa que armazene em um registro de dados (estrutura composta) os dados
de um funcionário de uma empresa, compostos de: Nome, Idade, Sexo (M/F), CPF, Data de
Nascimento, Código do Setor onde trabalha (0-99), Cargo que ocupa (string de até 30
caracteres) e Salário. Os dados devem ser digitados pelo usuário, armazenados na estrutura
e exibidos na tela.

#include <stdio.h>

struct Funcionario {
    char nome[50];
    int idade;
    char sexo;
    char cpf[12];
    char dataNascimento[11];
    int codigoSetor;
    char cargo[30];
    float salario;
};

int main() {
    struct Funcionario funcionario;

    
    printf("Digite os dados do funcionário:\n");
    printf("Nome: ");
    fgets(funcionario.nome, 50, stdin);
    printf("Idade: ");
    scanf("%d", &funcionario.idade);
    printf("Sexo (M/F): ");
    scanf(" %c", &funcionario.sexo);
    printf("CPF: ");
    scanf("%s", funcionario.cpf);
    printf("Data de Nascimento: ");
    scanf("%s", funcionario.dataNascimento);
    printf("Código do Setor (0-99): ");
    scanf("%d", &funcionario.codigoSetor);
    printf("Cargo: ");
    scanf(" %[^\n]", funcionario.cargo);
    printf("Salário: ");
    scanf("%f", &funcionario.salario);

    
    printf("\nDados do funcionário:\n");
    printf("Nome: %s", funcionario.nome);
    printf("Idade: %d\n", funcionario.idade);
    printf("Sexo: %c\n", funcionario.sexo);
    printf("CPF: %s\n", funcionario.cpf);
    printf("Data de Nascimento: %s\n", funcionario.dataNascimento);
    printf("Código do Setor: %d\n", funcionario.codigoSetor);
    printf("Cargo: %s\n", funcionario.cargo);
    printf("Salário: %.2f\n", funcionario.salario);

    return 0;
}

9. Faça um programa que faca operações simples de números complexos:
 Crie e leia dois números complexos z e w, compostos por parte real e parte imaginária;
 Apresente a soma, subtração e produto entre z e w, nessa ordem, bem como o módulo
de ambos.

#include <stdio.h>
#include <math.h>

struct Complexo {
    float real;
    float imaginario;
};

void soma(struct Complexo z, struct Complexo w) {
    struct Complexo resultado;
    resultado.real = z.real + w.real;
    resultado.imaginario = z.imaginario + w.imaginario;
    printf("Soma: %.2f + %.2fi\n", resultado.real, resultado.imaginario);
}

void subtracao(struct Complexo z, struct Complexo w) {
    struct Complexo resultado;
    resultado.real = z.real - w.real;
    resultado.imaginario = z.imaginario - w.imaginario;
    printf("Subtração: %.2f + %.2fi\n", resultado.real, resultado.imaginario);
}

void produto(struct Complexo z, struct Complexo w) {
    struct Complexo resultado;
    resultado.real = (z.real * w.real) - (z.imaginario * w.imaginario);
    resultado.imaginario = (z.real * w.imaginario) + (z.imaginario * w.real);
    printf("Produto: %.2f + %.2fi\n", resultado.real, resultado.imaginario);
}

float modulo(struct Complexo z) {
    float modulo = sqrt((z.real * z.real) + (z.imaginario * z.imaginario));
    return modulo;
}

int main() {
    struct Complexo z, w;

    
    printf("Digite o primeiro número complexo:\n");
    printf("Parte Real: ");
    scanf("%f", &z.real);
    printf("Parte Imaginária: ");
    scanf("%f", &z.imaginario);

    printf("\nDigite o segundo número complexo:\n");
    printf("Parte Real: ");
    scanf("%f", &w.real);
    printf("Parte Imaginária: ");
    scanf("%f", &w.imaginario);

    
    printf("\nOperações com os números complexos:\n");
    soma(z, w);
    subtracao(z, w);
    produto(z, w);

   
    printf("\nMódulo dos números complexos:\n");
    printf("Módulo de z: %.2f\n", modulo(z));
    printf("Módulo de w: %.2f\n", modulo(w));

    return 0;
}

10. Utilizando uma estrutura, faça um programa que permita a entrada de nome, endereço e
telefone de 5 pessoas e os imprima em ordem alfabética.

#include <stdio.h>
#include <string.h>

struct Pessoa {
    char nome[50];
    char endereco[100];
    char telefone[15];
};

void ordenarPessoas(struct Pessoa pessoas[], int tamanho) {
    int i, j;
    struct Pessoa temp;

    for (i = 0; i < tamanho - 1; i++) {
        for (j = i + 1; j < tamanho; j++) {
            if (strcmp(pessoas[i].nome, pessoas[j].nome) > 0) {
                temp = pessoas[i];
                pessoas[i] = pessoas[j];
                pessoas[j] = temp;
            }
        }
    }
}

int main() {
    struct Pessoa pessoas[5];
    int i;

    
    for (i = 0; i < 5; i++) {
        printf("Digite o nome da pessoa %d: ", i+1);
        fgets(pessoas[i].nome, 50, stdin);
        printf("Digite o endereço da pessoa %d: ", i+1);
        fgets(pessoas[i].endereco, 100, stdin);
        printf("Digite o telefone da pessoa %d: ", i+1);
        fgets(pessoas[i].telefone, 15, stdin);
        printf("\n");
    }

    
    ordenarPessoas(pessoas, 5);

    
    printf("Pessoas em ordem alfabética:\n");
    for (i = 0; i < 5; i++) {
        printf("Nome: %s", pessoas[i].nome);
        printf("Endereço: %s", pessoas[i].endereco);
        printf("Telefone: %s", pessoas[i].telefone);
        printf("\n");
    }

    return 0;
}

11. Faça um programa que leia os dados de 10 alunos (Nome, matricula, Média Final),
armazenando em um vetor. Uma vez lidos os dados, divida estes dados em 2 novos vetores,
o vetor dos aprovados e o vetor dos reprovados, considerando a média mínima para a
aprovação como sendo 5.0. Exibir na tela os dados do vetor de aprovados, seguido dos dados
do vetor de reprovados.

#include <stdio.h>

struct Aluno {
    char nome[50];
    int matricula;
    float mediaFinal;
};

int main() {
    struct Aluno alunos[10];
    struct Aluno aprovados[10];
    struct Aluno reprovados[10];
    int i, j = 0, k = 0;

    
    for (i = 0; i < 10; i++) {
        printf("Digite o nome do aluno %d: ", i+1);
        scanf("%s", alunos[i].nome);
        printf("Digite a matrícula do aluno %d: ", i+1);
        scanf("%d", &alunos[i].matricula);
        printf("Digite a média final do aluno %d: ", i+1);
        scanf("%f", &alunos[i].mediaFinal);
        printf("\n");
    }

    
    for (i = 0; i < 10; i++) {
        if (alunos[i].mediaFinal >= 5.0) {
            aprovados[j] = alunos[i];
            j++;
        } else {
            reprovados[k] = alunos[i];
            k++;
        }
    }

    
    printf("Alunos aprovados:\n");
    for (i = 0; i < j; i++) {
        printf("Nome: %s\n", aprovados[i].nome);
        printf("Matrícula: %d\n", aprovados[i].matricula);
        printf("Média Final: %.2f\n", aprovados[i].mediaFinal);
        printf("\n");
    }

    
    printf("Alunos reprovados:\n");
    for (i = 0; i < k; i++) {
        printf("Nome: %s\n", reprovados[i].nome);
        printf("Matrícula: %d\n", reprovados[i].matricula);
        printf("Média Final: %.2f\n", reprovados[i].mediaFinal);
        printf("\n");
    }

    return 0;
}

12. Escolha um jogo de cartas, baseado em um “baralho tradicional” (cada carta tem seu naipe
e seu valor). Implemente a parte de distribuição (sorteio) de cartas para 2 jogadores,
considerando que cada jogador irá receber 3 cartas. Exiba na tela as cartas que cada um dos
jogadores recebeu.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Estrutura para representar uma carta
struct Carta {
    int valor;
    char naipe;
};

// Função para embaralhar o baralho
void embaralhar(struct Carta baralho[], int tamanho) {
    srand(time(NULL));
    for (int i = tamanho - 1; i > 0; i--) {
        int j = rand() % (i + 1);
        struct Carta temp = baralho[i];
        baralho[i] = baralho[j];
        baralho[j] = temp;
    }
}

// Função para exibir as cartas de um jogador
void exibirCartas(struct Carta jogador[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("Carta %d: Valor %d, Naipe %c\n", i+1, jogador[i].valor, jogador[i].naipe);
    }
}

int main() {
    struct Carta baralho[52];
    struct Carta jogador1[3];
    struct Carta jogador2[3];

    
    int index = 0;
    for (int valor = 1; valor <= 13; valor++) {
        for (char naipe = 'A'; naipe <= 'D'; naipe++) {
            baralho[index].valor = valor;
            baralho[index].naipe = naipe;
            index++;
        }
    }

   
    embaralhar(baralho, 52);

    
    for (int i = 0; i < 3; i++) {
        jogador1[i] = baralho[i];
        jogador2[i] = baralho[i+3];
    }

    
    printf("Cartas do Jogador 1:\n");
    exibirCartas(jogador1, 3);

    printf("\n");

    printf("Cartas do Jogador 2:\n");
    exibirCartas(jogador2, 3);

    return 0;
}

13. Peça ao usuário para digitar seus dados pessoais (Nome, Endereço, Data de Nascimento,
Cidade, CEP, e-mail), verifique se as informações de Data de Nascimento, CEP e e-mail fazem
sentido, e mostre ao usuário as informações, se estão todas corretas, ou mostre que alguma
informação estava errada.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

// Função para verificar se a Data de Nascimento é válida
bool verificarDataNascimento(char data[]) {
    // Implemente aqui a lógica para verificar se a data é válida
    // Retorna true se for válida, false caso contrário
    // Exemplo simplificado: considera qualquer valor válido
    return true;
}

// Função para verificar se o CEP é válido
bool verificarCEP(char cep[]) {
    // Implemente aqui a lógica para verificar se o CEP é válido
    // Retorna true se for válido, false caso contrário
    // Exemplo simplificado: considera qualquer valor válido
    return true;
}

// Função para verificar se o e-mail é válido
bool verificarEmail(char email[]) {
    // Implemente aqui a lógica para verificar se o e-mail é válido
    // Retorna true se for válido, false caso contrário
    // Exemplo simplificado: considera qualquer valor válido
    return true;
}

int main() {
    char nome[100];
    char endereco[100];
    char dataNascimento[11];
    char cidade[100];
    char cep[9];
    char email[100];

    // Solicita ao usuário para digitar os dados pessoais
    printf("Digite seu Nome: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0';  // Remove o caractere de nova linha

    printf("Digite seu Endereco: ");
    fgets(endereco, sizeof(endereco), stdin);
    endereco[strcspn(endereco, "\n")] = '\0';

    printf("Digite sua Data de Nascimento (formato: dd/mm/aaaa): ");
    fgets(dataNascimento, sizeof(dataNascimento), stdin);
    dataNascimento[strcspn(dataNascimento, "\n")] = '\0';

    printf("Digite sua Cidade: ");
    fgets(cidade, sizeof(cidade), stdin);
    cidade[strcspn(cidade, "\n")] = '\0';

    printf("Digite seu CEP: ");
    fgets(cep, sizeof(cep), stdin);
    cep[strcspn(cep, "\n")] = '\0';

    printf("Digite seu e-mail: ");
    fgets(email, sizeof(email), stdin);
    email[strcspn(email, "\n")] = '\0';

    
    bool dadosValidos = true;
    if (!verificarDataNascimento(dataNascimento)) {
        printf("Data de Nascimento invalida!\n");
        dadosValidos = false;
    }

    if (!verificarCEP(cep)) {
        printf("CEP invalido!\n");
        dadosValidos = false;
    }

    if (!verificarEmail(email)) {
        printf("E-mail invalido!\n");
        dadosValidos = false;
    }

    
    if (dadosValidos) {
        printf("\nInformacoes fornecidas:\n");
        printf("Nome: %s\n", nome);
        printf("Endereco: %s\n", endereco);
        printf("Data de Nascimento: %s\n", dataNascimento);
        printf("Cidade: %s\n", cidade);
        printf("CEP: %s\n", cep);
        printf("E-mail: %s\n", email);
    } else {
        printf("\nAlgumas informacoes fornecidas estao incorretas!\n");
    }

    return 0;
}

14. Faça um programa que leia um vetor com os dados de 5 carros: marca (máximo 15 letras),
ano e preço. Leia um valor p e mostre as informações de todos os carros com preço menor
que p. Repita este processo até que seja lido um valor p = 0.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Carro {
    char marca[16];
    int ano;
    float preco;
};

int main() {
    struct Carro carros[5];

    
    printf("=== Cadastro de Carros ===\n");
    for (int i = 0; i < 5; i++) {
        printf("Carro %d:\n", i+1);
        printf("Marca: ");
        fgets(carros[i].marca, sizeof(carros[i].marca), stdin);
        carros[i].marca[strcspn(carros[i].marca, "\n")] = '\0';

        printf("Ano: ");
        scanf("%d", &carros[i].ano);

        printf("Preco: ");
        scanf("%f", &carros[i].preco);
        getchar(); 
        printf("\n");
    }

    
    float p;
    do {
        printf("Digite o valor de p (0 para sair): ");
        scanf("%f", &p);
        getchar(); // Limpa o buffer do teclado

        if (p == 0) {
            break;
        }

        printf("\n=== Carros com preco menor que %.2f ===\n", p);
        bool nenhumCarroEncontrado = true;

        for (int i = 0; i < 5; i++) {
            if (carros[i].preco < p) {
                printf("Carro %d\n", i+1);
                printf("Marca: %s\n", carros[i].marca);
                printf("Ano: %d\n", carros[i].ano);
                printf("Preco: %.2f\n", carros[i].preco);
                printf("\n");

                nenhumCarroEncontrado = false;
            }
        }

        if (nenhumCarroEncontrado) {
            printf("Nenhum carro encontrado com preco menor que %.2f\n\n", p);
        }
    } while (p != 0);

    printf("Programa finalizado.\n");

    return 0;
}

15. Faça um programa que leia um vetor com dados de 5 livros: título (máximo 30 letras), autor
(máximo 15 letras) e ano. Procure um livro por título, perguntando ao usuário qual título
deseja buscar. Mostre os dados de todos os livros encontrados.

#include <stdio.h>
#include <string.h>

struct Livro {
    char titulo[31];
    char autor[16];
    int ano;
};

int main() {
    struct Livro livros[5];
    int i, encontrados = 0;
    char tituloBusca[31];

   
    printf("=== Cadastro de Livros ===\n");
    for (i = 0; i < 5; i++) {
        printf("Livro %d:\n", i+1);
        printf("Título: ");
        fgets(livros[i].titulo, sizeof(livros[i].titulo), stdin);
        livros[i].titulo[strcspn(livros[i].titulo, "\n")] = '\0';

        printf("Autor: ");
        fgets(livros[i].autor, sizeof(livros[i].autor), stdin);
        livros[i].autor[strcspn(livros[i].autor, "\n")] = '\0';

        printf("Ano: ");
        scanf("%d", &livros[i].ano);
        getchar(); // Limpa o buffer do teclado

        printf("\n");
    }

   
    printf("Digite o título do livro a ser buscado: ");
    fgets(tituloBusca, sizeof(tituloBusca), stdin);
    tituloBusca[strcspn(tituloBusca, "\n")] = '\0';

    printf("\n=== Livros encontrados ===\n");
    for (i = 0; i < 5; i++) {
        if (strcmp(livros[i].titulo, tituloBusca) == 0) {
            printf("Livro %d:\n", i+1);
            printf("Título: %s\n", livros[i].titulo);
            printf("Autor: %s\n", livros[i].autor);
            printf("Ano: %d\n", livros[i].ano);
            printf("\n");

            encontrados++;
        }
    }

    if (encontrados == 0) {
        printf("Nenhum livro encontrado com o título \"%s\"\n", tituloBusca);
    }

    printf("Programa finalizado.\n");

    return 0;
}

16. Faça um programa que seja uma agenda de compromissos e:
 Crie e leia um vetor de 5 estruturas de dados com: compromisso (máximo 60 letras) e
data. A data deve ser outra estrutura de dados contendo dia, mês e ano;
 Leia dois inteiros M e A e mostre todos os compromissos do mês M do ano A. Repita o
procedimento até ler M = 0.

#include <stdio.h>
#include <string.h>

struct Data {
    int dia;
    int mes;
    int ano;
};

struct Compromisso {
    char descricao[61];
    struct Data data;
};

int main() {
    struct Compromisso agenda[5];
    int i, mes, ano;

    
    printf("=== Agenda de Compromissos ===\n");
    for (i = 0; i < 5; i++) {
        printf("Compromisso %d:\n", i+1);
        printf("Descrição: ");
        fgets(agenda[i].descricao, sizeof(agenda[i].descricao), stdin);
        agenda[i].descricao[strcspn(agenda[i].descricao, "\n")] = '\0';

        printf("Data:\n");
        printf("Dia: ");
        scanf("%d", &agenda[i].data.dia);
        getchar(); // Limpa o buffer do teclado

        printf("Mês: ");
        scanf("%d", &agenda[i].data.mes);
        getchar(); // Limpa o buffer do teclado

        printf("Ano: ");
        scanf("%d", &agenda[i].data.ano);
        getchar(); // Limpa o buffer do teclado

        printf("\n");
    }

    
    do {
        printf("Digite o mês e o ano dos compromissos a serem buscados (0 para sair):\n");
        printf("Mês: ");
        scanf("%d", &mes);
        getchar(); // Limpa o buffer do teclado

        if (mes != 0) {
            printf("Ano: ");
            scanf("%d", &ano);
            getchar(); // Limpa o buffer do teclado

            printf("\n=== Compromissos encontrados ===\n");
            for (i = 0; i < 5; i++) {
                if (agenda[i].data.mes == mes && agenda[i].data.ano == ano) {
                    printf("Compromisso %d:\n", i+1);
                    printf("Descrição: %s\n", agenda[i].descricao);
                    printf("Data: %02d/%02d/%d\n", agenda[i].data.dia, agenda[i].data.mes, agenda[i].data.ano);
                    printf("\n");
                }
            }
        }
    } while (mes != 0);

    printf("Programa finalizado.\n");

    return 0;
}

17. Faça um programa que controla o consumo de energia dos eletrodomésticos de sua casa e:
 Crie e leia 5 eletrodomésticos que contém nome (máximo 15 letras), potência (real, em
kW) e tempo ativo por dia (real, em horas);
 Leia um tempo t (em dias), calcule e mostre o consumo total na casa e o consumo
relativo de cada eletrodoméstico (consumo/consumo total) nesse período de tempo.
Apresente este último dado em porcentagem.

#include <stdio.h>
#include <string.h>

#define MAX_NOME 16
#define NUM_ELETRODOMESTICOS 5

struct Eletrodomestico {
    char nome[MAX_NOME];
    float potencia;
    float tempoAtivo;
};

int main() {
    struct Eletrodomestico eletrodomesticos[NUM_ELETRODOMESTICOS];
    float consumoTotal = 0.0;
    int i, tempo;
    
    
    printf("=== Controle de Consumo de Energia ===\n");
    for (i = 0; i < NUM_ELETRODOMESTICOS; i++) {
        printf("Eletrodoméstico %d:\n", i + 1);
        printf("Nome: ");
        fgets(eletrodomesticos[i].nome, MAX_NOME, stdin);
        eletrodomesticos[i].nome[strcspn(eletrodomesticos[i].nome, "\n")] = '\0';

        printf("Potência (kW): ");
        scanf("%f", &eletrodomesticos[i].potencia);

        printf("Tempo ativo por dia (horas): ");
        scanf("%f", &eletrodomesticos[i].tempoAtivo);
        getchar(); 

        printf("\n");
    }
    
    
    printf("Digite o tempo em dias: ");
    scanf("%d", &tempo);
    getchar(); 
    
    
    for (i = 0; i < NUM_ELETRODOMESTICOS; i++) {
        float consumo = eletrodomesticos[i].potencia * eletrodomesticos[i].tempoAtivo * tempo;
        consumoTotal += consumo;
        
        printf("Eletrodoméstico: %s\n", eletrodomesticos[i].nome);
        printf("Consumo relativo: %.2f%%\n", (consumo / consumoTotal) * 100);
        printf("\n");
    }
    
    printf("Consumo total na casa: %.2f kW\n", consumoTotal);
    
    return 0;
}

18. Faça um programa que controle o fluxo de voos nos aeroportos de um país. Com V = 5 (voos)
e A = 5 (aeroportos) e:
 Crie e leia um vetor de voos, sendo que cada voo contém um código de aeroporto de
origem e um de destino;
 Crie um vetor de aeroportos, sendo que cada aeroporto contém seu código, quantidade
de voos que saem e quantidade de voos que chegam.
Nota: Cada aeroporto é identificado por um código inteiro entre 0 e (A-1). Não aceite
aeroportos de código inexistente.

#include <stdio.h>

#define MAX_VOOS 5
#define MAX_AEROPORTOS 5

struct Voo {
    int origem;
    int destino;
};

struct Aeroporto {
    int codigo;
    int voosPartida;
    int voosChegada;
};

int main() {
    struct Voo voos[MAX_VOOS];
    struct Aeroporto aeroportos[MAX_AEROPORTOS];

    ) {
        printf("Digite o código do aeroporto de origem do voo %d: ", i + 1);
        scanf("%d", &voos[i].origem);

        while (voos[i].origem < 0 || voos[i].origem >= MAX_AEROPORTOS) {
            printf("Código de aeroporto inválido. Digite novamente: ");
            scanf("%d", &voos[i].origem);
        }

        printf("Digite o código do aeroporto de destino do voo %d: ", i + 1);
        scanf("%d", &voos[i].destino);

        while (voos[i].destino < 0 || voos[i].destino >= MAX_AEROPORTOS) {
            printf("Código de aeroporto inválido. Digite novamente: ");
            scanf("%d", &voos[i].destino);
        }

        aeroportos[voos[i].origem].voosPartida++;
        aeroportos[voos[i].destino].voosChegada++;
    }

   
    printf("\nFluxo de voos nos aeroportos:\n");
    for (int i = 0; i < MAX_AEROPORTOS; i++) {
        printf("Aeroporto %d:\n", i);
        printf("Voos de partida: %d\n", aeroportos[i].voosPartida);
        printf("Voos de chegada: %d\n", aeroportos[i].voosChegada);
        printf("---------------------------\n");
    }

    return 0;
}

19. Faça um programa que armazena filmes produzidos por vários diretores e:
 Crie e leia um vetor de 5 diretores, cada um contendo nome (máximo 20 letras),
quantidade de filmes e filmes. O membro filmes é um vetor, que deve ser criado após
ter lido quantidade de filmes. Cada filme é composto por nome, ano e duração;
 Procure um diretor por nome, mostrando todos os filmes que ele já produziu. Repita o
processo até digitar uma string vazia.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_DIRETORES 5
#define MAX_FILMES 10
#define MAX_NOME 20

struct Filme {
    char nome[MAX_NOME];
    int ano;
    int duracao;
};

struct Diretor {
    char nome[MAX_NOME];
    int qtdFilmes;
    struct Filme *filmes;
};

int main() {
    struct Diretor diretores[MAX_DIRETORES];

    
    for (int i = 0; i < MAX_DIRETORES; i++) {
        printf("Digite o nome do diretor %d: ", i + 1);
        scanf("%s", diretores[i].nome);

        printf("Digite a quantidade de filmes do diretor %d: ", i + 1);
        scanf("%d", &diretores[i].qtdFilmes);

        diretores[i].filmes = (struct Filme *)malloc(diretores[i].qtdFilmes * sizeof(struct Filme));

        for (int j = 0; j < diretores[i].qtdFilmes; j++) {
            printf("Digite o nome do filme %d do diretor %d: ", j + 1, i + 1);
            scanf("%s", diretores[i].filmes[j].nome);

            printf("Digite o ano do filme %d do diretor %d: ", j + 1, i + 1);
            scanf("%d", &diretores[i].filmes[j].ano);

            printf("Digite a duracao do filme %d do diretor %d: ", j + 1, i + 1);
            scanf("%d", &diretores[i].filmes[j].duracao);
        }
    }

    
    char nomeDiretor[MAX_NOME];
    int encontrado = 0;

    while (1) {
        printf("\nDigite o nome do diretor para buscar os filmes (ou deixe em branco para sair): ");
        scanf("%s", nomeDiretor);

        if (strcmp(nomeDiretor, "") == 0) {
            break;
        }

        encontrado = 0;

        for (int i = 0; i < MAX_DIRETORES; i++) {
            if (strcmp(nomeDiretor, diretores[i].nome) == 0) {
                encontrado = 1;

                printf("\nFilmes do diretor %s:\n", diretores[i].nome);

                for (int j = 0; j < diretores[i].qtdFilmes; j++) {
                    printf("Nome: %s\n", diretores[i].filmes[j].nome);
                    printf("Ano: %d\n", diretores[i].filmes[j].ano);
                    printf("Duração: %d\n", diretores[i].filmes[j].duracao);
                    printf("---------------------------\n");
                }

                break;
            }
        }

        if (!encontrado) {
            printf("Diretor não encontrado.\n");
        }
    }

    
    for (int i = 0; i < MAX_DIRETORES; i++) {
        free(diretores[i].filmes);
    }

    return 0;
}

20. Escreva um programa que receba dois structs do tipo “dma”, cada um representando uma
data válida, e calcule o número de dias que decorreram entre as duas datas.
struct dma {
 int dia;
 int mes;
 int ano;
};

#include <stdio.h>

struct dma {
    int dia;
    int mes;
    int ano;
};

int bissexto(int ano) {
    if ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0) {
        return 1;
    }
    return 0;
}

int diasNoMes(int mes, int ano) {
    int diasMes[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (mes == 2 && bissexto(ano)) {
        return 29;
    }
    return diasMes[mes - 1];
}

int dataValida(struct dma data) {
    if (data.ano < 1 || data.mes < 1 || data.mes > 12 || data.dia < 1 || data.dia > diasNoMes(data.mes, data.ano)) {
        return 0;
    }
    return 1;
}

int calcularDiasDecorridos(struct dma data1, struct dma data2) {
    int diasTotal = 0;

    if (!dataValida(data1) || !dataValida(data2)) {
        return -1; 

    
    while (data1.dia != data2.dia || data1.mes != data2.mes || data1.ano != data2.ano) {
        diasTotal++;
        data1.dia++;

        if (data1.dia > diasNoMes(data1.mes, data1.ano)) {
            data1.dia = 1;
            data1.mes++;

            if (data1.mes > 12) {
                data1.mes = 1;
                data1.ano++;
            }
        }
    }

    return diasTotal;
}

int main() {
    struct dma data1, data2;
    int diasDecorridos;

    
    printf("Informe a primeira data (dia, mes e ano): ");
    scanf("%d %d %d", &data1.dia, &data1.mes, &data1.ano);

    printf("Informe a segunda data (dia, mes e ano): ");
    scanf("%d %d %d", &data2.dia, &data2.mes, &data2.ano);

    
    diasDecorridos = calcularDiasDecorridos(data1, data2);

    if (diasDecorridos >= 0) {
        printf("Número de dias decorridos: %d\n", diasDecorridos);
    } else {
        printf("Uma ou ambas as datas são inválidas.\n");
    }

    return 0;
}
