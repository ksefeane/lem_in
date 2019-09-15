/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lnknew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksefeane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 13:53:39 by ksefeane          #+#    #+#             */
/*   Updated: 2019/09/15 14:14:49 by ksefeane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/lemin.h"

t_lnk	*ft_lnknew(char *s)
{
	t_lnk	*a;

	a = (t_lnk *)malloc(sizeof(t_lnk));
	a->con = ft_strdup(s);
	a->next = NULL;
	a->prev = NULL;
	return (a);
}

void	ft_lnkadd(t_lnk **list, t_lnk *node)
{
	node->next = *list;
	*list = node;
}

void	ft_lnkaddl(t_lnk **list, t_lnk *node)
{
	t_lnk	*a;

	a = *list;
	while (a->next)
		a = a->next;
	a->next = node;
	node->prev = a;
}
