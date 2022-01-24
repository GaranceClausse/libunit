#include "libunit.h"
#include "strlen.h"

t_list	**strlen_launcher(void)
{	
	t_list	**test_list;

	test_list = malloc(sizeof(t_list *));
	*test_list = NULL;
	add_test(test_list, "Test ko", strlen_ko);
	add_test(test_list, "Test ok", strlen_ok);
	add_test(test_list, "Test segv", strlen_segv);
	add_test(test_list, "Test buse", strlen_buse);
	add_test(test_list, "Test leaks", strlen_leaks);
	add_test(test_list, "Test timeout", strlen_timeout);
	return (test_list);
}
