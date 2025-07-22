# Bank Queue Simulator + Tic-Tac-Toe in Terminal

Project for the course **INF1037 - Programming in C**  
Developed in the C language with a focus on programming logic, data structures, and terminal interaction.

## Objective

Create two distinct programs in C for didactic purposes:

1. **Bank Queue Simulator**  
   Simulates customer service in a bank using the queue structure (FIFO).

2. **Tic-Tac-Toe Game**  
   Two-player game executed in the terminal, using a matrix and victory condition checks.

## Features

### Bank Queue Simulator
- Add new customer to the queue
- Serve (remove) customer from the queue
- List all customers in the queue
- Display queue status (empty, full, etc.)
- Exit the program

### Tic-Tac-Toe
- Board displayed in the terminal
- Alternation between player X and player O
- Victory and draw detection
- Option to restart the game

### Data Logic and Structure

### Bank Queue
The program uses a `struct Cliente` containing name and password.  
Customers are dynamically stored in a queue using pointers.  
Main functions:
- `inserir_cliente()`
- `atender_cliente()`
- `listar_fila()`
- `fila_vazia()`

### Tic-Tac-Toe
The board is implemented with a 3x3 `char` matrix.  
Victory check is done by comparing rows, columns, and diagonals.  
Main functions:
- `inicializar_tabuleiro()`
- `mostrar_tabuleiro()`
- `verificar_vencedor()`
- `jogar()`

## Topics Learned and Practiced

During the development of this project for the course, several fundamental concepts were applied and reinforced, such as:

- **Data Structures in C**
  - Definition and manipulation of structs (`struct Cliente`)
  - Use of pointers to manage dynamic lists and queues

- **Queues**
  - Implementation of the FIFO (First In, First Out) structure
  - Insertion, removal, and status checking of the queue

- **Matrices and Array Manipulation**
  - Use of matrices to represent the Tic-Tac-Toe board
  - Accessing and modifying matrix elements

- **Game Programming Logic**
  - Checking win and draw conditions in Tic-Tac-Toe
  - Controlling the alternation of turns between players

- **Terminal Input and Output**
  - Formatted printing of the system state (queue and board)
  - Reading user data and commands

- **Code Modularization**
  - Organizing functions by responsibility (queue and game)
  - Clear separation between data logic and interface

