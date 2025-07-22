# Compilador e flags
CC = gcc
CFLAGS = -Wall -Wextra -std=c99

# Diretórios de código-fonte
SRC_DIR = .
FILA_DIR = ./fila_banco
VELHA_DIR = ./jogo_da_velha

# Nome do executável
TARGET = simulador_banco_velha

# Objetos a serem compilados
OBJS = main.o $(FILA_DIR)/fila.o $(VELHA_DIR)/jogo_da_velha.o

# Regra principal
all: $(TARGET)

# Como gerar o executável final
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

# Compilar o main.c
main.o: main.c $(FILA_DIR)/fila.h $(VELHA_DIR)/jogo_da_velha.h
	$(CC) $(CFLAGS) -c main.c -o main.o

# Compilar fila.c
$(FILA_DIR)/fila.o: $(FILA_DIR)/fila.c $(FILA_DIR)/fila.h
	$(CC) $(CFLAGS) -c $(FILA_DIR)/fila.c -o $(FILA_DIR)/fila.o

# Compilar jogo_da_velha.c
$(VELHA_DIR)/jogo_da_velha.o: $(VELHA_DIR)/jogo_da_velha.c $(VELHA_DIR)/jogo_da_velha.h
	$(CC) $(CFLAGS) -c $(VELHA_DIR)/jogo_da_velha.c -o $(VELHA_DIR)/jogo_da_velha.o

# Limpar arquivos
clean:
	rm -f *.o $(FILA_DIR)/*.o $(VELHA_DIR)/*.o $(TARGET)

# Executar o programa
run: $(TARGET)
	./$(TARGET)
