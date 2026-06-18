#include <stdio.h>

int main() {
    int numero;
    int i = 1;
    
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);
    
    while (i <= numero) {
        printf("%d\n", i);
        i++;
    }
    return 0;
}