#include "libunit.h"

t_list	*init_test(char *name, int (*func)(void))
{
	t_test	*test;

	test = malloc(sizeof(t_test));
	if (!test)
		return (NULL);
	test->name = name;
	test->func = func;
	test->result = 1;
	return (ft_lstnew(test));
}

t_list	**add_test(t_list **testlist, char *name, int (*func)(void))
{
	t_list	*test;

	if (!testlist)
		return (NULL);
	test = init_test(name, func);
	if (!test)
	{
		ft_lstclear(testlist, free);
		return (NULL);
	}
	ft_lstadd_back(testlist, test);
	return (testlist);
}
