#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 3

int main() {
    int matrizM[TAM][TAM], matrizR[TAM][TAM];
    int maior;
    srand(time(NULL));

    for(int l = 0; l < TAM; l++) {
        for(int c = 0; c < TAM; c++) {
            matrizM[l][c] = (rand() % 20) + 1;
        }
    }

    maior = matrizM[0][0];
    printf("Matriz M Original:\n");
    for(int l = 0; l < TAM; l++) {
        for(int c = 0; c < TAM; c++) {
            printf("%4d ", matrizM[l][c]);
            if(matrizM[l][c] > maior) maior = matrizM[l][c];
        }
        printf("\n");
    }

    printf("\nMaior elemento encontrado: %d\n", maior);
    printf("\nMatriz R (M multiplicada pelo maior elemento):\n");
    
    for(int l = 0; l < TAM; l++) {
        for(int c = 0; c < TAM; c++) {
            matrizR[l][c] = matrizM[l][c] * maior;
            printf("%4d ", matrizR[l][c]);
        }
        printf("\n");
    }
    return 0;
}