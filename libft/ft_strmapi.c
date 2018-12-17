/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averemiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/23 16:36:43 by averemiy          #+#    #+#             */
/*   Updated: 2018/03/28 13:26:19 by averemiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*res;
	int		i;
	int		j;
	char	*p;

	if (s == NULL || f == NULL)
		return (NULL);
	i = 0;
	j = ft_strlen((char *)s);
	res = (char *)malloc(sizeof(char) * j + 1);
	if (res == NULL)
		return (NULL);
	p = res;
	while (i < j)
	{
		*p = f(i, s[i]);
		p++;
		i++;
	}
	*p = '\0';
	return (res);
}
