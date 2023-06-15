//Amanda Gomes-12221BCC016

Ex1
#include <stdio.h>

void Valores(int* a, int* b) {
    int temp = *a;
    *a =*b;
    *b =temp;
}

int main() {
    int a,b;

    printf("Valor de A e B: ");
    scanf("%d%d", &a,&b);

    printf("\nValores antes de trocar:\n");
    printf("A = %d\n",a);
    printf("B = %d\n",b);

    Valores(&a,&b);

    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");

    printf("\nValores depois de trocar:\n");
    printf("A = %d\n", a);
    printf("B = %d\n", b);

    return 0;
}
EX2
#include <stdio.h>

void MaiorMenor(int a, int b, int *maior, int *menor) {
    if (a > b) {
        *maior = a;
        *menor = b;
    } 
    else {
        *maior = b;
        *menor = a;
    }
}

int main() {
    int valor1, valor2, maior, menor;

    printf("Digite 2 valores: ");
    scanf("%d%d", &valor1,&valor2);

    MaiorMenor(valor1, valor2, &maior,&menor);

    printf("Maior valor: %d\n",maior);
    printf("Menor valor: %d\n",menor);

    return 0;
}
EX3
#include <stdio.h>

void Soma(int* a, int b) {
    *a = *a + b;
}

int main() {
    int a, b;

    printf("Digite valor de A e B: ");
    scanf("%d%d", &a,&b);

    printf("\nValores antes de somar:\n");
    printf("A = %d\n", a);
    printf("B = %d\n", b);

    Soma(&a, b);
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");

    printf("\nValores depois de somar:\n");
    printf("A = %d\n", a);
    printf("B = %d\n", b);

    return 0;
}
EX4
#include <stdio.h>

int Valores(int* a, int* b, int* c) {
    int temp;

    if (*a > *b) {
        temp = *a;
        *a = *b;
        *b = temp;
    }
    else if (*b > *c) {
        temp = *b;
        *b = *c;
        *c = temp;
    }
    else if (*a > *b) {
        temp = *a;
        *a = *b;
        *b = temp;
    }
    else if (*a == *b && *b == *c) {
        return 1;
    } 
    else {
        return 0;
    }
}

int main() {
    int a, b, c;

    printf("Digite valor de A, B e C: ");
    scanf("%d%d%d", &a,&b,&c);

    printf("\nValores antes de ordenar:\n");
    printf("A = %d\n", a);
    printf("B = %d\n", b);
    printf("C = %d\n", c);

    int ehIguais = Valores(&a, &b, &c);

    printf("\nResultado:\n");
    printf("A = %d\n", a);
    printf("B = %d\n", b);
    printf("C = %d\n", c);

    if (ehIguais) {
        printf("\nValores iguais\n");
    } 
    else {
        printf("\nValores diferentes\n");
    }

    return 0;
}
EX5
#include <stdio.h>

void fraciona(float num, int* inteiro, float* fracao) {
    *inteiro = (int) num;
    *fracao = num - *inteiro;
}

int main() {
    float numero;
    int parteInteira;
    float parteFracionaria;

    printf("Digite um valor: ");
    scanf("%f", &numero);

    fraciona(numero, &parteInteira, &parteFracionaria);

    printf("Parte inteira: %d\n", parteInteira);
    printf("Parte fracionaria: %.2f\n", parteFracionaria);

    return 0;
}
EX6
#include <stdio.h>
#include <math.h>

void esfera(float R, float *area, float *volume) {

    *area = 4 * 3.14159 * pow(R, 2);
    *volume = (4.0 / 3.0) * 3.14159 * pow(R, 3);
}

int main() {
    float raio, area, volume;

    printf("Digite o raio: ");
    scanf("%f", &raio);

    esfera(raio, &area, &volume);

    printf("Area superficie: %.2f\n", area);
    printf("Volume: %.2f\n", volume);

    return 0;
}
EX7
#include <stdio.h>

void maior_Valor(int array[], int tamanho, int *maior, int *ocorrencias) {
    *maior = array[0];
    *ocorrencias = 0;

    for (int i = 0; i < tamanho; i++) {
        if (array[i] > *maior) {
            *maior = array[i];
        }
    }

    for (int i = 0; i < tamanho; i++) {
        if (array[i] == *maior) {
            (*valor)++;
        }
    }
}

int main() {
    int tamanho, maior, valor;

    printf("Digite o tamanho: ");
    scanf("%d", &tamanho);

    int array[tamanho];

    printf("Digite os valores:\n");
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &array[i]);
    }

    maior_Valor(array, tamanho, &maior, &valor);

    printf("Maior elemento: %d\n", maior);
    printf("Ocorrencias: %d\n", valor);

    return 0;
}
EX8
#include <stdio.h>

int negativos(float *vet, int N) {
    int count = 0;

    for (int i = 0; i < N; i++) {
        if (vet[i] < 0) {
            count++;
        }
    }

    return count;
}

int main() {
    int tamanho;

    printf("Digite o tamanho: ");
    scanf("%d", &tamanho);

    float array[tamanho];

    printf("Digite os valores:\n");
    for (int i = 0; i < tamanho; i++) {
        scanf("%f", &array[i]);
    }

    int quantidadeNegativos = negativos(array, tamanho);

    printf("tem %d numeros negativos\n", quantidadeNegativos);

    return 0;
}
EX9
#include <stdio.h>

int main() {
    int array[5] = {1, 2, 3, 4, 5};
    int *ptr = array;

    printf("Array:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    printf("Array modificado:\n");
    for (int i = 0; i < 5; i++) {
        (*ptr)++;  
        printf("%d ", array[i]);
        ptr++;
    }
    printf("\n");

    return 0;
}
EX10
#include <stdio.h>

int somar_arrays(int* array1, int* array2, int* resultado, int tamanho1, int tamanho2) {
    if (tamanho1 != tamanho2) {
        return 0; 
    }

    for (int i = 0; i < tamanho1; i++) {
        resultado[i] = array1[i] + array2[i];
    }

    return 1;
}

void array(int* array, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main() {
    int array1[] = {1, 2, 3, 4, 5};
    int array2[] = {6, 7, 8, 9, 10};
    int resultado[5];

    int tamanho1 = sizeof(array1) / sizeof(array1[0]);
    int tamanho2 = sizeof(array2) / sizeof(array2[0]);

    int sucesso = somar_arrays(array1, array2, resultado, tamanho1, tamanho2);

    if (sucesso) {
        printf("Soma dos arrays: ");
        array(resultado, tamanho1);
    } else {
        printf("Invalido! Tamanho diferentes.\n");
    }

    return 0;
}
EX12
#include <stdio.h>

void min_max(int V[], int tamanho, int *min, int *max) {
    *min = V[0];
    *max = V[0];

    for (int i = 1; i < tamanho; i++) {
        if (V[i] < *min) {
            *min = V[i];
        }

        if (V[i] > *max) {
            *max = V[i];
        }
    }
}

int main() {
    int array[] = {10, 5, 8, 3, 12, 7};
    int tamanho = sizeof(array) / sizeof(array[0]);
    int minimo, maximo;

    min_max(array, tamanho, &minimo, &maximo);

    printf("Array: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    printf("Minimo: %d\n", minimo);
    printf("Maximo: %d\n", maximo);

    return 0;
}
EX13
#include <stdio.h>

void notas(float *nota1, float *nota2) {
    do {
        printf("Nota 1: ");
        scanf("%f", nota1);
    } while (*nota1 < 0 || *nota1 > 10);

    do {
        printf("Nota 2: ");
        scanf("%f", nota2);
    } while (*nota2 < 0 || *nota2 > 10);
}

void media(float nota1, float nota2, float *media_simples, float *media_ponderada) {
    *media_simples = (nota1 + nota2) / 2;
    *media_ponderada = (nota1 + nota2 * 2) / 3;
}

int main() {
    float nota1, nota2;
    float media_simples, media_ponderada;

    notas(&nota1, &nota2);
    media(nota1, nota2, &media_simples, &media_ponderada);

    printf("Media Simples: %.2f\n", media_simples);
    printf("Media Ponderada: %.2f\n", media_ponderada);

    return 0;
}
EX14
#include <stdio.h>
#include <math.h>

int raizes(float A, float B, float C, float *X1, float *X2) {
    float delta = B * B - 4 * A * C;

    if (delta < 0) {
        return 0;  
    } 
    else if (delta == 0) {
        *X1 = -B / (2 * A);
        return 1;  
    } 
    else {
        *X1 = (-B + sqrt(delta)) / (2 * A);
        *X2 = (-B - sqrt(delta)) / (2 * A);
        return 2;  
    }
}

int main() {
    float A, B, C;
    float X1, X2;
    int num_raizes;

    printf("Digite os valores de A, B e C: ");
    scanf("%f %f %f", &A, &B, &C);

    num_raizes = raizes(A, B, C, &X1, &X2);

    if (num_raizes == 0) {
        printf("Nao existe rais reais\n");
    } else if (num_raizes == 1) {
        printf("Uma raiz real: %.2f\n", X1);
    } else {
        printf("Duas raizes reais: %.2f e %.2f\n", X1, X2);
    }

    return 0;
}
