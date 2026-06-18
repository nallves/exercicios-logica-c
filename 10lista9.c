#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 1000


int arrayGlobal[TAM];

void preencherArray() {
    for (int i = 0; i < TAM; i++) {
        arrayGlobal[i] = (rand() % 10000) + 1;
    }
}

void imprimirArray() {
    for (int i = 0; i < TAM; i++) {
        printf("%d ", arrayGlobal[i]);
    }
    printf("\n");
}

long long calcularSomatorio() {
    long long soma = 0;
    for (int i = 0; i < TAM; i++) {
        soma += arrayGlobal[i];
    }
    return soma;
}

int main(void) {
    srand(time(NULL));

    preencherArray();

    printf("Array gerado:\n");
    imprimirArray();

    long long total = calcularSomatorio();
    printf("\nSomatorio de todos os elementos: %lld\n", total);

    return 0;
}