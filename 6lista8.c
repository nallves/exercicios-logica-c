#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LIN 10
#define COL 5

int main() {
    int matriz[LIN][COL];
    int vetor_soma[LIN] = {0}; 
    srand(time(NULL));

    for(int l = 0; l < LIN; l++) {
        for(int c = 0; c < COL; c++) {
            matriz[l][c] = (rand() % 2000) + 1;
            vetor_soma[l] += matriz[l][c];
        }
    }

    printf("Matriz 10x5:\n");
    for(int l = 0; l < LIN; l++) {
        for(int c = 0; c < COL; c++) {
            printf("%4d ", matriz[l][c]);
        }
        printf("\n");
    }

    printf("\nVetor Resultante (Soma de cada linha):\n");
    for(int l = 0; l < LIN; l++) {
        printf("Linha %d: %d\n", l, vetor_soma[l]);
    }
    return 0;
}