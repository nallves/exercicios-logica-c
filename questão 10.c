#include <stdio.h>

int main(){
    float n1, n2, n3, media;

    printf("Digite a primeira nota: ");
    scanf("%f", &n1);

    printf("Digite a segunda nota: ");
    scanf("%f", &n2);

    printf("Digite a terceira nota: ");
    scanf("%f", &n3);

    media = (n1 + n2 + n3) / 3;

    printf("Média: %.1f\n", media);

    if (media >= 0 && media <= 3.0){
        printf("Reprovado!\n");
    } else if (media >= 3.1 && media <= 6.9){
        printf("Exame!\n");
    } else if (media >= 7.0 && media <= 10.0){
        printf("Aprovado!\n");
    } else {
        printf("Média inválida!\n");
    }

    return 0;
}