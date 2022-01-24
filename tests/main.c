#include "strlen.h"
#include "ft_strlen.h"

#include "libunit.h"

int	main(void)
{
	t_list	*category_list;

	category_list = NULL;
	add_category(&category_list, "FT_STRLEN", strlen_launcher());
	super_launcher(category_list);
	ft_lstclear(&category_list, free_category);
}
