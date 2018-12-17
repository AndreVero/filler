/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averemiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/25 15:19:28 by averemiy          #+#    #+#             */
/*   Updated: 2018/04/05 15:26:57 by averemiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *l1, t_list *(*f)(t_list *elem))
{
	t_list *res;
	t_list *tmp;

	if (f != NULL)
	{
		if (l1 != NULL)
			res = f(l1);
		else
			return (NULL);
		l1 = l1->next;
		tmp = res;
		while (l1 != NULL)
		{
			tmp->next = f(l1);
			l1 = l1->next;
			tmp = tmp->next;
		}
		return (res);
	}
	return (NULL);
}
