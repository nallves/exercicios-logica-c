#include <stdio.h>
#include <math.h>

void imprimirMenu() {
    printf("\nPrograma Calculadora Simples\n");
    printf("(1) Somar dois numeros inteiros\n");
    printf("(2) Multiplicar dois numeros inteiros\n");
    printf("(3) Dividir dois numeros inteiros\n");
    printf("(4) Calcular a raiz quadrada de um numero inteiro\n");
    printf("(0) Encerrar o programa\n");
    printf("Sua opcao: ");
}

int lerNumero() {
    int num;
    scanf("%d", &num);
    return num;
}

void somar() {
    printf("Digite o primeiro numero: ");
    int n1 = lerNumero();
    printf("Digite o segundo numero: ");
    int n2 = lerNumero();
    printf("Resultado da soma: %d\n", n1 + n2);
}

void multiplicar() {
    printf("Digite o primeiro numero: ");
    int n1 = lerNumero();
    printf("Digite o segundo numero: ");
    int n2 = lerNumero();
    printf("Resultado da multiplicacao: %d\n", n1 * n2);
}

void dividir() {
    printf("Digite o numerador: ");
    int n1 = lerNumero();
    printf("Digite o denominador: ");
    int n2 = lerNumero();
    
    if (n2 == 0) {
        printf("Erro: Divisao por zero nao e possivel!\n");
    } else {
        printf("Resultado da divisao: %.2f\n", (float)n1 / n2);
    }
}

void raizQuadrada() {
    printf("Digite o numero: ");
    int n = lerNumero();
    
    if (n < 0) {
        printf("Erro: Nao existe raiz quadrada real de um numero negativo!\n");
    } else {
        printf("Raiz quadrada de %d: %.2f\n", n, sqrt(n));
    }
}

int main(void) {
    int opcao;

    do {
        imprimirMenu();
        opcao = lerNumero();

        switch(opcao) {
            case 1: somar(); break;
            case 2: multiplicar(); break;
            case 3: dividir(); break;
            case 4: raizQuadrada(); break;
            case 0: printf("Encerrando o programa...\n"); break;
            default: printf("Opcao invalida. Tente novamente.\n");
        }
    } while (opcao != 0);

    return 0;
}