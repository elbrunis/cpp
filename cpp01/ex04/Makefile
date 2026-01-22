NAME		= replace
CC			= c++
FLAGS		= -Wall -Wextra -Werror -std=c++98

# Agregamos los archivos .cpp que crees (ej: FileHandler.cpp si decides usar clases)
SRC			= main.cpp
OBJ			= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	rm -f *.replace

re: fclean all

.PHONY: all clean fclean re