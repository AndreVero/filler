/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averemiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/23 12:20:43 by averemiy          #+#    #+#             */
/*   Updated: 2018/03/27 15:33:05 by averemiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void					*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*d;
	unsigned char		*s;
	unsigned char		c1;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	c1 = c;
	while (n)
	{
		if (*s == c1)
		{
			*d = *s;
			d++;
			return (d);
		}
		*d = *s;
		s++;
		d++;
		n--;
	}
	return (NULL);
}
