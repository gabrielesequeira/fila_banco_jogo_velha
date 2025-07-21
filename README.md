# Simulador de Fila de Banco + Jogo da Velha no Terminal

Projeto para a disciplina **INF1037 - Programação em C**  
Desenvolvido em linguagem C com foco em lógica de programação, estruturas de dados e interação via terminal.

---

## 🎯 Objetivo

Criar dois programas distintos em C com propósitos didáticos:

1. **Simulador de Fila de Banco**  
   Simula o atendimento de clientes em um banco, utilizando a estrutura de fila (FIFO).

2. **Jogo da Velha (Tic-Tac-Toe)**  
   Jogo para dois jogadores, executado no terminal, utilizando matriz e verificação de condições de vitória.

## 🛠️ Funcionalidades

### 📌 Simulador de Fila de Banco
- Adicionar novo cliente à fila
- Atender (remover) cliente da fila
- Listar todos os clientes na fila
- Exibir status da fila (vazia, cheia, etc.)
- Encerrar o programa

### 📌 Jogo da Velha
- Tabuleiro exibido no terminal
- Alternância entre jogador X e jogador O
- Verificação de vitória e empate
- Opção de reiniciar o jogo

## 💡 Lógica de Dados e Estrutura

### Fila de Banco
O programa utiliza uma `struct Cliente` contendo nome e senha.  
Clientes são armazenados dinamicamente em uma fila, utilizando ponteiros.  
Funções principais:
- `inserir_cliente()`
- `atender_cliente()`
- `listar_fila()`
- `fila_vazia()`

### Jogo da Velha
Tabuleiro implementado com uma matriz 3x3 de `char`.  
A verificação de vitória é feita com comparações nas linhas, colunas e diagonais.  
Funções principais:
- `inicializar_tabuleiro()`
- `mostrar_tabuleiro()`
- `verificar_vencedor()`
- `jogar()`

