#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LIN 5
#define COL 10

int main() {
    int matriz[LIN][COL];
    int maior = 0;
    srand(time(NULL));

    for(int l = 0; l < LIN; l++) {
        for(int c = 0; c < COL; c++) {
            matriz[l][c] = (rand() % 1000) + 1;
        }
    }

    maior = matriz[0][0];
    
    printf("Matriz 5x10:\n");
    for(int l = 0; l < LIN; l++) {
        for(int c = 0; c < COL; c++) {
            printf("%4d ", matriz[l][c]);
            if(matriz[l][c] > maior) {
                maior = matriz[l][c];
            }
        }
        printf("\n");
    }
    
    printf("\nO maior numero contido na matriz eh: %d\n", maior);
    return 0;
}