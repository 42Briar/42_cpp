NAME 	= phonebook
CC 		= c++
FLAGS 	= -Wall -Wextra -Werror -std=c++98
SRC 	= phonebook.cpp phonebookmain.cpp contacts.cpp

OBJS	= ${SRC:.cpp=.o}

all: $(NAME)

%.o: %.cpp
	@$(CC) $(CFLAGS) -o $@ -c $<

$(NAME): $(OBJS)
	@$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean:
	@rm -f $(OBJS)

fclean:
	@rm -f $(NAME)
	clean 

re: clean all

.PHONY: clean, re, fclean