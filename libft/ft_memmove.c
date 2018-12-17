/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averemiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/23 13:31:12 by averemiy          #+#    #+#             */
/*   Updated: 2018/04/05 14:58:45 by averemiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *d, const void *s, size_t l)
{
	unsigned char	*d1;
	unsigned char	*s1;

	d1 = (unsigned char *)d;
	s1 = (unsigned char *)s;
	if (s1 > d1)
		while (l-- > 0)
			*d1++ = *s1++;
	else
	{
		s1 = s1 + l - 1;
		d1 = d1 + l - 1;
		while (l-- > 0)
			*d1-- = *s1--;
	}
	return (d);
}
