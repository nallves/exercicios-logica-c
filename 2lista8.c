#include <stdio.h>
#define LIN 4
#define COL 3

int main() {
    int matriz[LIN][COL];

    printf("Digite os valores da matriz 4x3:\n");
    for(int l = 0; l < LIN; l++) {
        for(int c = 0; c < COL; c++) {
            printf("Linha %d, Coluna %d: ", l, c);
            scanf("%d", &matriz[l][c]);
        }
    }

    printf("\nMatriz Informada:\n");
    for(int l = 0; l < LIN; l++) {
        for(int c = 0; c < COL; c++) {
            printf("%4d ", matriz[l][c]);
        }
        printf("\n");
    }
    return 0;
}