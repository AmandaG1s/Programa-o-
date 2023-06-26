Ex1
#include <stdio.h>


int dobrar(int numero);

int main()
{
    int numero, resultado;
    printf("Digite um valor: ");
    scanf("%d", &numero);
    resultado = dobrar(numero);

    printf("Resultado: %d", resultado);
    return 0;
}

int dobrar(int numero){
    int resultado = numero * 2;
    return resultado;
}

EX2
#include <stdio.h>


int imprimir(int dia, int mes, int ano){
    
    printf("\n");
    return printf("Sua data eh: %i/%i/%i", dia,mes,ano);
}

int main(){

    int dia, mes, ano; 

    printf("Digite o dia: ");
    scanf("%i", &dia);

    printf("Digite o mes: ");
    scanf("%i", &mes);

    printf("Digite o ano: ");
    scanf("%i", &ano);

    imprimir(dia, mes, ano);

    return 0;
}
EX3
#include <stdio.h>


int verificador(int numero);

int main()
{
    int numero, resultado;
    printf("Digite um valor: ");
    scanf("%d", &numero);

    resultado = verificador(numero);

    return 0;
}

int verificador(int numero){
    if (numero <0){
        printf("Numero negativo");
        return -1;
    }
    if (numero > 0){
        printf("Numero positivo");
        return 1;
    }
    if  (numero == 0){
        printf("Numero igual a Zero");
        return 0;
    }

}
EX4
#include <stdio.h>


int quadrado(int numero);

int main()
{
    int numero, resultado;
    printf("Digite um valor: ");
    scanf("%d", &numero);

    resultado = quadrado(numero);

    return 0;
}

int quadrado( int numero){
    int i;
    for (i = 1; i * i <= numero; i++) {
        if (numero % i == 0 && numero / i == i) {
            printf("eh quadrado perfeito");
            return 1; 
        }
    }
    return 0;

}
EX5
#include <stdio.h>


int converter(int hours, int minutes, int seconds);

int main() {
    int horas, minutos, segundos, total;
    printf("Digite as horas, minutos e segundos: ");
    scanf("%d",&horas);
    scanf("%d",&minutos);
    scanf("%d",&segundos);


    total = converter(horas, minutos, segundos);
    printf("%d horas, %d minutos e %d segundos eh igual a %d segundos.\n", horas, minutos, segundos, total);
    return 0;
}

int converter(int horas, int minutos, int segundos) {
    int total;
    total = horas * 3600 + minutos * 60 + segundos;
    return total;
}
EX6
#include <stdio.h>


int converter(int hours, int minutes, int seconds);

int main() {
    int horas, minutos, segundos, total;
    printf("Digite as horas, minutos e segundos: ");
    scanf("%d",&horas);
    scanf("%d",&minutos);
    scanf("%d",&segundos);


    total = converter(horas, minutos, segundos);
    printf("%d horas, %d minutos e %d segundos eh igual a %d segundos.\n", horas, minutos, segundos, total);
    return 0;
}

int converter(int horas, int minutos, int segundos) {
    int total;
    total = horas * 3600 + minutos * 60 + segundos;
    return total;
}
EX7
#include <stdio.h>


int conversor(float temperatura);

int main()
{
    float temperatura, resultado;
    printf("Digite temperatura em celcius: ");
    scanf("%f", &temperatura);

    resultado = conversor(temperatura);

    return 0;
}

int conversor(float temperatura){
    float calculo;

    calculo = temperatura *(9.0/5.0) + 32;
    printf("Resultado: %.2f", calculo);
    return calculo;


}
EX8
#include <stdio.h>

float hipotenusa(float a, float b);

int main()
{
    float a, b, resultado;
    printf("Digite valor de A: ");
    scanf("%f", &a);
    printf("Digite valor de A: ");
    scanf("%f", &b);

    resultado = hipotenusa(a, b);

    return 0;
}

float hipotenusa(float a, float b){

    float hipotenusa;
    hipotenusa = sqrt(pow(a, 2) + pow(b, 2));
    printf("Hipotenusa eh: %.2f", hipotenusa);
    return hipotenusa;
}
EX9
#include <stdio.h>

int volume(int altura, int raio);

int main()
{
    int raio, altura;
    printf("Digite valor altura: ");
    scanf("%d", &altura);

    printf("Digite valor do raio: ");
    scanf("%d", &raio);
    volume(raio, altura);

    return 0;
}

int volume(int raio, int altura){
    int calculo;

    calculo = 3.141592*(raio*raio)*altura;
    printf("Resultado: %d", calculo);
    return calculo;
}
EX10
#include <stdio.h>

int maior(int n1, int n2);

int main()
{
    int n1, n2;
    printf("Digite 2 valores: ");
    scanf("%d", &n1);
    scanf("%d", &n2);

    maior(n1, n2);

    return 0;
}

int maior(int n1, int n2){
    if(n1 > n2){
        printf("%d eh numero maior", n1);
        return 0;
    }
    if(n2 > n1){
        printf("%d eh numero maior", n2);
        return 1;
    }
    if (n1 == n2){
        printf("%d e %d sao iguais", n1,n2);
        return 2;
    }
    
}
EX11
#include <stdio.h>


int media(int nota1, int nota2, int nota3, char l);

int main()
{
    int nota1, nota2, nota3;
    char l;
    printf("Digite letra A(media) e (ponderada): ");
    scanf("%s", &l);

    printf("Digite valor 3 notas: ");
    scanf("%d", &nota1);
    scanf("%d", &nota2);
    scanf("%d", &nota3);

    media(nota1, nota2, nota3, l);
    return 0;
}

int media(int nota1, int nota2, int nota3, char l){
    int calculo;
    if (l == 'A' || l == 'a'){
        calculo = (nota1 + nota2 + nota3)/3;
        printf("Resultado: %d", calculo);
        return 0;
    }
    if (l == 'P' || l == 'p'){
        calculo = (nota1*5) + (nota2*3) + (nota3*2)/3; 
        printf("Resultado: %d", calculo);
        return 1;
    }
    return 0;

}
EX12
#include <stdio.h>

int soma(int numero);

int main()
{
    int numero, soma1;
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    soma1 = soma(numero);
    printf("Resultado: %d", soma1);
    return 0;
}

int soma(int numero){
    if (numero <= 0) {
        printf("Numero inválido\n");
        return 0;
    } else {
        int soma = 0;
        while (numero > 0) {
            soma += numero % 10;
            numero /= 10;
        }
        return soma;
    }


}
EX13
#include <stdio.h>

float calcular(float numero1, float numero2, char op );

int main()
{
    float numero1, numero2, resultado;
    char op;
    printf("Digite 2 numeros: ");
    scanf("%f", &numero1);
    scanf("%f", &numero2);

    printf("Digite a opcao:\n(+) soma\n(-) subtracao\n(/) divisao\n(*) multiplicacao\n");
    scanf("%s", &op);


    resultado = calcular(numero1, numero2, op);
    printf("Resultado: %2.f", resultado);
    return 0;
}

float calcular(float numero1, float numero2, char op ){
     float resultado;
    switch (op) {
        case '+':
            resultado = numero1 + numero2;
            break;
        case '-':
            resultado = numero1 - numero2;
            break;
        case '*':
            resultado = numero1 * numero2;
            break;
        case '/':
            resultado = numero1 / numero2;
            break;
        default:
            printf("Operacao invalida\n");
            resultado = 0;
    }
    return resultado;
}
EX14
#include <stdio.h>

float consumo(float distancia, float litros);

int main()
{
    float distancia, litros;
    printf("Digite distancia: ");
    scanf("%f", &distancia);
     printf("Digite litros: ");
    scanf("%f", &litros);

    consumo(distancia, litros);

}

float consumo(float distancia, float litros){
      float consumo = distancia / litros;
    printf("Consumo: %.2f km/l\n", consumo);
    if (consumo < 8) {
        printf("Venda o carro!\n");
    } 
    else if (consumo >= 8 && consumo <= 14) {
        printf("Economico!\n");
    } 
    else {
        printf("Super economico!\n");
    }

}
EX15
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int num1, num2, num3;

    printf("Digite o valor 1: ");
    scanf("%d",&num1);
    printf("Digite o valor 2: ");
    scanf("%d",&num2);
    printf("Digite o valor 3: ");
    scanf("%d",&num3);
    
    if(num1 < 0 || num2 < 0 || num3 < 0){
        printf("Valor invalido meu parceiro");
        exit(0);
    }

    void triangulovalido(int num1, int num2, int num3);
    triangulovalido(num1, num2, num3);

    
    printf("\n");
    void qualtriangulo(int num1, int num2, int num3);
    qualtriangulo(num1, num2, num3);

    return 0;
}

void triangulovalido(int num1, int num2, int num3){

    if(num1 + num2 < num3 || num1 + num3 < num2 || num2 + num3 < num1 ){
        printf("Valores invalidos para um triangulo");
        exit(0);
    }
        else{
            printf("Valores validos para um triangulo");
        }

}

void qualtriangulo(int num1, int num2, int num3){

    if (num1 == num2 && num2 == num3) {
        printf("O triangulo eh equilatero");
    }
        else
            if (num1 == num2 || num2 == num3 || num1 == num3) {
            printf("O triangulo eh isoceles");
            }      
                else 
                    printf("O triangulo eh escaleno");
}
EX16
#include <stdio.h>

int desenha_linha(int num_simbolos);
int main() {
    int num_simbolos;
    printf("Quantos simbolos de igual deseja mostrar? ");
    scanf("%d", &num_simbolos);
    desenha_linha(num_simbolos);
    return 0;
}

int desenha_linha(int num_simbolos) {
    int i;
    for(i = 0; i < num_simbolos; i++) {
        printf("=");
    }
    printf("\n");
}
EX17
#include <stdio.h>

int soma(int numero1, int numero2);

int main()
{
    int numero1, numero2, soma1;
    printf("Digite um numero1: ");
    scanf("%d", &numero1);
    printf("Digite um numero2: ");
    scanf("%d", &numero2);

    if(numero1 <= 0 || numero2 <= 0) {
        printf("Os numeros devem ser positivos.\n");
        return 1;
    }

    soma1 = soma(numero1, numero2);
    printf("Resultado: %d", soma1);
    return 0;
}

int soma(int numero1, int numero2){
        int i, soma = 0;
    if(numero1 < numero2) {
        for(i = numero1 + 1; i < numero2; i++) {
            soma += i;
        }
    } 
    else {
        for(i = numero2 + 1; i < numero1; i++) {
            soma += i;
        }
    }
    return soma;
}
EX18
#include <stdio.h>

int soma(int x, int z);

int main()
{
    int x, z, resultado;
    printf("Digite um numero1: ");
    scanf("%d", &x);
    printf("Digite um numero2: ");
    scanf("%d", &z);

    resultado = soma(x, z);
    printf("Resultado: %d", resultado);
    return 0;
}

int soma(int x, int z){
    int i, resultado = 1;
    for(i = 0; i < z; i++) {
        resultado *= x;
    }
    return resultado;
}
EX19
#include <stdio.h>

int fatorial(int n);

int main() {
    int n, fatorial1;
    printf("Digite um numero: ");
    scanf("%d", &n);

    fatorial1 = fatorial(n);
    printf("%d! = %d\n", n, fatorial1);
    return 0;
}

int fatorial(int n) {
    int i, resultado = 1;
    for(i = 1; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}
EX20
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    int a;

    printf("Informe o Valor de a: ");
	scanf("%i", &a);

    void primo(int a);
    primo(a);

    return 0;
}

void primo(int a){

    int i, j, ehPrimo, contador = 0;

	for(i = 0; i <= a; i++){
		ehPrimo = 1;
		for(j = 2; j <= i/2; j++){
			if(i % j == 0){
				ehPrimo = 0;
				break;
			}
		}
		if(ehPrimo && i > 1){
			contador += 1;
		}
	}

	printf("\nExistem %d Numeros Primos no Intervalo de 0 ate %i", contador, a);

	
}
EX21
#include <stdio.h>

int exclamacoes(int n);

int main() {
    int n;
    printf("Digite um valor: ");
    scanf("%d", &n);
    
    exclamacoes(n);
    return 0;
}

int exclamacoes(int n) {
    int i, j;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("!");
        }
        printf("\n");
    }
}
EX23
#include <stdio.h>
#include <math.h>

void asteristicos(int n);

int main() {
    int n;
    printf("Digite um valor: ");
    scanf("%d", &n);
    
    asteristicos(n);
    return 0;
}

void asteristicos(int n) {
    int i, j;
    for (i = 1; i <= n; i++) { 
        for (j = 1; j <= i; j++){
            printf("*");
            
        }
        printf("\n");
    }
    for(j = 0; j < 10; j++){
        for(i = j - 1; i < 10; i++){
        printf("*");
    }
    printf("\n");
}
}
EX24
#include <stdio.h>
#include <math.h>

void asteristicos(int n);

int main() {
    int n;
    printf("Digite um valor: ");
    scanf("%d", &n);
    
    asteristicos(n);
    return 0;
}

void asteristicos(int n) {
    int i, j;
    for (i = 1; i <= n; i++) {
        for(j = n - i; j >= 1; j--)
            printf(" "); 
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        for (j = 2; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}
