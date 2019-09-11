
#ifndef LEM_IN_H
# define LEM_IN_H

#include "../libft/libft.h"

typedef struct	s_lnk
{
	void		*con;
	struct s_lnk	*next;
}		t_lnk;

typedef struct	s_room
{
	void		*state;
	struct s_room	*next;
}		t_room;

typedef struct	s_tunnel
{
	void		*state;
	t_room		*next;
	t_room		*prev;
}		t_tunnel;

t_lnk	*ft_lnknew(char *s);
void	ft_lnkadd(t_lnk **node, char *s);
void	ft_lnkaddl(t_lnk **node, char *s);
void	ft_lnkdel(t_lnk **node);
void	ft_lnkdell(t_lnk **node);

#endif
