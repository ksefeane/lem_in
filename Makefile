
NAME = lem_in

SRC = src/*

LIB = libft/libft.a

BUILD = gcc -Wall -Werror -Wextra -o

all: $(NAME)

$(NAME): $(LIB)
	@$(BUILD) $(NAME) $(SRC) $(LIB)
	@echo "$(NAME) created"

$(LIB):
	@make -C libft

clean:
	@rm -rf $(NAME)
	@echo "$(NAME) deleted"

fclean: clean
	@make fclean -C libft

re: clean all

.PHONY: clean fclean re all
