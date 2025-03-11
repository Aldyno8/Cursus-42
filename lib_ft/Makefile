NAME = libft

FLAGS = -Wall -Wextra -Werror

NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)

AR = ar rcs
RM = rm -f

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all