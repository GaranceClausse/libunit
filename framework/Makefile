NAME = libunit.a
CC = gcc
CPPFLAGS = -I. -Ilibft
CFLAGS = -Wall -Wextra -Werror
OBJS = $(addprefix libft/, lst.o ft_putstr.o ft_strlen.o ft_strjoin.o) \
	category.o libunit.o test_list.o

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) rc $@ $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re