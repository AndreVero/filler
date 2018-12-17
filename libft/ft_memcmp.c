/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averemiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/23 14:32:59 by averemiy          #+#    #+#             */
/*   Updated: 2018/03/28 12:27:25 by averemiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int					ft_memcmp(const void *s1, const void *s2, size_t l)
{
	unsigned char	*p1;
	unsigned char	*p2;
	int				i;

	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	i = 0;
	while (l)
	{
		if (p1[i] > p2[i])
			return (p1[i] - p2[i]);
		if (p2[i] > p1[i])
			return (-1 * (p2[i] - p1[i]));
		i++;
		l--;
	}
	return (0);
}
