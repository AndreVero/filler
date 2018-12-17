/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averemiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/25 14:53:52 by averemiy          #+#    #+#             */
/*   Updated: 2018/04/02 18:38:02 by averemiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **a, void (*d)(void *, size_t))
{
	t_list *t;
	t_list *p;

	if (a && d)
	{
		t = *a;
		p = NULL;
		while (t != NULL)
		{
			p = (*t).next;
			ft_lstdelone(&t, d);
			t = p;
		}
		*a = NULL;
	}
}
