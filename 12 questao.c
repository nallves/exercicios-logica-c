#include <stdio.h>

int main() {
    int numero = 1; 
    
    while (numero != 0) {
        printf("Digite um numero (0 para sair): ");
        scanf("%d", &numero);
    }
    return 0;
}