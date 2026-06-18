#include <stdio.h>
#include <conio.h>

int main() {
    char tecla;
    
    while (1) {
        printf("Seu Nome Completo\n");
        
        
        if (kbhit()) {
            tecla = getch(); 
            if (tecla == 27) {                 break; 
            }
        }
    }
    return 0;
}