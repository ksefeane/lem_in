
#include "../inc/lem_in.h"

void	ft_lnkdel(t_lnk **node)
{
	t_lnk	*a;

	a = *node;
	*node = (*node)->next;
	free(a->con);
	free(a);
}

void	ft_lnkdell(t_lnk **node)
{
	t_lnk	*a;

	a = *node;
	while (a->next->next)
		a = a->next;
	free(a->next->con);
	free(a->next);
	a->next = NULL;
}
