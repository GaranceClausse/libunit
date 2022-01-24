#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

t_list	*ft_lstnew(void *content);
void	ft_lstadd_back(t_list **alst, t_list *new_elm);
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_putstr(char *s);
size_t	ft_strlen(const char *s);
char	*ft_strjoin(const char *s1, const char *s2);

#endif