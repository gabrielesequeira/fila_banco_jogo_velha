# Variáveis
CC = gcc
CFLAGS = -Wall -Wextra -std=c99
TARGET = fila
OBJS = main.o fila.o

# Compilar tudo
all: $(TARGET)

# Criar o executável
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

# Compilar arquivos fonte
main.o: main.c fila.h
	$(CC) $(CFLAGS) -c main.c

fila.o: fila.c fila.h
	$(CC) $(CFLAGS) -c fila.c

# Limpar arquivos (versão que funciona no Linux e WSL)
clean:
	rm -f *.o $(TARGET)
