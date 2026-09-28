# Nombre del programa final
PROGRAMA := suma

# Compilador de C a usar
CC := gcc

# Flags de compilación
CFLAGS := -Wall

# Regla principal: indica qué construir al ejecutar `make`
all: $(PROGRAMA)

# Regla para generar el ejecutable a partir de suma.c
# Compilar suma.c y generar el ejecutable
$(PROGRAMA): suma.c
	$(CC) $(CFLAGS) suma.c -o $(PROGRAMA)

# Regla para limpiar los archivos generados
clean:
	rm -f $(PROGRAMA)

.PHONY: all clean
