#include <stdio.h>

int calcularSoma(int a, int b) 
{
    return a + b;

int main(void) 
    {
        int n1, n2, resultado;
        printf("Digite dois numeros inteiros: ");
        scanf("%d %d", &n1, &n2);
    }
    
    resultado = calcularSoma(n1, n2);
    printf("A soma dos numeros eh: %d\n", resultado); 
    return 0;
}