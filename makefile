NAME = lib/libft.a
TEST = testing/test
MAKEFLAGS += --no-print-directory

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC = $(wildcard src/*.c)
OBJ = $(SRC:src/%.c=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	@mkdir -p lib
	@ar rcs $(NAME) $(OBJ)
	@rm -f $(OBJ)

%.o: src/%.c
	@$(CC) $(CFLAGS) -Iinclude -c $< -o $@

fclean:
	@rm -f $(NAME)
	@rm -rf lib
	@rm -f $(TEST)

trun:
	@make -C ./testing
	@./$(TEST)

re: fclean tclean all
