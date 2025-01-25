NAME = Brain
CPP = c++
Cflags = -Wall -Wextra -Werror -std=c++98 -fsanitize=address
RM = rm -rf

SRC = main.cpp\

OSRC = $(SRC:.cpp=.o)

all:$(NAME)

$(NAME): $(OSRC)
	$(CPP) $(Cflags) $(OSRC) -o $(NAME)

clean:
	$(RM) $(OSRC)

fclean:
	$(RM) $(OSRC) $(NAME)

re: fclean all
