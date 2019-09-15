/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lemin.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksefeane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 13:42:25 by ksefeane          #+#    #+#             */
/*   Updated: 2019/09/15 13:55:15 by ksefeane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LEMIN_H
# define LEMIN_H

# include "../libft/libft.h"

typedef struct	s_lnk
{
	void			*con;
	struct s_lnk	*prev;
	struct s_lnk	*next;
}				t_lnk;

t_lnk			*ft_lnknew(char *s);
void			ft_lnkadd(t_lnk **list, t_lnk *node);
void			ft_lnkaddl(t_lnk **list, t_lnk *node);

#endif
