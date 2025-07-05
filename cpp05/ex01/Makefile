NAME =  Form
CPP = c++
Cflags = -Wall -Wextra -Werror -std=c++98
RM = rm -rf

HDR = Bureaucrat.hpp Form.hpp\

SRC = main.cpp Bureaucrat.cpp Form.cpp \

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
