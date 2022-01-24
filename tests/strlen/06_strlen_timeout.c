#include "ft_strlen.h"

int	strlen_timeout(void)
{
	char	*str;

	str = "Test";
	if (ft_strlen_timeout(str))
		return (0);
	return (-1);
}
