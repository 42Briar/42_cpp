NAME 	= execute01
CC 		= c++
FLAGS 	= -Wall -Wextra -Werror -std=c++98
SRC 	= $(wildcard *.cpp)
OBJDIR  = obj
OBJ     = $(addprefix $(OBJDIR)/, ${SRC:.cpp=.o})

all: $(OBJDIR) $(NAME)

$(OBJDIR):
	mkdir $(OBJDIR)

$(OBJDIR)/%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(FLAGS) -o $@ $^ 

clean:
	@rm -f $(NAME) $(wildcard *.o)
	@rm -rf $(OBJDIR) 

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all, clean, re, fclean