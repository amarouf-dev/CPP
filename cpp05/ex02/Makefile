
NAME =  Form
CPP = c++
Cflags = -Wall -Wextra -Werror -std=c++98
RM = rm -rf

HDR = Bureaucrat.hpp AForm.hpp PresidentialPardonForm.hpp RobotomyRequestForm.hpp ShrubberyCreationForm.hpp \

SRC = main.cpp Bureaucrat.cpp AForm.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp\

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
