# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ksefeane <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/15 13:34:21 by ksefeane          #+#    #+#              #
#    Updated: 2019/09/15 14:17:36 by ksefeane         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LEMIN = lem_in

SRC = src/*

BUILD = gcc -Wall -Werror -Wextra -o

LIB = libft/libft.a

all: $(LEMIN)

$(LEMIN): $(LIB)
	@$(BUILD) $(LEMIN) $(SRC) $(LIB)
	@echo "$(LEMIN) created"

$(LIB):
	@make -C libft

clean:
	@rm -rf $(LEMIN)
	@echo "$(LEMIN) deleted"

fclean: clean
	@make fclean -C libft

re: clean all

RE: fclean all

run:
	@./$(LEMIN)

.PHONY: clean fclean all re RE


