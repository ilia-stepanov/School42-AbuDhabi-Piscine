PROGRAM = libft.a

SOURCE = srcs

INCLUDE = includes

SOURCE_FILES = ft_strlen.c ft_strcmp.c ft_putchar.c ft_swap.c ft_putstr.c

OBJECTS = $(SOURCE_FILES:%.c=$(SOURCE)/%.o)

EXECUTOR = cc -Wall -Wextra -Werror

.PHONY: all clean fclean re

all: $(PROGRAM)

$(SOURCE)/%.o: $(SOURCE)/%.c | $(SOURCE)
	$(EXECUTOR) -I$(INCLUDE) -c $< -o $@ -include includes/ft.h

$(PROGRAM): $(OBJECTS)
	ar rcs $@ $(OBJECTS)

clean:
	rm -rf $(OBJECTS)

fclean: clean
	rm -f $(PROGRAM)

re: fclean all