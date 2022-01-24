#include "ft_strlen.h"

int	strlen_ok(void)
{
	char	*str;

	str = "Test";
	if (ft_strlen_ok(str) == 4)
		return (0);
	else
		return (-1);
}
