/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averemiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/22 14:14:20 by averemiy          #+#    #+#             */
/*   Updated: 2018/04/02 19:13:45 by averemiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strchr(const char *s, int c)
{
	int		len;
	int		i;
	char	*p;

	p = (char *)s;
	len = ft_strlen((char *)s);
	i = 0;
	while (i <= len)
	{
		if (p[i] == (char)c)
			return ((char *)s);
		i++;
		s++;
	}
	return (NULL);
}
