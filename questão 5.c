#include <stdio.h>

int main(){
    int numero;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    if (numero % 2 == 0){
        printf("O número é PAR!\n");
    } else {
        printf("O número é ÍMPAR!\n");
    }

    return 0;
}