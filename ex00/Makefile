NAME = Animals
CC = c++
HEADER =	Animal.hpp \
			Dog.hpp
FLAGS = -Wall -Wextra -Werror -std=c++98
SRCS =	Animal.cpp \
		Dog.cpp \
		main.cpp

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
