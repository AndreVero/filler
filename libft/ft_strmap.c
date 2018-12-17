/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averemiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/23 16:06:50 by averemiy          #+#    #+#             */
/*   Updated: 2018/03/28 13:22:53 by averemiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmap(char const *s, char (*f)(char))
{
	char	*res;
	int		i;
	int		j;
	char	*p;

	if (s == NULL || f == NULL)
		return (NULL);
	j = (int)ft_strlen((char *)s);
	i = 0;
	res = (char *)malloc(sizeof(char) * (j + 1));
	if (res == NULL)
		return (NULL);
	p = res;
	while (i < j)
	{
		*res = f(*s);
		i++;
		s++;
		res++;
	}
	*res = '\0';
	return (p);
}
