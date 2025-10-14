NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar -rv
RM = rm -rf
SRC = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c \
      ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
      ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c \
      ft_memset.c ft_split.c ft_strchr.c ft_strdup.c \
      ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c \
      ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c \
      ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c
OBJECTS = $(SRC:.c=.o)
HEADER = .

all: $(NAME)

$(NAME): $(OBJECTS)
	$(AR) $(NAME) $(OBJECTS)
	ranlib $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@ -I $(HEADER)

clean : 
	$(RM) $(OBJECTS)

fclean:
	$(RM) $(NAME)

.PHONY: all clean fclean re

re: fclean all
