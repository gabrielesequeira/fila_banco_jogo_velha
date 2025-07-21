#ifndef FILA_H
#define FILA_H

#define NOME_TAM 50

typedef struct Cliente{
    char nome[NOME_TAM];
    int senha;
    struct Cliente* proximo;

}Cliente;

//functions

void inserir_cliente(Cliente** inicio, Cliente** fim, char* nome, int senha);
void atender_cliente(Cliente** inicio, Cliente** fim);
void mostrar_fila(Cliente* inicio);
int fila_vazia(Cliente* inicio);
void liberar_fila(Cliente** inicio);

#endif