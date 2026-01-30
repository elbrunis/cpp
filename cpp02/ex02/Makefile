# Nombre del ejecutable
NAME        =   fixed

# Compilador y Flags
CXX         =   c++
CXXFLAGS    =   -Wall -Wextra -Werror -std=c++98

# Archivos fuente y objetos
SRC         =   main.cpp Fixed.cpp
OBJ         =   $(SRC:.cpp=.o)

# Colores para que la terminal quede "guapa"
GREEN       =   \033[0;32m
RED         =   \033[0;31m
RESET       =   \033[0m

# Regla principal
all: $(NAME)

$(NAME): $(OBJ)
	@$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)
	@echo "$(GREEN)✅ Proyecto compilado con éxito$(RESET)"

# Compilación de archivos .o
%.o: %.cpp Fixed.hpp
	@$(CXX) $(CXXFLAGS) -c $< -o $@

# Limpieza de objetos
clean:
	@rm -f $(OBJ)
	@echo "$(RED)X Objetos eliminados$(RESET)"

# Limpieza total
fclean: clean
	@rm -f $(NAME)
	@echo "$(RED)X Ejecutable eliminado$(RESET)"

# Re-compilar todo
re: fclean all

.PHONY: all clean fclean re