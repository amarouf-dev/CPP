
NAME =  Scalar
CPP = c++
Cflags = -Wall -Wextra -Werror -std=c++98
RM = rm -rf

HDR = ScalarConverter.hpp \

SRC = ScalarConverter.cpp typecheckers.cpp main.cpp \

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
