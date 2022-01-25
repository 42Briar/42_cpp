NAME 	= logs
CC 		= c++
FLAGS 	= -Wall -Wextra -Werror -std=c++98
SRC 	= Account.cpp tests.cpp
all: $(NAME)

$(NAME): 
	@$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
	@rm -f $(NAME)

re: clean all

.PHONE: clean, re
