NAME = DiamondTrap
CPP = c++
Cflags = -Wall -Wextra -Werror -std=c++98
RM = rm -rf

SRC = ClapTrap.cpp main.cpp  ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp \

OSRC = $(SRC:.cpp=.o)

all:$(NAME)

$(NAME): $(OSRC) ClapTrap.hpp  ScavTrap.hpp FragTrap.hpp DiamondTrap.hpp
		$(CPP) $(OSRC) -o $(NAME)

%.o:%.cpp
		$(CPP) $(Cflags) -c $< -o $@

clean:
		$(RM) $(OSRC)

fclean:
		$(RM) $(OSRC) $(NAME)

re: fclean all

.PHONY: all fclean clean re
