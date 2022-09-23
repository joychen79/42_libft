FLAG = -Wall -Werror -Wextra
NAME = libft.a
SRC = ft_isalnum.c \
	  ft_strrchr.c \
	  ft_isascii.c \
	  ft_memmove.c \
	  ft_isalpha.c \
	  ft_isdigit.c \
	  ft_isascii.c \
	  ft_isprint.c \
	  ft_strlen.c \
	  ft_memset.c \
	  ft_bzero.c \
	  ft_memcpy.c \
	  ft_toupper.c \
	  ft_tolower.c \
	  ft_strchr.c \
	  ft_strncmp.c \
	  ft_memchr.c \
	  ft_memcmp.c \
	  ft_ atoi.c \
	  ft_strlcpy.c \
	  ft_strlcat.c 
OBJ = $(SRC:.c=.o)
%.o: %.c
	@gcc $(FLAG) -c $< -o $@
all: $(SRC) $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@echo "$(NAME) created"
clean:
	@rm -f $(OBJ)
fclean: clean
	@rm -f $(NAME)
re: fclean all
so:
	@gcc -nostartfiles -c -fPIC $(FLAG) $(SRC)
	@gcc -nostartfiles -shared -o libft.so $(OBJ)
.PHONY: all, clean, fclean, re
