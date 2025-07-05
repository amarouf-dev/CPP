NAME = Animal
CPP = c++
Cflags = -Wall -Wextra -Werror -std=c++98
RM = rm -rf

HDR = Animal.hpp  Cat.hpp  Dog.hpp Brain.hpp \

SRC = Animal.cpp  Cat.cpp  Dog.cpp  main.cpp Brain.cpp\

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
