#include <stdio.h>

int main()
{
int idade;

printf("Qual é a sua idade?");
scanf("%d", &idade);

if( idade >=18 && idade <=123) {
printf("Você pode tirar a habilitação\n");

} else if  
     ( idade <= 0 || idade > 123 ) 
  {  printf("idade invalida\n");
} 

{
    printf("não pode tirar a habilitação");
}
    
    return 0; 

}