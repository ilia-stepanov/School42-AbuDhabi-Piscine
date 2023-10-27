# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: istepano <istepano@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/28 16:03:13 by istepano          #+#    #+#              #
#    Updated: 2023/07/28 17:04:33 by istepano         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc -Wall -Wextra -Werror

SRC_DIR = srcs
INC_DIR = includes
BIN_DIR = .

SRCS = $(wildcard $(SRC_DIR)/*.c)
OBJS = $(SRCS:$(SRC_DIR)/%.c=$(SRC_DIR)/%.o)

PROGRAM = $(BIN_DIR)/do-op

all: $(PROGRAM)

$(PROGRAM): $(OBJS)
	@$(CC) -o $@ $^

$(SRC_DIR)/%.o: $(SRC_DIR)/%.c
	@$(CC) -I$(INC_DIR) -c $< -o $@

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(PROGRAM)

re: fclean all

.PHONY: all clean fclean re