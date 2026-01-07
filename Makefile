NAME = libft_test 

CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRC = ft_memset.c ft_strlen.c ft_isprint.c ft_isascii.c ft_isalnum.c ft_isdigit.c ft_isalpha.c main.c
OBJ = $(SRC:.c=.o)

HEADER = libft.h

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
