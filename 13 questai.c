#include <stdio.h>

int main() {
    int idade;
    
    do {
        printf("Digite uma idade (1 a 123): ");
        scanf("%d", &idade);
    } while (idade < 1 || idade > 123);
    
    printf("Idade valida registrada!\n");
    return 0;
}