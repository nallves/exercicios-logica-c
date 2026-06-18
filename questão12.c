#include <stdio.h>

int main(){
    float salario, imposto, percentual;

    printf("Digite o salário do funcionário: ");
    scanf("%f", &salario);

    if (salario < 1400){
        percentual = 0.05;
    } else if (salario >= 1400 && salario <= 3000){
        percentual = 0.10;
    } else {
        percentual = 0.15;
    }

    imposto = salario * percentual;

    printf("Percentual de imposto: %.0f%%\n", percentual * 100);
    printf("Valor do imposto: R$ %.2f\n", imposto);

    return 0;
}