# Compilador e Flags
CC = gcc
CFLAGS = -Wall -Wextra -g3 -I.

# Arquivos fontes e executável
SRC = app/main.c fundamentos_c/revisao.c
EXEC = app/output/main.exe

# Regra principal (compilar)
all: create_dir $(EXEC)

# Cria a pasta output no Windows sem dar erro se ela já existir
create_dir:
	@if not exist "app\output" mkdir "app\output"

# Compila o executável
$(EXEC): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(EXEC)

# Regra para compilar e rodar em seguida
run: all
	.\$(EXEC)

# Limpar o executável
clean:
	@if exist "app\output\main.exe" del /f /q "app\output\main.exe"