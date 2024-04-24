#info of application
NAME 		= Zombie
SRCSDIR 	= .
OBJDIR 		= objs
INCLUDES 	= .

<<<<<<< HEAD
SRCFILES	= Zombie.cpp main.cpp ZombieHorde.cpp
=======
SRCFILES	= Zombie.cpp ZombieHorde.cpp main.cpp
>>>>>>> 6ab37caa1801f1142bf85d1dd1f96fbf3e5387ee
OBJS        = $(addprefix $(OBJDIR)/, $(SRCFILES:.cpp=.o))

CC			= c++
CFLAGS		= -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

$(OBJDIR)/%.o: $(SRCSDIR)/%.cpp
	mkdir -p $(OBJDIR)
	$(CC) $(CFLAGS) -I $(INCLUDES) -o $@ -c $<

clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re