NAME_FILE = libft.a
SOURCE_PATH = ./srcs
INCLUDE_PATH = ./includes
SRC = $(SOURCE_PATH)/ft_putchar.c \
      $(SOURCE_PATH)/ft_putstr.c \
      $(SOURCE_PATH)/ft_strcmp.c \
      $(SOURCE_PATH)/ft_strlen.c \
      $(SOURCE_PATH)/ft_swap.c

OBJS = $(SRC:.c=.o)

all: $(NAME_FILE)

$(NAME_FILE): $(OBJS)
	ar -rcsv $(NAME_FILE) $(OBJS)

%.o: %.c
	cc -Wall -Wextra -Werror -I$(INCLUDE_PATH) -c $< -o $@
clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME_FILE)

re : fclean all
