#include <stdio.h>

int main() {
    int numero;
    float soma = 0; 
    
    printf("Digite um numero: ");
    scanf("%d", &numero);
    
    if (numero >= 1) {
        for (int i = 1; i <= numero; i++) {
            soma = soma + i;
        }
        
        float media = soma / numero;
        printf("A media e: %.2f\n", media);
    }
    return 0;
}