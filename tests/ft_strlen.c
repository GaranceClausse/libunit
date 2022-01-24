#include <stdlib.h>
#include <signal.h>

int	ft_strlen_ok(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_strlen_ko(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i + 1);
}

int	ft_strlen_segv(char *str)
{
	int	i;

	i = -1;
	str[i] = 12;
	return (i);
}

int	ft_strlen_buse(char *str)
{
	int	i;

	i = 0;
	raise(SIGBUS);
	return (str[i]);
}

int	ft_strlen_timeout(char *str)
{
	int	i;

	(void)str;
	i = 1;
	while (i)
		i++;
	return (i);
}

int	ft_strlen_leaks(char *str)
{
	int		i;
	char	*s2;

	i = 0;
	while (str[i])
		i++;
	s2 = malloc(sizeof(char) * i);
	s2 = NULL;
	return (i);
}
