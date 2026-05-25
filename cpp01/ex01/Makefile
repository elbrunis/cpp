# Nombre del ejecutable
NAME        = horde

# Compilador y Flags
CC          = c++
FLAGS       = -Wall -Wextra -Werror -std=c++98

# Archivos Fuentes (Aquí añadimos zombieHorde.cpp)
SRC         = main.cpp Zombie.cpp zombieHorde.cpp
OBJ         = $(SRC:.cpp=.o)

# Regla principal
all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

# Limpieza de objetos
clean:
	rm -f $(OBJ)

# Limpieza total (objetos + ejecutable)
fclean: clean
	rm -f $(NAME)

# Re-compilación total
re: fclean all

# Evita conflictos con archivos que se llamen igual que las reglas
.PHONY: all clean fclean re    