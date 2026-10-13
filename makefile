NAME = lib/libft.a
TEST = testing/test
MAKEFLAGS += --no-print-directory

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC = $(wildcard src/*.c)
OBJ = $(SRC:src/%.c=src/%.o)

all: $(NAME)

$(NAME): $(OBJ)
	@mkdir -p lib
	@ar rcs $(NAME) $(OBJ)

src/%.o: src/%.c
	@$(CC) $(CFLAGS) -Iinclude -c $< -o $@

clean :
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)
	@rm -rf lib

re: fclean all

