NAME 	= phonebook
CC 		= c++
FLAGS 	= -Wall -Wextra -Werror -std=c++98
SRC 	= phonebook.cpp phonebookmain.cpp contacts.cpp
all: $(NAME)

$(NAME): 
	@$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
	@rm -f $(NAME)

re: clean all

.PHONE: clean, re
