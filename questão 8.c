#include <stdio.h>

int main(){
    int codigo;

    printf("Digite o código da estação (1 a 4): ");
    scanf("%d", &codigo);

    if (codigo == 1){
        printf("Primavera\n");
    } else if (codigo == 2){
        printf("Verão\n");
    } else if (codigo == 3){
        printf("Outono\n");
    } else if (codigo == 4){
        printf("Inverno\n");
    } else {
        printf("Código inválido!\n");
    }

    return 0;
}