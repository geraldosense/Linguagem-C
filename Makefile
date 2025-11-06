# Makefile para compilar o programa de raiz quadrada
# Compilador
CC = gcc

# Flags de compilação
CFLAGS = -Wall -Wextra -std=c11 -pedantic

# Nome do executável
TARGET = raiz_quadrada

# Nome do arquivo fonte
SOURCE = raiz_quadrada.c

# Biblioteca matemática (necessária para sqrt)
LIBS = -lm

# Regra padrão
all: $(TARGET)

# Compilar o programa
$(TARGET): $(SOURCE)
	$(CC) $(CFLAGS) -o $(TARGET) $(SOURCE) $(LIBS)

# Limpar arquivos compilados
clean:
	rm -f $(TARGET) $(TARGET).exe

# Executar o programa
run: $(TARGET)
	./$(TARGET)

.PHONY: all clean run

