
#include "../inc/lem_in.h"

t_lnk	*ft_lnknew(char *s)
{
	t_lnk	*a;

	a = (t_lnk *)malloc(sizeof(t_lnk));
	a->con = ft_strdup(s);
	a->next = NULL;
	return (a);
}

void	ft_lnkadd(t_lnk **node, char *s)
{
	t_lnk	*a;

	a = ft_lnknew(s);
	a->next = *node;
	*node = a;
}

void	ft_lnkaddl(t_lnk **node, char *s)
{
	t_lnk	*a;
	t_lnk	*b;

	a = ft_lnknew(s);
	b = *node;
	while (b->next)
		b = b->next;
	b->next = a;
}
