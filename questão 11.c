#include <stdio.h>
#include <math.h>

int main(){
    int opcao, num1, num2;

    printf("Programa Calculadora Simples\n");
    printf("(1) Somar dois números inteiros\n");
    printf("(2) Multiplicar dois números inteiros\n");
    printf("(3) Dividir dois números inteiros\n");
    printf("(4) Calcular a raiz quadrada de um número inteiro\n");
    printf("(0) Encerrar o programa\n");
    printf("Sua opção: ");
    scanf("%d", &opcao);

    if (opcao == 1){
        printf("Digite o primeiro número: ");
        scanf("%d", &num1);
        printf("Digite o segundo número: ");
        scanf("%d", &num2);
        printf("Resultado: %d\n", num1 + num2);

    } else if (opcao == 2){
        printf("Digite o primeiro número: ");
        scanf("%d", &num1);
        printf("Digite o segundo número: ");
        scanf("%d", &num2);
        printf("Resultado: %d\n", num1 * num2);

    } else if (opcao == 3){
        printf("Digite o primeiro número: ");
        scanf("%d", &num1);
        printf("Digite o segundo número: ");
        scanf("%d", &num2);
        printf("Resultado: %.2f\n", (float)num1 / num2);

    } else if (opcao == 4){
        printf("Digite um número: ");
        scanf("%d", &num1);
        printf("Raiz quadrada: %.2f\n", sqrt(num1));

    } else if (opcao == 0){
        printf("Encerrando o programa!\n");

    } else {
        printf("Opção inválida!\n");
    }

    return 0;
}