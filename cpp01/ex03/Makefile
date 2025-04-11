NAME = Zombie
CPP = c++
Cflags = -Wall -Wextra -Werror -std=c++98
RM = rm -rf

SRC = HumanA.cpp  HumanB.cpp  main.cpp  Weapon.cpp \

HDR = HumanA.hpp HumanB.hpp Weapon.hpp \

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
