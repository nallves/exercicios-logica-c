#include <stdio.h>

void verificaParImpar(int num) {
    if(num % 2 == 0) {
        printf("O numero %d eh Par.\n", num);
    } else {
        printf("O numero %d eh Impar.\n", num);
    }
}

int main(void) {
    int numero;
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);
    verificaParImpar(numero);
    return 0;
}