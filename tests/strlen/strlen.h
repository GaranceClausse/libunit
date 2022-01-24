#ifndef STRLEN_H
# define STRLEN_H

# include "libunit.h"

t_list	**strlen_launcher(void);
int		strlen_ok(void);
int		strlen_ko(void);
int		strlen_segv(void);
int		strlen_buse(void);
int		strlen_timeout(void);
int		strlen_leaks(void);

#endif
