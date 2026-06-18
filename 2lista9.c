#include <stdio.h>

void imprimeValor(int valor) {
    printf("O valor da variavel eh: %d\n", valor);
}

int main(void) {
    int x = 5; 
    imprimeValor(x); 
    return 0;
}