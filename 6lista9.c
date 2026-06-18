#include <stdio.h>


int descobreMaior(int a, int b, int c) {
    int maior = a;
    if(b > maior) maior = b;
    if(c > maior) maior = c;
    return maior;
}

int main(void) {
    int n1, n2, n3, maior;
    printf("Digite tres numeros inteiros: ");
    scanf("%d %d %d", &n1, &n2, &n3);
    
    maior = descobreMaior(n1, n2, n3);
    printf("O maior numero lido eh: %d\n", maior);
    return 0;
}