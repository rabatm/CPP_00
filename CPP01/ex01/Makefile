#info of application
NAME 		= Zombie
SRCSDIR 	= .
OBJDIR 		= objs
INCLUDES 	= .

SRCFILES	= ZombieHorde.cpp Zombie.cpp  main.cpp
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