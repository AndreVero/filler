/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averemiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/22 16:43:28 by averemiy          #+#    #+#             */
/*   Updated: 2018/03/28 12:27:43 by averemiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strnstr(const char *s1, const char *s2, size_t l)
{
	const char	*p1;
	const char	*p2;
	const char	*tmp;
	int			i;
	int			j;

	i = 0;
	j = 0;
	if (ft_strlen((char *)s2) == 0)
		return ((char *)s1);
	while (*s1 && i < (int)l)
	{
		tmp = s1;
		p2 = s2;
		p1 = s1;
		j = i++;
		while (*p2++ == *tmp++ && j < (int)l)
		{
			if (*p2 == '\0')
				return ((char *)p1);
			j++;
		}
		s1++;
	}
	return (NULL);
}
