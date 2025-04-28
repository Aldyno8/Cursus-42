NAME = libftprintf.a

CC = gcc
FLAGS = -Wall -Wextra -Werror

MANDATORY_FILE = ft_printf.c utils.c

OBJ = $(MANDATORY_FILE:.c=.o)

AR = ar rcs

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
