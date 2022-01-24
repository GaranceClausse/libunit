#include "libunit.h"

t_list	*init_category(char *name, t_list **test_list)
{
	t_category	*category;

	category = malloc(sizeof(t_category));
	if (!category)
		return (NULL);
	category->name = name;
	category->test_list = test_list;
	return (ft_lstnew(category));
}

void	free_category(void *category_void)
{
	t_category	*category;

	category = category_void;
	ft_lstclear(category->test_list, free);
	free(category->test_list);
	free(category);
}

t_list	**add_category(t_list **category_list, char *name, t_list **test_list)
{
	t_list	*category;

	if (!category_list)
		return (NULL);
	category = init_category(name, test_list);
	if (!category || !test_list)
	{
		ft_lstclear(category_list, free_category);
		return (NULL);
	}
	ft_lstadd_back(category_list, category);
	return (category_list);
}

void	print_category(t_category *category)
{
	ft_putstr(BOLD);
	ft_putstr(category->name);
	ft_putstr("\n");
	ft_putstr(COLOR_RESET);
}
