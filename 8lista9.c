#include <stdio.h>

void repetePalavra(char palavra[], int repeticoes) {
    for(int i = 0; i < repeticoes; i++) {
        printf("%s\n", palavra);
    }
}

int main(void) {
    char texto[50];
    int qtd;
    
    printf("Digite uma palavra: ");
    scanf("%s", texto);
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &qtd);
    
    if(qtd > 0) {
        repetePalavra(texto, qtd);
    }
    return 0;
}