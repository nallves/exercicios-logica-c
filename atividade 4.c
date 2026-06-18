#include <stdio.h>

int main() 
{
int num1, num2;
float num3;


printf("\nescolha um número par:");
scanf("%d", &num1);

printf("\nescolha um segundo número ímpar :");
scanf("%d", &num2);

num3 = (float) num1/num2;

printf("\no resultado da divisão dos números é igual a: %f",num3);




    return 0;
}