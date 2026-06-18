#include <stdio.h>

void imprimeNumero(int num) {
    printf("O numero digitado foi: %d\n", num);
}

int main(void) {
    int numero;
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);
    imprimeNumero(numero); 
    return 0;
}