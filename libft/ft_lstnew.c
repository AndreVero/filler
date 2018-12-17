/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averemiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/25 14:05:39 by averemiy          #+#    #+#             */
/*   Updated: 2018/04/02 20:54:44 by averemiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list			*t;

	t = (t_list *)malloc(sizeof(t_list));
	if (t == NULL)
		return (NULL);
	if (content == NULL)
	{
		t->content = NULL;
		t->content_size = 0;
		t->next = NULL;
		return (t);
	}
	else
	{
		t->content = (void *)malloc(content_size);
		if (t->content == NULL)
			return (NULL);
		ft_memcpy(t->content, content, content_size);
		t->content_size = content_size;
		t->next = NULL;
		return (t);
	}
}
