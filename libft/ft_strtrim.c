/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averemiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/24 13:43:37 by averemiy          #+#    #+#             */
/*   Updated: 2018/03/28 13:31:47 by averemiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*mems(char *p, int i, int l)
{
	int		j;
	char	*res;

	j = 0;
	res = ft_strnew(l - i + 1);
	if (res == NULL)
		return (NULL);
	while (i <= l)
	{
		res[j] = p[i];
		i++;
		j++;
	}
	res[j] = '\0';
	return (res);
}

char		*ft_strtrim(char const *s)
{
	char	*res;
	int		i;
	char	*s1;
	int		l;

	if (s == NULL)
		return (NULL);
	s1 = (char *)s;
	l = ft_strlen(s1) - 1;
	i = 0;
	while ((s1[i] == ' ' || s1[i] == '\n' || s1[i] == '\t') && s1[i] != '\0')
		i++;
	while ((s1[l] == ' ' || s1[l] == '\n' || s1[l] == '\t') && l >= 0)
		l--;
	if ((l - i) < 0)
	{
		res = ft_strnew(1);
		*res = '\0';
	}
	else
		res = mems(s1, i, l);
	return (res);
}
