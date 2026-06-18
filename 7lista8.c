#include <stdio.h>
#define FILIAIS 3
#define PRODUTOS 5

int main() {
    int estoque[FILIAIS][PRODUTOS];
    int opcao;

    printf("--- CADASTRO DE ESTOQUE ---\n"); 
    for(int f = 0; f < FILIAIS; f++) {
        printf("\nFilial %d:\n", f + 1);
        for(int p = 0; p < PRODUTOS; p++) {
            printf("  Estoque do Produto %d: ", p + 1);
            scanf("%d", &estoque[f][p]);
        }
    }

    do {
        printf("\n--- MENU DE ESTOQUE ---\n");
        printf("(1) Imprimir estoque sem totalizacao\n");
        printf("(2) Imprimir estoque de uma filial com total\n");
        printf("(3) Imprimir estoque de um produto com total\n");
        printf("(4) Imprimir estoque de produto de filial especifica\n");
        printf("(5) Imprimir todas filiais com totalizacao\n");
        printf("(6) Alterar estoque de um produto\n");
        printf("(0) Sair do programa\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1: {
                printf("\nEstoque Geral:\n");
                for(int f = 0; f < FILIAIS; f++) {
                    printf("Filial %d -> ", f + 1);
                    for(int p = 0; p < PRODUTOS; p++) printf("P%d:%d ", p + 1, estoque[f][p]);
                    printf("\n");
                }
                break;
            }
            case 2: {
                int f, total = 0;
                printf("Digite a filial (1 a %d): ", FILIAIS);
                scanf("%d", &f);
                f--;
                printf("Estoque Filial %d -> ", f + 1);
                for(int p = 0; p < PRODUTOS; p++) {
                    printf("P%d:%d ", p + 1, estoque[f][p]);
                    total += estoque[f][p];
                }
                printf("| Total Geral: %d\n", total);
                break;
            }
            case 3: {
                int p, total = 0;
                printf("Digite o produto (1 a %d): ", PRODUTOS);
                scanf("%d", &p);
                p--;
                printf("Estoque Produto %d -> ", p + 1);
                for(int f = 0; f < FILIAIS; f++) {
                    printf("F%d:%d ", f + 1, estoque[f][p]);
                    total += estoque[f][p];
                }
                printf("| Total Geral: %d\n", total);
                break;
            }
            case 4: {
                int f, p;
                printf("Digite a filial (1 a %d) e o produto (1 a %d): ", FILIAIS, PRODUTOS);
                scanf("%d %d", &f, &p);
                printf("Estoque do Produto %d na Filial %d: %d\n", p, f, estoque[f-1][p-1]);
                break;
            }
            case 5: {
                printf("\nEstoque com Totalizacao:\n");
                for(int f = 0; f < FILIAIS; f++) {
                    int total = 0;
                    printf("Filial %d -> ", f + 1);
                    for(int p = 0; p < PRODUTOS; p++) {
                        printf("P%d:%d ", p + 1, estoque[f][p]);
                        total += estoque[f][p];
                    }
                    printf("| Total: %d\n", total);
                }
                break;
            }
            case 6: {
                int f, p, novo_valor;
                printf("Digite filial (1 a %d), produto (1 a %d) e o novo valor: ", FILIAIS, PRODUTOS);
                scanf("%d %d %d", &f, &p, &novo_valor);
                estoque[f-1][p-1] = novo_valor;
                printf("Estoque alterado com sucesso!\n");
                break;
            }
            case 0:
                printf("Saindo...\n"); break;
            default:
                printf("Opcao invalida!\n");
        }
    } while (opcao != 0);

    return 0;
}