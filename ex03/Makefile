NAME = materia

OBJ = main.cpp AMateria.cpp Ice.cpp Cure.cpp MateriaSource.cpp Character.cpp

SRC = $(OBJ:.cpp=.o)

CC = c++

CFLAGS = -Werror -Wextra -Wall -std=c++98 -g -gdwarf-4

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

%.o:%.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(SRC)

fclean:
	rm -rf $(SRC) $(NAME)

re: fclean all

.PHONY: all clean fclean re
