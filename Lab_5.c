//Aluna: Amanda Gomes-12221BCC016


EX1
#include<stdio.h>
/*Faça um programa que possua um vetor denominado A que armazene 6 números inteiros.
O programa deve executar os seguintes passos:
a) Atribua os seguintes valores a esse vetor: 1, 0, 5, -2, -5, 7.
b) Armazene em uma variável inteira (simples) a soma entre os valores das posições
A[0], A[1] e A[5] do vetor e mostre na tela esta soma.
c) Modifique o vetor na posição 4, atribuindo a esta posição o valor 100.
d) Mostre na tela cada valor do vetor A, um em cada linha.*/

int main()
{
 int soma, A[6] = {1,0,5,-2,-5,7};
  soma = A[0] + A[1] + A[5];
  printf("Resultado: %d\n",soma);
  
  //aqui começa o comando da letra c
  int  A[6] = {1,0,5,-2,100,7};
  printf("%d %d %d %d %d %d", A[0], A[1], A[2], A[3], A[4], A[5]);

  return 0;
}
Ex2
#include<stdio.h>
/*Faça um programa que leia um vetor de 8 posições e, em seguida, leia também dois valores
X e Y quaisquer correspondentes a duas posições no vetor. Ao final seu programa deverá
escrever a soma dos valores encontrados nas respectivas posições X e Y.*/
int main()
{
 int v[8], x, y,soma;

    printf("Digite os 8 valores do vetor:\n");
    for (int i = 0; i < 8; i++) {
        scanf("%d", &v[i]);
    }

    printf("Digite os valores de X e Y (entre 0 e 7):\n");
    scanf("%d %d", &x, &y);

    soma = v[x] + v[y];
    printf("A soma dos valores encontrados nas posições %d e %d é %d.\n", x, y, soma);

    return 0;

}
Ex3
#include<stdio.h>
/*Crie um programa que lê 6 valores inteiros e, em seguida, mostre na tela os valores lidos na
ordem inversa.
*/
int main()
{
      int valores[6], i;
    printf("Digite 6 valores inteiros:\n");
    for (int i = 0; i < 6; i++) {
        scanf("%d", &valores[i]);
    }
    printf("Os valores digitados na ordem inversa :\n");
    for (int i = 5; i >= 0; i--) {
        printf("%d ", valores[i]);
    }

return 0;
}
Ex4
/*Fazer um programa para ler 5 valores e, em seguida, mostrar a posição onde se encontram
o maior e o menor valor.*/

#include <stdio.h>

int main() 
	{
    int valores[5];
    int i, posicaoMaior, posicaoMenor;
    for (i = 0; i < 5; i++) {
        printf("Digite o %do valor: ", i+1);
        scanf("%d", &valores[i]);
    	}

    // Encontra a posição do maior valor
    posicaoMaior = 0;
    for (i = 1; i < 5; i++) 
	{
        if (valores[i] > valores[posicaoMaior]) 
	{
            posicaoMaior = i;
        }
    	}
	
    // Encontra a posição do menor valor
    posicaoMenor = 0;
    for (i = 1; i < 5; i++)
	{
        if (valores[i] < valores[posicaoMenor]) {
            posicaoMenor = i;
        }
    	}

    printf("O maior valor está na posicao %d\n", posicaoMaior);
    printf("O menor valor está na posicao %d\n", posicaoMenor);

    return 0;
}
EX5
/*Faça um vetor de tamanho 50 preenchido com o seguinte valor: (i+5*i)%(i+1), sendo i
a posição do elemento no vetor. Em seguida imprima o vetor na tela.*/

#include <stdio.h>

int main() {
    int vetor[50];
    int i;

    
    for (i = 0; i < 50; i++) {
        vetor[i] = (i + 5*i) % (i + 1);
    }

    // Impressão do vetor
    for (i = 0; i < 50; i++) {
        printf("%d ", vetor[i]);
    }

    return 0;
}
Ex6
/*Leia 10 números inteiros e armazene em um vetor. Em seguida escreva os elementos que
são primos e suas respectivas posições no vetor.*/

#include <stdio.h>

int main() {
    int vetor[10];
    int i, j, primo;

   
    for (i = 0; i < 10; i++) {
        printf("Digite o %do valor: ", i+1);
        scanf("%d", &vetor[i]);
    }

    
    for (i = 0; i < 10; i++) {
        primo = 1; // assume que o número é primo
        for (j = 2; j < vetor[i]; j++) {
            if (vetor[i] % j == 0) {
                primo = 0; 
                break;
            }
        }
        if (primo == 1) {
            printf("O número %d na posição %d é primo\n", vetor[i], i);
        }
    }

    return 0;
}
Ex7
/*Faça um programa que receba 6 números inteiros e mostre:
 Os números pares digitados;
 A soma dos números pares digitados;
 Os números ímpares digitados;
 A quantidade de números ímpares digitados;*/

#include <stdio.h>

int main() {
    int numeros[6];
    int i, somaPares = 0, contImpares = 0;

    for (i = 0; i < 6; i++) {
        printf("Digite o %do número: ", i+1);
        scanf("%d", &numeros[i]);
    }

   
    printf("Números pares digitados: ");
    for (i = 0; i < 6; i++) {
        if (numeros[i] % 2 == 0) {
            printf("%d ", numeros[i]);
            somaPares += numeros[i];
        }
    }
    printf("\nSoma dos numeros pares: %d\n", somaPares);

    printf("Numeros impares digitados: ");
    for (i = 0; i < 6; i++) {
        if (numeros[i] % 2 != 0) {
            printf("%d ", numeros[i]);
            contImpares++;
        }
    }
    printf("\nQuantidade de números ímpares: %d\n", contImpares);

    return 0;
}
Ex 8
/*Faça um programa para ler 10 números DIFERENTES a serem armazenados em um vetor. Os
dados deverão ser armazenados no vetor na ordem que forem sendo lidos, sendo que caso
o usuário digite um número que já foi digitado anteriormente, o programa deverá pedir para
ele digitar outro número. Note que cada valor digitado pelo usuário deve ser pesquisado no
vetor, verificando se ele existe entre os números que já foram fornecidos. Exibir na tela o
vetor final que foi digitado*/

#include <stdio.h>

int main() {
    int numeros[10];
    int i, j, num;

    
    for (i = 0; i < 10; i++) {
        do {
            printf("Digite o %do numero: ", i+1);
            scanf("%d", &num);

            for (j = 0; j < i; j++) {
                if (numeros[j] == num) {
                    printf("Numero ja digitado. Digite outro numero.\n");
                    num = -1;
                    
                }
            }
        } 
	while (num == -1);

        numeros[i] = num;
    }

   
    printf("\nVetor final: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", numeros[i]);
    }

    return 0;
}

//Matrizes
Ex1
/*. Leia uma matriz 4 × 4, conte e escreva quantos valores maiores que 10 ela possui*/

#include <stdio.h>

int main()
	{
    int matriz[4][4];
    int i, j, count = 0;

   
    printf("Digite os valores da matriz:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            if (matriz[i][j] > 10) {
                count++;
            }
        }
    }
    printf("A matriz possui %d valores maiores que 10.\n", count);

    return 0;
}
Ex 2
/*Declare uma matriz 5 × 5. Preencha com 1 a diagonal principal e com 0 os demais elementos.
Escreva ao final a matriz obtida.*/

#include <stdio.h>

int main() {
    int matriz[5][5];
    int i, j;

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (i == j) {
                matriz[i][j] = 1;
            } else {
                matriz[i][j] = 0;
            }
        }
    }

    printf("Matriz 5x5 com 1 na diagonal principal e 0 nos demais elementos:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
Ex3
/*Leia uma matriz 4 × 4, imprima a matriz e retorne a localização (linha e a coluna) do maior
valor.*/
#include <stdio.h>

int main() {
    int matriz[4][4];
    int i, j, linha_maior, coluna_maior;
    int maior = 0; // Inicializa com 0 para garantir que o maior valor seja encontrado

    printf("Digite os elementos da matriz 4x4:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            scanf("%d", &matriz[i][j]);
            
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
                linha_maior = i;
                coluna_maior = j;
            }
        }
    }

    
    printf("Matriz 4x4 digitada:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    
    printf("Maior valor: %d\n", maior);
    printf("Localizacao: linha %d, coluna %d\n", linha_maior+1, coluna_maior+1);

    return 0;
}
Ex4
/*Leia uma matriz 5 × 5. Leia também um valor X. O programa deverá fazer uma busca desse
valor na matriz e, ao final, escrever a localização (linha e coluna) ou uma mensagem de “não
encontrado”.*/
#include <stdio.h>

int main(){

    int matriz[5][5], i,j,x, aux = 1;

    printf("Digite matriz 5x5: ");

    for(i=0; i < 5; i++){
        for(j=0; j <5; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Digite valor busca: ");
    scanf("%d", &x);

    for (i = 0; i < 5; i++) {
       for(j = 0; j < 5; j++){
        if(matriz[i][j] == x){
            printf("\nvalor encontrado na linha %d, na coluna %d.", i+1, j+1);
        }
        aux = 0;

       }

    }
      
    if(aux){
        printf("nao encontrado");
        return 0; 
        }
    
    }
Ex5
/*Gerar e imprimir uma matriz de tamanho 10 × 10, onde seus elementos são da forma:
A[i][j] = 2i + 7j - 2 se i < j;
A[i][j] = 3i
2
- 1 se i = j;
A[i][j] = 4i
3 – 5j
2 + 1 se i > j:
*/
#include <stdio.h>

int main() {
    int A[10][10];

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (i < j) {
                A[i][j] = 2*i + 7*j - 2;
            } else if (i == j) {
                A[i][j] = 3*i*i - 1;
            } else {
                A[i][j] = 4*i*i*i - 5*j*j + 1;
            }
        }
    }

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    return 0;
}
Ex6
/*Gere matriz 4 × 4 com valores no intervalo [1, 20]. Escreva um programa que transforme a
matriz gerada numa matriz triangular inferior, ou seja, atribuindo zero a todos os elementos
acima da diagonal principal. Imprima a matriz original e a matriz transformada.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int matriz[4][4], i, j;
    
    
    srand(time(NULL));
    
    
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            matriz[i][j] = rand() % 20 + 1;
        }
    }
    
    
    printf("Matriz original:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
    
    
    for (i = 0; i < 4; i++) {
        for (j = i + 1; j < 4; j++) {
            matriz[i][j] = 0;
        }
    }
    
    
    printf("\nMatriz transformada:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
Ex 7 
/*Faça um programa para gerar automaticamente números entre 0 e 99 de uma cartela de
bingo. Sabendo que cada cartela deverá conter 5 linhas de 5 números, gere estes dados de
modo a não ter números repetidos dentro das cartelas. O programa deve exibir na tela a
cartela gerada.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int cartela[5][5];
  int nums[100];
  int i, j, k, temp;

  
  for (i = 0; i < 100; i++) {
    nums[i] = i;
  }

  
  for (i = 0; i < 5; i++) {
    for (j = 0; j < 5; j++) {
      k = rand() % (100 - i * 5 - j);
      cartela[i][j] = nums[k];
      temp = nums[k];
      nums[k] = nums[99 - i * 5 - j];
      nums[99 - i * 5 - j] = temp;
    }
  }

  printf("Cartela de Bingo:\n");
  for (i = 0; i < 5; i++) {
    for (j = 0; j < 5; j++) {
      printf("%2d ", cartela[i][j]);
    }
    printf("\n");
  }

  return 0;
}


//String
Ex1
/*Faça um programa que leia uma string e a imprima.*/

#include <stdio.h>
#include <string.h>

int main(){

    char str[20] = "Hello World";
    printf("%s\n", str);

    return 0;

    }
Ex2
/*Faça um programa que conte o número de 1’s que aparecem em uma string. Exemplo:
“0011001” -> 3*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int count = 0;

    printf("Digite uma string contendo apenas 0's e 1's: ");
    scanf("%s", str);

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == '1') {
            count++;
        }
    }

    printf("O numero de 1's na string eh: %d\n", count);

    return 0;
}
Ex3
/* Faça um programa que receba uma palavra e a imprima de trás-para-frente.*/

#include <stdio.h>
#include <string.h>

int main() {
    char palavra[100];

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    printf("A palvra ao contrario eh: ");

    for(int i = strlen(palavra) - 1; i >=0; i--){
        printf("%c", palavra[i]);
    }
    

    return 0;
}
Ex4
/*Faça um programa que receba uma palavra e calcule quantas vogais (a, e, i, o, u) possui essa
palavra. Entre com um caractere (vogal ou consoante) e substitua todas as vogais da palavra
dada por esse caractere.*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char palavra[50], c;
    int i, vogais = 0;

    printf("Digite uma palavra: ");
    scanf("%s", &palavra);

    for(i = 0; i < strlen(palavra); i++){
        if(tolower(palavra[i])== 'a' || tolower(palavra[i] == 'e') || tolower(palavra[i] == 'i') || tolower(palavra[i] == 'o') || tolower(palavra[i] == 'u')){
            vogais++;
        }
    }

    printf("A palavra possui %d vogais", vogais);

    printf("\nDigite um caractere para substituir as vogais: ");
    scanf("%s", &c);

    
    for(i = 0; i < strlen(palavra); i++){
        if(tolower(palavra[i])== 'a' || tolower(palavra[i] == 'e') || tolower(palavra[i] == 'i') || tolower(palavra[i] == 'o') || tolower(palavra[i] == 'u')){
            palavra[i] = c;
        }
    }

    printf("A palavra alterada eh: %s", palavra);


    return 0;
}
Ex5
/* Escreva um programa para converter uma cadeia de caracteres de letras maiúsculas em letras
minúsculas. Dica: some 32 dos caracteres cujo código ASCII está entre 65 e 90.*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char palavra[50], c;
    int i, vogais = 0;

    printf("Digite uma palavra: ");
    scanf("%s", &palavra);

    for(i = 0; i < strlen(palavra); i++){
        if(tolower(palavra[i])== 'a' || tolower(palavra[i] == 'e') || tolower(palavra[i] == 'i') || tolower(palavra[i] == 'o') || tolower(palavra[i] == 'u')){
            vogais++;
        }
    }

    printf("A palavra possui %d vogais", vogais);

    printf("\nDigite um caractere para substituir as vogais: ");
    scanf("%s", &c);

    
    for(i = 0; i < strlen(palavra); i++){
        if(tolower(palavra[i])== 'a' || tolower(palavra[i] == 'e') || tolower(palavra[i] == 'i') || tolower(palavra[i] == 'o') || tolower(palavra[i] == 'u')){
            palavra[i] = c;
        }
    }

    printf("A palavra alterada eh: %s", palavra);


    return 0;
}
Ex6
/*Leia uma cadeia de caracteres e converta todos os caracteres para maiúscula. Dica: subtraia
32 dos caracteres cujo código ASCII está entre 97 e 122.*/

#include <stdio.h>
#include <string.h>

int main() {
    char palavra[50];
    int i;

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    for(i=0; i < strlen(palavra); i++){
        if(palavra[i]>= 'a' && palavra[i]<= 'z'){
            palavra[i] = palavra[i] - 32;
        }
    }

    printf("Em maisculo: %s", palavra);




    return 0;
}
Ex7
/* Leia um vetor contendo letras de uma frase inclusive os espaços em branco. Retirar os
espaços em branco do vetor e depois escrever o vetor resultante.*/

#include <stdio.h>
#include <string.h>

int main() {
    char frase[100];
    printf("Digite uma frase: ");
    fgets(frase, 100, stdin);

    int tam = strlen(frase);
    char nova_frase[tam];
    int j = 0;

    for (int i = 0; i < tam; i++) {
        if (frase[i] != ' ') {
            nova_frase[j] = frase[i];
            j++;
        }
    }

    nova_frase[j] = '\0';
    printf("Frase sem espacos em branco: %s\n", nova_frase);

    return 0;
}
Ex8
/* Leia um vetor contendo letras de uma frase inclusive os espaços em branco. Retirar os
espaços em branco do vetor e depois escrever o vetor resultante.*/

#include <stdio.h>
#include <string.h>

int main() {
    char string[100];
    char l1, l2;

    printf("Digite uma string: ");
    fgets(string, 100, stdin);

    printf("Digite a letra L1 que deseja substituir: ");
    scanf("%c", &l1);

    printf("Digite a letra L2 que deseja colocar no lugar de L1: ");
    scanf(" %c", &l2);

    int tam = strlen(string);

    for (int i = 0; i < tam; i++) {
        if (string[i] == l1) {
            string[i] = l2;
        }
    }

    printf("Nova string: %s\n", string);

    return 0;
}
Ex9
/*Faça um programa que preencha uma matriz de string com os modelos de cinco carros
(exemplos de modelos: Fusca, Gol, Vectra, etc.). Em seguida, preencha um vetor com o consumo
desses carros, isto é, quantos quilômetros cada um deles faz com um litro de combustível.
Calcule e mostre:
a) O modelo de carro mais econômico;
b) Quantos litros de combustível cada um dos carros cadastrados consome para
percorrer uma distância de 1.000 quilômetros.*/

#include <stdio.h>
#include <string.h>

#define TAMANHO_MATRIZ 5

int main() {
    char carros[TAMANHO_MATRIZ][20];
    float consumo[TAMANHO_MATRIZ];


    for (int i = 0; i < TAMANHO_MATRIZ; i++) {
        printf("Digite o modelo do carro %d: ", i+1);
        fgets(carros[i], 20, stdin);
        carros[i][strcspn(carros[i], "\n")] = '\0'; 

        printf("Digite o consumo do carro %d (km/l): ", i+1);
        scanf("%f", &consumo[i]);
        getchar(); 
    }


    float menor_consumo = consumo[0];
    int indice_menor_consumo = 0;

    for (int i = 1; i < TAMANHO_MATRIZ; i++) {
        if (consumo[i] < menor_consumo) {
            menor_consumo = consumo[i];
            indice_menor_consumo = i;
        }
    }

    printf("O modelo mais econômico é o %s, com um consumo de %.2f km/l\n", carros[indice_menor_consumo], menor_consumo);


    printf("\nConsumo para percorrer 1000 km:\n");

    for (int i = 0; i < TAMANHO_MATRIZ; i++) {
        float litros = 1000 / consumo[i];
        printf("%s: %.2f litros\n", carros[i], litros);
    }

    return 0;
}
Ex10
/* Ler o nome e o valor de uma determinada mercadoria de uma loja. Sabendo que o desconto
para pagamento à vista é de 10% sobre o valor total, calcular o valor a ser pago à vista. Escrever
o nome da mercadoria, o valor total, o valor do desconto e o valor a ser pago à vista.*/

#include <stdio.h>
#include <string.h>

int main(){

    char str[20];
    float valor, porcentagem;
    printf("Nome da mercadoria: ");
    scanf("%s", &str);

    printf("Valor da mercadoria: ");
    scanf("%f", &valor);

    porcentagem = valor - (valor*0.10);

    printf("Mercadoria: %s\n", str);
    printf("10%% desconto = %.2f\n", porcentagem);



    return 0;

    }
Ex11

/*. Escreva um programa que recebe uma string S e inteiros não-negativos i e j e imprima o
segmento S[i..j]. */
#include <stdio.h>
#include <string.h>

int main() {
    char string[100];
    int i, j;

    printf("Digite uma string: ");
    fgets(string, 100, stdin);
    string[strcspn(string, "\n")] = '\0'; // Removendo o \n da string

    printf("Digite o valor de i: ");
    scanf("%d", &i);

    printf("Digite o valor de j: ");
    scanf("%d", &j);

    if (i >= 0 && j >= 0 && i <= strlen(string) && j <= strlen(string) && i <= j) {
        printf("Segmento S[%d..%d]: ", i, j);
        for (int k = i; k <= j; k++) {
            printf("%c", string[k]);
        }
        printf("\n");
    } else {
        printf("Valores de i e j inválidos.\n");
    }

    return 0;
}
EX12
/*O código de César é uma das mais simples e conhecidas técnicas de criptografia. É um tipo
de substituição na qual cada letra do texto substituída por outra, que se apresenta no alfabeto
abaixo dela um número fixo de vezes. Por exemplo, com uma troca de três posições, ‘A’ seria
substituído por ‘D’, ‘B’ se tornaria ‘E’, e assim por diante. Implemente um programa que faça
uso desse Código de César (3 posições), entre com uma string e retorne a string codificada.
Exemplo:
String: a ligeira raposa marrom saltou sobre o cachorro cansado
Nova string: D OLJHLUD UDSRVD PDUURP VDOWRX VREUH R FDFKRUUR FDQVDGR*/

#include <stdio.h>

int main() {
    char S[100];
    int i, j;
    printf("Digite a string S: ");
    scanf("%s", S);
    printf("Digite os valores de i e j: ");
    scanf("%d %d", &i, &j);

    char segmento[100] = "";
    for (int k = i; k <= j; k++) {
        segmento[k-i] = S[k];
    }
    printf("O segmento S[%d..%d] é: %s\n", i, j, segmento);
    return 0;
}
Ex13
/*Faça um programa que, dada uma string, diga se ela é um palíndromo ou não. Lembrando
que um palíndromo é uma palavra que tenha a propriedade de poder ser lida tanto da direita
para a esquerda como da esquerda para a direita.
Exemplo:
ovo
arara
Socorram-me, subi no ônibus em Marrocos
Anotaram a data da maratona*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char palavra[100];
    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    int i = 0, j = strlen(palavra) - 1;
    while (i < j) {
        if (tolower(palavra[i]) != tolower(palavra[j])) {
            printf("%s nao eh um palindromo.\n", palavra);
            return 0;
        }
        i++;
        j--;
    }

    printf("%s eh um palindromo.\n", palavra);
    return 0;
}
Ex14
/*Implemente um programa que leia duas strings, str1 e str2, e um valor inteiro positivo N.
Concatene não mais que N caracteres da string str2 à string str1 e termine str1 com ‘\0’.*/

#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int N;
    printf("Digite a string str1: ");
    scanf("%s", str1);
    printf("Digite a string str2: ");
    scanf("%s", str2);
    printf("Digite o valor de N: ");
    scanf("%d", &N);

    int i = 0;
    while (i < N && str2[i] != '\0') {
        str1[strlen(str1)] = str2[i];
        i++;
    }
    str1[strlen(str1)] = '\0';

    printf("str1 concatenada com os primeiros %d caracteres de str2: %s\n", N, str1);
    return 0;
}
Ex15


Ex16
/*Faça um programa que encontre o conjunto de 5 dígitos consecutivos na sequência abaixo
que gere o maior produto:
7316717653133062491922511967442657474235534919493496983520312774506326239578
3180169848018694788518438586156078911294949545950173795833195285320880551112
5406987471585238630507156932909632952274430435576689664895044524452316173185
6403098711121722383113622298934233803081353362766142828064444866452387493035
8907296290491560440772390713810515859307960866701724271218839987979087922749
2190169972088809377665727333001053367881220235421809751254540594752243525849
0771167055601360483958644670632441572215539753697817977846174064955149290862
5693219784686224828397224137565705605749026140797296865241453510047482166370
4844031998900088952434506585412275886668811642717147992444292823086346567481
3919123162824586178664583591245665294765456828489128831426076900422421902267
1055626321111109370544217506941658960408071984038509624554443629812309878799
2724428490918884580156166097919133875499200524063689912560717606058861164671
0940507754100225698315520005593572972571636269561882670428252483600823257530*/

#include <stdio.h>

int main() {
    char sequence[] = "731671765313306249192251196744265747423553491949349698352031277450632623957831801698480186947885184385861560789112949495459501737958331952853208805511125406987471585238630507156932909632952274430435576689664895044524452316173185640309871112172238311362229893423380308135336276614282806444486645238749303589072962904915604407723907138105158593079608667017242712188399879790879227492190169972088809377665727333001053367881220235421809751254540594752243525849077116705560136048395864467063244157221553975369781797784617406495514929086256932197846862248283972241375657056057490261407975096865652707082512542797809994584902222335628232831791960136722242309876451349890697907186486111635986094370277053921717629317675238467481846766940513200056812714526356082778577134275778960917363717872146844090122495343014654958537105079227968925892354201995611212902196086403441815981362977477130996051870721134999999837297804995105973308719291168611642799251925212454724428383057440969957655197843779437204929131668037304226143974286933061690897968482590125455256617676744811874537637792799956981969217579225188999918177553.
                        9675364384014880845539119353340048485193179111730863583734566214515174586.
                        6451296489696426252629188289319956945782901097512635378817975194786181941.
                        6589604080719840385096245544436298123098787992724428490918884580156166097.
                        9191338754992090524063689912560717606058861164671094050775410022569831552.
                        0005593572972571636269561882670428252483600823257530420752963450";
    int length = sizeof(sequence) / sizeof(sequence[0]);
    long long max_product = 0;
    for (int i = 0; i < length - 4; i++) {
        long long product = 1;
        for (int j = i; j < i + 5; j++) {
            product *= sequence[j] - '0';
        }
        if (product > max_product) {
            max_product = product;
        }
    }
    printf("O maior produto é: %lld\n", max_product);
    return 0;
}
