#include <stdio.h>

float lerNotaValidada() {
    float nota;
    do {
        printf("Digite a nota (0.0 a 10.0): ");
        scanf("%f", &nota);
        if (nota < 0.0 || nota > 10.0) {
            printf("Nota invalida. Tente novamente.\n");
        }
    } while (nota < 0.0 || nota > 10.0);
    return nota;
}

float calcularMedia(float n1, float n2, float n3) {
    return (n1 + n2 + n3) / 3.0;
}

int main(void) {
    float nota1, nota2, nota3, media;

    printf("--- Leitura das notas ---\n");
    nota1 = lerNotaValidada();
    nota2 = lerNotaValidada();
    nota3 = lerNotaValidada();

    media = calcularMedia(nota1, nota2, nota3);

    printf("\nMedia calculada: %.2f\n", media);

    if (media >= 0.0 && media <= 3.0) {
        printf("Mensagem: Reprovado\n");
    } else if (media >= 3.1 && media <= 6.9) {
        printf("Mensagem: Exame\n");
    } else if (media >= 7.0 && media <= 10.0) {
        printf("Mensagem: Aprovado\n");
    }

    return 0;
}