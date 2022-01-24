NAME = testsuite
LIBUNIT = libunit.a
LIBUNIT_PATH = ../framework
CC = gcc
CPPFLAGS = -I. -Istrlen -I../framework -I../framework/libft
CFLAGS = -Wall -Wextra -Werror
OBJS = ft_strlen.o main.o\
		$(addprefix strlen/, 01_strlen_ko.o \
		02_strlen_ok.o 03_strlen_sgv.o 04_strlen_buse.o \
		05_strlen_leaks.o 06_strlen_timeout.o 00_strlen_launcher.o)

all: $(NAME)

$(LIBUNIT):
	make -C $(LIBUNIT_PATH)

$(NAME): $(LIBUNIT) $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -L. $(LIBUNIT_PATH)/$(LIBUNIT) -o $@

test: $(NAME)
	./$(NAME)

clean:
	$(RM) $(OBJS)
	make clean -C $(LIBUNIT_PATH)

fclean: clean
	$(RM) $(NAME)
	make fclean -C $(LIBUNIT_PATH)

re: fclean all
	

.PHONY: all test clean fclean re