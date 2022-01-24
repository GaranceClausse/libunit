#include <stdlib.h>
#include "ft_strlen.h"

int	strlen_segv(void)
{
	if (ft_strlen_segv(NULL) == -1)
		return (0);
	else
		return (-1);
}
