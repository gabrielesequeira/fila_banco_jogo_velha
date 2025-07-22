#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fila.h"


// Insere cliente no final da fila
void inserir_cliente(Cliente** inicio, Cliente** fim, char* nome, int senha) {
    Cliente* novo = (Cliente*) malloc(sizeof(Cliente));
    if (novo == NULL) {
        printf("Erro ao alocar memoria!\n");
        return;
    }
    strncpy(novo->nome, nome, NOME_TAM);
    novo->senha = senha;
    novo->proximo = NULL;

    if (*fim == NULL) {
        *inicio = novo;
        *fim = novo;
    } else {
        (*fim)->proximo = novo;
        *fim = novo;
    }
    printf("Cliente %s inserido na fila com senha %d.\n", nome, senha);
}

// Remove o cliente do inicio da fila
void atender_cliente(Cliente** inicio, Cliente** fim) {
    if (*inicio == NULL) {
        printf("Fila vazia, nenhum cliente para atender.\n");
        return;
    }
    Cliente* temp = *inicio;
    printf("Cliente atendido: %s (senha %d)\n", temp->nome, temp->senha);
    *inicio = temp->proximo;
    if (*inicio == NULL)
        *fim = NULL;
    free(temp);
}

// Mostra todos os clientes na fila
void mostrar_fila(Cliente* inicio) {
    if (inicio == NULL) {
        printf("Fila vazia.\n");
        return;
    }
    printf("Clientes na fila:\n");
    Cliente* atual = inicio;
    while (atual != NULL) {
        printf(" - %s (senha %d)\n", atual->nome, atual->senha);
        atual = atual->proximo;
    }
}

// Libera toda a fila (memória)
void liberar_fila(Cliente** inicio, Cliente ** fim) {
    Cliente* atual = *inicio;
    while (atual != NULL) {
        Cliente* anterior = atual;
        atual = atual->proximo;
        free(anterior);
    }
    *inicio = NULL;
    *fim = NULL;
}
