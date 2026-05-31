#include <stdio.h>
#include <string.h>

int main() {
    
    //Variaveis
    int menu = 0; //opções do menu
    int registros = 0; // quantidade de produtos
    
    //Base de dados
    struct produtos {
        int id;
        char nome[50];
        char descricao[100];
        float preco;
    } produto;

    // menu

    while (menu != 5) {
        printf("\n========================================\n");
        printf("          SISTEMA DE PRODUTOS           \n");
        printf("========================================\n");
        printf("1. Cadastrar Produto\n");
        printf("2. Listar Produtos\n");
        printf("3. Atualizar Produto\n");
        printf("4. Remover Produto\n");
        printf("5. Sair\n");
        printf("========================================\n");
        printf("Escolha uma opcao: ");

        // Validação de entrada
        if (scanf("%d", &menu) != 1) {
            printf("Entrada invalida! Digite um numero.\n");
            while(getchar() != '\n'); // Limpa o buffer
            continue;
        }
        scanf("%d", &menu);
        
        switch (menu) {
            case1:
                break;
            case2:
                break;
            case3:
                break;
            case4:
                break;
            case5:
                printf("Saindo do sistema...\n");
                break;
            default:
                printf("Opcao invalida! Tente novamente.\n");
        }
    }
    
    


    return 0;
}