/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksefeane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 13:40:48 by ksefeane          #+#    #+#             */
/*   Updated: 2019/09/15 14:09:58 by ksefeane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/lemin.h"

int		main(void)
{
	t_lnk	*a;
	t_lnk	*b;

	a = ft_lnknew("tom");
	b = ft_lnknew("jane");
	ft_putendl(a->con);
	ft_lnkaddl(&a, b);
	ft_putendl(a->next->con);
	return (0);
}
