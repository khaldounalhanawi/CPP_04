NAME = Materia
CC = c++
HEADER = AMateria.hpp \
		ICharacter.hpp \
		Ice.hpp \
		Cure.hpp
FLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = AMateria.cpp \
		Ice.cpp \
		main.cpp \
		Cure.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp $(HEADER)
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
