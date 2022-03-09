NAME 	= megaphone
CC 		= c++
FLAGS 	= -Wall -Wextra -Werror -std=c++98
SRC 	= megaphone.cpp

all: $(NAME)

$(NAME): 
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:

fclean:
	@rm -f $(NAME)
	clean 

re: clean all

.PHONY: clean, re, fclean

