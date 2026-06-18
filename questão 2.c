#include <stdio.h>

int main()
{
int idade;

printf("Qual é a sua idade?");
scanf("%d", &idade);

if( idade >=18){
printf("Você pode tirar a habilitação\n");
} else { 
    printf("Você não pode tirar a habilitação\n");
}

    
    
    return 0; 
}