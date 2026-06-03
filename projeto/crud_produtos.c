#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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


        system("clear");
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
        if (scanf("%d", &menu) >5) {
            printf("Entrada invalida! Digite um numero.\n");
            while(getchar() != '\n'); // Limpa o buffer

        }
        
        switch (menu)
        {
        case 1: system("clear");
        printf("Vamos cadastrar o produto.");break;
        case 2: system("clear");
        printf("Listagem de produtos."); break;
        case 3: system("clear"); 
        printf("Atualização dos produtos.");break;
        case 4: system("clear"); 
        printf("Remoção de produtos."); break;
        case 5: system("clear");
        printf("Obrigado por usar o programa, adeus."); break;

        
        default: 
        // do { 
        printf("Opa opcao invalida tente novamente.\n");break;} 
        //Tentei de alguma forma fazer o loop com a outra parte do codigo mas nao consegui
    //     printf("Pressione ENTER para continuar...\n");  
    //      getchar();
    // }   while(menu !=0); break;
        // }
    


    return 0;
}