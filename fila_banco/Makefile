CC = gcc
CFLAGS = -Wall -Wextra -std=c11
OBJ = main.o fila.o
TARGET = banco

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJ)

main.o: main.c fila.h
	$(CC) $(CFLAGS) -c main.c

fila.o: fila.c fila.h
	$(CC) $(CFLAGS) -c fila.c

clean:
	rm -f $(OBJ) $(TARGET)
