NAME = megaphone

SRC =  megaphone.cpp
OBJ = $(SRC:.cpp=.o)
CPP = g++
CFLAGS = -Wall -Wextra -Werror -std=c++98

all : $(NAME)

$(NAME): $(OBJ)
	@$(CPP) $(CFLAGS) -o $(NAME) $(OBJ)

%.o: %.c
	@$(CPP) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all