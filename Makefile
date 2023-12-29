NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRC = ft_printf.c ft_printf_str.c ft_printf_binary.c ft_printf_nbr.c

OBJ = $(SRC:.c=.o)
RED = \033[0;31m
PINK_FLUO=\033[38;5;201m
GOLD=\033[38;5;220m
NC = \033[0m

all: $(NAME)

%.o: %.c
	@echo "$(RED)Compiling the program : $(PINK_FLUO)$<"
	@$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	@echo "$(PINK_FLUO)Creating archive $(NAME)..."
	@ar rcs $@ $(OBJ)

clean:
	@echo "$(GOLD)Cleaning object files..."
	@rm -f $(OBJ)

fclean: clean
	@echo "$(GOLD)Full clean (including $(NAME))..."
	@rm -f $(NAME)

re: fclean all

