NAME        = claptrap
CC          = c++
FLAGS       = -Wall -Wextra -Werror -std=c++98
RM          = rm -rf

OBJ_DIR     = obj/

SRC         = main.cpp ClapTrap.cpp 
OBJ         = $(SRC:%.cpp=$(OBJ_DIR)%.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

$(OBJ_DIR)%.o: %.cpp ClapTrap.hpp
	@mkdir -p $(OBJ_DIR)
	$(CC) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ_DIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re