# Nombre del ejecutable final
NAME = phonebook

# Archivos fuente (.cpp)
SRCS = main.cpp PhoneBook.cpp Contact.cpp

# Archivos objeto (.o) generados a partir de los fuentes
OBJS = $(SRCS:.cpp=.o)

# Compilador
CC = g++

# Banderas de compilación (flags):
# -Wall: Habilita todas las advertencias (warnings)
# -Wextra: Habilita advertencias adicionales
# -Werror: Trata las advertencias como errores
# -std=c++98: Especifica el estándar C++98, común en este tipo de proyectos
CFLAGS = -Wall -Wextra -Werror -std=c++98

# Regla principal: compila el programa
all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

# Regla para compilar archivos individuales (.o)
%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

# Regla para limpiar los archivos objeto y el ejecutable
clean:
	rm -f $(OBJS)

# Regla para limpiar todo (archivos objeto y el ejecutable)
fclean: clean
	rm -f $(NAME)

# Regla para recompilar (limpiar y luego compilar todo)
re: fclean all

# Indica que 'all', 'clean', 'fclean' y 're' no son nombres de archivos
.PHONY: all clean fclean re