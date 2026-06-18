#include <stdio.h>

int main() {
    int idade;
    
    do {
        printf("Digite uma idade: ");
        scanf("%d", &idade);
        
        if (idade < 1 || idade > 123) {
            printf("Idade invalida\n");
        }
    } while (idade < 1 || idade > 123);
    
    return 0;
}