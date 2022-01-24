#ifndef LIBUNIT_H
# define LIBUNIT_H

# include "libft.h"

# define COLOR_RED     "\x1b[31m"
# define COLOR_GREEN   "\x1b[32m"
# define COLOR_YELLOW  "\x1b[33m"
# define COLOR_BLUE    "\x1b[34m"
# define COLOR_RESET   "\x1b[0m"
# define BOLD "\e[1;37m"

# define TIMEOUT 2

typedef struct s_test
{
	char	*name;
	int		(*func)(void);
	int		result;
}	t_test;

t_list	*init_test(char *name, int (*func)(void));
t_list	**add_test(t_list **test_list, char *name, int (*func)(void));

typedef struct s_category
{
	char				*name;
	t_list				**test_list;
}	t_category;

t_list	*init_category(char *name, t_list **test_list);
void	free_category(void *category);
t_list	**add_category(t_list **category_list, char *name, t_list **test_list);
void	print_category(t_category *t_category);

void	super_launcher(t_list *category_list);
int		timeout(void);

t_list	*get_test_list(char *folder_name);
t_list	*get_category_list(char *folder_name);

#endif