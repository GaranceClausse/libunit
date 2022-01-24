#include <stdlib.h>
#include "ft_strlen.h"

int	strlen_leaks(void)
{
	char	*str;

	str = malloc(sizeof(char) * 5);
	str = "Test";
	if (ft_strlen_leaks(str))
		return (0);
	return (-1);
}
