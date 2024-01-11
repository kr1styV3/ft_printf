NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRC = ft_printf.c ft_printf_str.c ft_printf_binary.c ft_printf_nbr.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	@ar rcs $@ $(OBJ)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all