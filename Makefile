FLAG = -Wall -Werror -Wextra
NAME = libft.a
SRC = ft_strlen.c  \
	  ft_isalnum.c \
	  ft_isalpha.c \
	  ft_isascii.c \
	  ft_isdigit.c \
	  ft_isprint.c \
	  ft_toupper.c \
	  ft_tolower.c \
	  ft_bzero.c \
	  ft_strchr.c \
	  ft_strrchr.c \
	  ft_strncmp.c \
	  ft_strlcpy.c \
	  ft_strlcat.c \
	  ft_memcpy.c \
	  ft_memmove.c \
	  ft_memchr.c \
	  ft_memcmp.c \
	  ft_memset.c \
	  ft_atoi.c \
	  ft_strnstr.c \
	  ft_strdup.c \
	  ft_calloc.c \
	  ft_putchar_fd.c \
	  ft_putstr_fd.c \
	  ft_putendl_fd.c \
	  ft_putnbr_fd.c \
	  ft_striteri.c

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
