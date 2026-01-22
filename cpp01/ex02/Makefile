# Nombre del programa
NAME        = brain

# Compilador y Flags (Estándar C++98 exigido por 42)
CC          = c++
FLAGS       = -Wall -Wextra -Werror -std=c++98

# Archivos
SRC         = main.cpp
OBJ         = $(SRC:.cpp=.o)

# Reglas
all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re