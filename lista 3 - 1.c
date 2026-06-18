#include<stdio.h>

int main()
{
 int x,y;   
float z; 

printf("\nescreva um número:");
scanf("%d", &x);

printf("escreva o segundo algarismo:");
scanf("%d", &y);

z = (float)y/x;

printf("\na razão dos números e igual a:%f", z);
    return 0;
}
