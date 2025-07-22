#include <stdio.h>
#include <string.h>
#include "fila_banco/fila.h"
#include "jogo_da_velha/jogo_da_velha.h"



void roda_fila_banco(){
    int opcao, senha = 1;
    char nome[NOME_TAM];
    Cliente* inicio = NULL;
    Cliente* fim = NULL;

    do{
            printf("\n--- MENU ---\n");
            printf("1. Adicionar cliente\n");
            printf("2. Atender cliente\n");
            printf("3. Listar fila\n");
            printf("0. Voltar\n");
            printf("Escolha: ");
            scanf("%d", &opcao);
            getchar(); // limpar buffer


            switch(opcao) {
                case 1:
                    printf("Digite o nome do cliente: ");
                    fgets(nome, NOME_TAM, stdin);
                    nome[strcspn(nome, "\n")] = 0;
                    inserir_cliente(&inicio, &fim, nome, senha++);
                    break;
                case 2:
                    atender_cliente(&inicio, &fim);
                    break;
                case 3:
                    mostrar_fila(inicio);
                    break;
                case 0:
                    liberar_fila(&inicio, &fim);
                    printf("Voltando...\n");
                    break;
                default:
                    printf("Opção inválida.\n");
            }
        } while (opcao != 0);
}



int main() {
    int opcao = 1;

    do{
        printf("\n--- MENU ---\n");
        printf("1. Ir pra Fila do Banco\n");
        printf("2. Jogar Jogo da Velha\n");
        printf("0. Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);
        getchar(); // limpar buffer

        switch (opcao)
        {
            case 1:
                printf("\n== Bem Vindo ao Banco ==\n");
                roda_fila_banco();
                break;

            case 2:
                printf("== Bem Vindo ao Jogo da Velha ==\n");
                jogar();
                break;
            case 0:
                printf("Saindo...\n");
                break;

        default:
            printf("Digite uma opção válida...");
            break;
        }
    }while (opcao != 0);
  

    

    return 0;
}
