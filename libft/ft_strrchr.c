/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averemiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/22 15:09:59 by averemiy          #+#    #+#             */
/*   Updated: 2018/03/22 18:59:09 by averemiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *s, int sm)
{
	char	*p;
	int		i;
	int		l;
	char	*res;

	i = 0;
	p = (char *)s;
	l = ft_strlen((char *)s);
	res = NULL;
	while (i <= l)
	{
		if (s[i] == (char)sm)
			res = p;
		p++;
		i++;
	}
	return (res);
}
