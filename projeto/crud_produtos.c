#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <string.h>

int main() {
    
    //Variaveis
    int menu = 0; //opções do menu
    int registros = 0; // quantidade de produtos
    
    //Base de dados
    struct produtos_t {
        int id;
        char nome[51];
        char descricao[101];
        float preco;
    
    };
struct produtos_t produtos[10];
int quantidade = 0;
int id = 0;
      
    
    
    
    
    // menu

        do{
        system("clear");
        printf("\n========================================\n");
        printf("      Mercado do Pedro e Gabriel         \n");
        printf("========================================\n");
        printf("1. Cadastrar Produto\n");
        printf("2. Listar Produtos\n");
        printf("3. Atualizar Produto\n");
        printf("4. Remover Produto\n");
        printf("5. Sair\n");
        printf("========================================\n");
        printf("Escolha uma opcao: ");
        scanf("%i", &menu);
         while(getchar() != '\n');
        
        
        
            /* code */
       
        
    
            switch (menu)
        {
        case 1: {system("clear");
        
         
            
            int idDigitado = 0;
            int idDuplicado;
   if (quantidade >= 10) {
                printf("Erro: limite maximo de 10 produtos atingido.\n");
                printf("Pressione ENTER para voltar ao menu.");
                getchar();
                break;
            }
                  
  
  
            do{
  
   
    idDuplicado=0;
   
            
            printf("Vamos cadastrar o produto.\n");
        
        printf("Digite o ID desejado do produto que voce quer cadastrar\n");
        
        scanf("%i", &idDigitado);
        
        while(getchar() != '\n');

    if (idDigitado <= 0) {
        printf("Erro: o ID deve ser um numero inteiro positivo.\n\n");
    } else{
    
            
    for (int i = 0; i < quantidade; i++) {
     if(produtos[i].id == idDigitado){
            idDuplicado=1;
     }
      } 
        
       if( idDuplicado == 1){   
      printf("Id duplicado tente novamente\n");
       } 
       

    } }while (idDigitado <= 0 || idDuplicado == 1);
produtos[quantidade].id = idDigitado;
        
        
        printf("Digite o nome do produto da mercearia que voce quer adicionar a sacola:\n ");
        scanf("%[^\n]s", produtos[quantidade].nome);
        while(getchar() != '\n');
        printf("Agora digite o preco do produto:");
        scanf("%f", &produtos[quantidade].preco);
         while(getchar() != '\n'); 
         
            if(produtos[quantidade].preco <0){
        printf("Erro, preco nao pode ser negativo\n");
        
        }else  
   
        
           
        quantidade++;
          do{
            for (int i = 0; i<quantidade ; i++)
            {
            printf("Produto %i : %s - %.2f\n", i+1,
            produtos[i].nome, produtos[i].preco);
             }
            }while(produtos[quantidade].preco < 0);
    
        //     printf("Voce chegou no limite de produtos cadastrados, pressione ENTER para voltar ao menu principal.");
        // getchar();
            
        };break;
        case 2: system("clear");
        printf("Listagem de produtos."); break;
        case 3: system("clear"); 
        printf("Atualização dos produtos.");break;
        case 4: system("clear"); 
        printf("Remoção de produtos."); break;
        case 5: system("clear");
        printf("Obrigado por usar o programa, adeus."); break;
        default:
        printf("Opa opcao invalida tente novamente.\n");}
        
       } while(menu !=5);
    

    


    return 0;
}