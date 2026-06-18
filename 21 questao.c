#include <stdio.h>

int main() {
    int numero;
    int i = 1;
    
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);
    
    if (numero >= 1) { 
        do {
            printf("%d\n", i);
            i++;
        } while (i <= numero);
    }
    return 0;
}