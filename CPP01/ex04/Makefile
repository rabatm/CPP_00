#info of application
NAME 		= sed_is_for_losers
SRCSDIR 	= .
OBJDIR 		= objs
INCLUDES 	= .

SRCFILES	=  main.cpp error.cpp readFile.cpp
OBJS        = $(addprefix $(OBJDIR)/, $(SRCFILES:.cpp=.o))

CC			= c++
#//CFLAGS		= -Wall -Wextra -Werror -std=c++98
CFLAGS		= -std=c++98

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