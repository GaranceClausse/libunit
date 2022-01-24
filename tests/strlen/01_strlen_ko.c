#include "ft_strlen.h"

int	strlen_ko(void)
{
	char	*str;

	str = "Test";
	if (ft_strlen_ko(str) == 4)
		return (0);
	else
		return (-1);
}
