NAME = RPN
CPP = c++
Cflags = -Wall -Wextra -Werror -std=c++98
RM = rm -rf

SRC = main.cpp RPN.cpp\

HDR = RPN.hpp\

OSRC = $(SRC:.cpp=.o)

all:$(NAME)

$(NAME): $(OSRC) $(HDR)
	$(CPP) $(OSRC) -o $(NAME)

%.o:%.cpp
				$(CPP) $(Cflags) -c $< -o $@

clean:
				$(RM) $(OSRC)

fclean:
				$(RM) $(OSRC) $(NAME)

re: fclean all

.PHONY: all fclean clean re