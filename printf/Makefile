NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -rf
SRC = ft_printf.c ft_print_char.c ft_print_hex.c ft_print_ptr.c \
      ft_print_string.c ft_print_unsigned.c ft_print_number.c

OBJECTS = $(SRC:.c=.o)
HEADER = libftprintf.h

all: $(NAME)

$(NAME): $(OBJECTS)
	$(AR) $(NAME) $(OBJECTS)
	
%.o: %.c $(HEADER) Makefile
	$(CC) $(CFLAGS) -c $< -o $@

clean : 
	$(RM) $(OBJECTS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
