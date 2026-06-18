#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LIN 4
#define COL 5

int main() {
    int matriz[LIN][COL];
    int menor;
    srand(time(NULL));

    for(int l = 0; l < LIN; l++) {
        for(int c = 0; c < COL; c++) {
            matriz[l][c] = (rand() % 100) + 1;
        }
    }

    menor = matriz[0][0];
    
    printf("Matriz 4x5:\n");
    for(int l = 0; l < LIN; l++) {
        for(int c = 0; c < COL; c++) {
            printf("%4d ", matriz[l][c]);
            if(matriz[l][c] < menor) {
                menor = matriz[l][c];
            }
        }
        printf("\n");
    }
    
    printf("\nO menor numero contido na matriz eh: %d\n", menor);
    return 0;
}