#include <stdio.h>
#include "jogo_da_velha.h"

#define TAM 3
char tabuleiro[TAM][TAM];

void inicializar_tabuleiro() {
    for (int i = 0; i < TAM; i++)
        for (int j = 0; j < TAM; j++)
            tabuleiro[i][j] = ' ';
}

void mostrar_tabuleiro() {
    printf("\n");
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf(" %c ", tabuleiro[i][j]);
            if (j < TAM - 1) printf("|");
        }
        printf("\n");
        if (i < TAM - 1) printf("---+---+---\n");
    }
    printf("\n");
}

int verificar_vencedor() {
    for (int i = 0; i < TAM; i++) {
        if (tabuleiro[i][0] == tabuleiro[i][1] && tabuleiro[i][1] == tabuleiro[i][2] && tabuleiro[i][0] != ' ')
            return tabuleiro[i][0];

        if (tabuleiro[0][i] == tabuleiro[1][i] && tabuleiro[1][i] == tabuleiro[2][i] && tabuleiro[0][i] != ' ')
            return tabuleiro[0][i];
    }

    if (tabuleiro[0][0] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[2][2] && tabuleiro[0][0] != ' ')
        return tabuleiro[0][0];

    if (tabuleiro[0][2] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[2][0] && tabuleiro[0][2] != ' ')
        return tabuleiro[0][2];

    int empate = 1;
    for (int i = 0; i < TAM; i++)
        for (int j = 0; j < TAM; j++)
            if (tabuleiro[i][j] == ' ') empate = 0;

    if (empate) return 'E';
    return 0;
}

void jogar() {
    char jogador = 'X';
    int linha, coluna, resultado;

    inicializar_tabuleiro();

    while (1) {
        mostrar_tabuleiro();
        printf("Jogador %c, escolha uma linha (0 a 2): ", jogador);
        scanf("%d", &linha);
        printf("Jogador %c, escolha uma coluna (0 a 2): ", jogador);
        scanf("%d", &coluna);

        if (linha < 0 || linha >= TAM || coluna < 0 || coluna >= TAM || tabuleiro[linha][coluna] != ' ') {
            printf("Jogada inválida. Tente novamente.\n");
            continue;
        }

        tabuleiro[linha][coluna] = jogador;
        resultado = verificar_vencedor();

        if (resultado == 'X' || resultado == 'O') {
            mostrar_tabuleiro();
            printf("Jogador %c venceu!\n", resultado);
            break;
        } else if (resultado == 'E') {
            mostrar_tabuleiro();
            printf("Empate!\n");
            break;
        }

        jogador = (jogador == 'X') ? 'O' : 'X';
    }
}
