/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averemiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/23 14:06:37 by averemiy          #+#    #+#             */
/*   Updated: 2018/03/27 14:36:02 by averemiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s1;
	int				j;
	unsigned char	c1;

	c1 = c;
	j = 0;
	s1 = (unsigned char *)s;
	while (n)
	{
		if (s1[j] == c1)
			return (s1 + j);
		j++;
		n--;
	}
	return (NULL);
}
