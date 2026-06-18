#include <stdio.h>

int main() {
    int inicio, fim;
    
    printf("Digite o primeiro numero: ");
    scanf("%d", &inicio);
    printf("Digite o segundo numero: ");
    scanf("%d", &fim);
    
    if (inicio >= fim) {
        printf("Intervalo incorreto\n");
        return 0;
    }
    
    for (int i = inicio; i <= fim; i++) {
        printf("%d\n", i);
    }
    return 0;
}