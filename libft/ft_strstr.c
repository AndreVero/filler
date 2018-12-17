/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averemiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/22 16:00:24 by averemiy          #+#    #+#             */
/*   Updated: 2018/04/05 15:26:31 by averemiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strstr(const char *s1, const char *s2)
{
	const char *p;
	const char *res;
	const char *s1t;

	if (ft_strlen((char *)s2) == 0)
		return ((char *)s1);
	while (*s1 != '\0')
	{
		p = s2;
		res = s1;
		s1t = s1;
		while (*p == *s1t)
		{
			if (*(p + 1) == '\0')
				return ((char *)res);
			p++;
			s1t++;
		}
		s1++;
	}
	return (NULL);
}
