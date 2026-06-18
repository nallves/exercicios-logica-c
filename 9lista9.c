#include <stdio.h>

int lerNumero() {
    int n;
    scanf("%d", &n);
    return n; 
}

int validaIntervalo(int inicial, int final) {
    if(inicial < final) return 1;
    return 0; 
}

void imprimeIntervalo(int inicial, int final) {
    for(int i = inicial; i <= final; i++) {
        printf("%d ", i);
    }
    printf("\n"); 
}

int main(void) {
    printf("Digite o primeiro numero do intervalo: ");
    int num1 = lerNumero();
    
    printf("Digite o segundo numero do intervalo: ");
    int num2 = lerNumero();
    
    if(validaIntervalo(num1, num2) == 1) {
        imprimeIntervalo(num1, num2);
    } else {
        printf("Intervalo incorreto\n");
    }
    return 0;
}