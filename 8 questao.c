#include <stdio.h>

int main()  
{
    char palavra[50];
    int numero;

    printf("digite uma palavra");
    scanf("%s", palavra);

    printf("digite quantas vezes voce   quer q se repita");
    scanf("%d", &numero);

    for (int i= 0; i < numero;  i++)
    {
    
        printf("%s\n", palavra);
    }

    

    return 0;
}