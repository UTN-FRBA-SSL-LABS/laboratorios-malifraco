# Nombre del ejecutable final
PROGRAMA := programa

# Compilador y flags
CC     := gcc
CFLAGS := -Wall

# Archivos fuente del proyecto
SRCS := main.c operaciones.c

# Archivos objeto derivados de SRCS
OBJS := $(SRCS:.c=.o)

# Regla principal
all: $(PROGRAMA)

# Regla para linkear los objetos y generar el ejecutable
# Linkear los objetos para generar el ejecutable
$(PROGRAMA): $(OBJS)
	$(CC) $^ -o $(PROGRAMA)

# Regla de patrón para compilar cada .c en su .o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Regla para limpiar archivos generados
clean:
	rm -f $(PROGRAMA) $(OBJS)

# Declarar los targets que no son archivos
.PHONY: all clean
