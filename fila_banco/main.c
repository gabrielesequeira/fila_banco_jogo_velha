#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fila.h"

void limpar_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

int main() {
    Cliente* inicio = NULL;
    Cliente* fim = NULL;
    int opcao, senha = 1;
    char nome[NOME_TAM];

    do {
        printf("\n=== Simulador de Fila de Banco ===\n");
        printf("1. Inserir cliente na fila\n");
        printf("2. Atender cliente\n");
        printf("3. Mostrar fila\n");
        printf("4. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        limpar_buffer();

        switch (opcao) {
            case 1:
                printf("Digite o nome do cliente: ");
                fgets(nome, NOME_TAM, stdin);
                nome[strcspn(nome, "\n")] = 0; // Remove \n
                inserir_cliente(&inicio, &fim, nome, senha++);
                break;
            case 2:
                atender_cliente(&inicio, &fim);
                break;
            case 3:
                mostrar_fila(inicio);
                break;
            case 4:
                printf("Encerrando o programa...\n");
                break;
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }
    } while (opcao != 4);

    liberar_fila(&inicio);
    return 0;
}
