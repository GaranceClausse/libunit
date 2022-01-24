#include <sys/wait.h>
#include <unistd.h>
#include "libunit.h"

void	print_signal(t_test *test)
{
	if (test->result == SIGSEGV)
		ft_putstr(COLOR_BLUE"[SEGFAULT]\n"COLOR_RESET);
	else if (test->result == SIGBUS)
		ft_putstr(COLOR_BLUE"[BUS ERROR]\n"COLOR_RESET);
	else if (test->result == SIGALRM)
		ft_putstr(COLOR_BLUE"[TIMEOUT]\n"COLOR_RESET);
	else
		ft_putstr(COLOR_BLUE"[SIGNAL]\n"COLOR_RESET);
}

void	print_test_name(t_test *test)
{
	size_t	len;
	int		is_longer;
	char	*spaces;

	len = ft_strlen(test->name);
	is_longer = 0;
	if (len > 20)
	{
		len = 20;
		is_longer = 1;
	}
	ft_putstr("	");
	write(1, test->name, len);
	if (is_longer)
		ft_putstr("...");
	spaces = "                  ";
	write(1, spaces, 24 - len - (3 * is_longer));
}

void	print_result(t_test *test)
{
	print_test_name(test);
	if (test->result == 0)
		ft_putstr(COLOR_GREEN"[OK]\n"COLOR_RESET);
	else if (test->result == 255)
		ft_putstr(COLOR_RED"[KO]\n"COLOR_RESET);
	else
		print_signal(test);
}

void	run_test(t_test *test)
{
	pid_t	pid;
	int		wstatus;

	pid = fork();
	if (pid < 0)
		exit(-1);
	if (pid == 0)
	{
		alarm(TIMEOUT);
		exit(test->func());
	}
	else
	{
		wait(&wstatus);
		if (WIFSIGNALED(wstatus))
		{
			test->result = WTERMSIG(wstatus);
			print_result(test);
		}
		else
		{
			test->result = WEXITSTATUS(wstatus);
			print_result(test);
		}
	}
}

void	super_launcher(t_list *category_list)
{
	t_list	*cur_i;
	t_list	*cur_j;

	cur_i = category_list;
	while (cur_i)
	{
		print_category(cur_i->content);
		cur_j = *((t_category *)cur_i->content)->test_list;
		while (cur_j)
		{
			run_test(cur_j->content);
			cur_j = cur_j->next;
		}
		cur_i = cur_i->next;
	}
}
