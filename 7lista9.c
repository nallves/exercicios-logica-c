#include <stdio.h>

void imprimeSequencia(int num) {
    for(int i = 1; i <= num; i++) {
        printf("%d ", i);
    }
    printf("\n");
}

int main(void) {
    int limite;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &limite);
    
    if(limite > 0) {
        imprimeSequencia(limite);
    } else {
        printf("O numero deve ser positivo!\n");
    }
    return 0;
}