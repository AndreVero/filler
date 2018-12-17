/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averemiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/23 17:01:10 by averemiy          #+#    #+#             */
/*   Updated: 2018/04/02 18:52:08 by averemiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*p;
	char			*res;
	int				i;

	i = 0;
	if (s == NULL)
		return (NULL);
	res = ft_strnew(len);
	if (res == NULL)
		return (NULL);
	p = res;
	while (i < (int)len)
	{
		*p = s[start];
		start++;
		p++;
		i++;
	}
	*p = '\0';
	return (res);
}
