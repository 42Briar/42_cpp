NAME 	= zombiehorde
CC 		= c++
FLAGS 	= -Wall -Wextra -Werror -std=c++98
SRC 	= main.cpp Zombie.cpp ZombieHorde.cpp
all: $(NAME)

$(NAME): 
	@$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
	@rm -f $(NAME)

re: clean all

.PHONE: clean, re
