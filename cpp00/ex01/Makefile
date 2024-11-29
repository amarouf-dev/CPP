NAME = PhoneBook
CPP = c++
Cflags = -Wall -Wextra -Werror -std=c++98
RM = rm -rf

SRC = PhoneBook.cpp Contact.cpp \

OSRC = $(SRC:.cpp=.o)

		
all:$(NAME)

$(NAME): $(OSRC)
	$(CPP) $(Cflags) $(OSRC) -o $(NAME)


clean:
	$(RM) $(OSRC)

fclean:
	$(RM) $(OSRC) $(NAME)

re: fclean all
