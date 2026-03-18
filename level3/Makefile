NAME = level3
CC = cc
CFLAGS = -Wall -Wextra -Werror -g
SRCS = main.c utils.c parse.c rush_logic.c token.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
