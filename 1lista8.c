#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LIN 10 
#define COL 15 

int main() {
    int matriz[LIN][COL];
    srand(time(NULL));

    
    for(int l = 0; l < LIN; l++) {
        for(int c = 0; c < COL; c++) {
            matriz[l][c] = (rand() % 100) + 1; 
        }
    }

    printf("Matriz 10x15:\n");
    for(int l = 0; l < LIN; l++) {
        for(int c = 0; c < COL; c++) {
            printf("%4d ", matriz[l][c]);
        }
        printf("\n");
    }
    return 0;
}