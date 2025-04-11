NAME = Zombie
CPP = c++
Cflags = -Wall -Wextra -Werror -std=c++98
RM = rm -rf

SRC = main.cpp Zombie.cpp zombieHorde.cpp \

OSRC = $(SRC:.cpp=.o)

all:$(NAME)

$(NAME): $(OSRC) Zombie.hpp
	$(CPP) $(OSRC) -o $(NAME)

%.o:%.cpp
	$(CPP) $(Cflags) -c $< -o $@

clean:
	$(RM) $(OSRC)

fclean:
	$(RM) $(OSRC) $(NAME)

re: fclean all
