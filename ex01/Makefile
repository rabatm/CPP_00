#info of application
NAME 		= PhoneBook
SRCSDIR 	= .
OBJDIR 		= objs
INCLUDES 	= .

SRCFILES	= main.cpp PhoneBook.class.cpp Contact.class.cpp
OBJS        = $(addprefix $(OBJDIR)/, $(SRCFILES:.cpp=.o))

CC			= g++
CFLAGS		= -std=c++98
##-Wall -Wextra -Werror 
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