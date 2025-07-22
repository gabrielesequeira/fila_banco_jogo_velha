CC = gcc
CFLAGS = -Wall -Wextra -std=c99

SRC_DIR = .
FILA_DIR = ./fila_banco
VELHA_DIR = ./jogo_da_velha


TARGET = simulador_banco_velha

OBJS = main.o $(FILA_DIR)/fila.o $(VELHA_DIR)/jogo_da_velha.o

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

main.o: main.c $(FILA_DIR)/fila.h $(VELHA_DIR)/jogo_da_velha.h
	$(CC) $(CFLAGS) -c main.c -o main.o

$(FILA_DIR)/fila.o: $(FILA_DIR)/fila.c $(FILA_DIR)/fila.h
	$(CC) $(CFLAGS) -c $(FILA_DIR)/fila.c -o $(FILA_DIR)/fila.o

$(VELHA_DIR)/jogo_da_velha.o: $(VELHA_DIR)/jogo_da_velha.c $(VELHA_DIR)/jogo_da_velha.h
	$(CC) $(CFLAGS) -c $(VELHA_DIR)/jogo_da_velha.c -o $(VELHA_DIR)/jogo_da_velha.o

clean:
	rm -f *.o $(FILA_DIR)/*.o $(VELHA_DIR)/*.o $(TARGET)

run: $(TARGET)
	./$(TARGET)
