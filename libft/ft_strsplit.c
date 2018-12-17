/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averemiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/24 16:52:47 by averemiy          #+#    #+#             */
/*   Updated: 2018/03/28 13:31:20 by averemiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int			counter(const char *str, int i, char c)
{
	int				j;

	j = 0;
	while (str[i] != c && str[i] != '\0')
	{
		i++;
		j++;
	}
	return (j);
}

static	void		maker(char **res, char c, const char *s)
{
	int				i;
	int				j;
	int				k;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			k = 0;
			res[j] = (char *)malloc(sizeof(char) * (counter(s, i, c) + 1));
			while (s[i] != c && s[i] != '\0')
			{
				res[j][k] = s[i];
				i++;
				k++;
			}
			i--;
			res[j][k] = '\0';
			j++;
		}
		i++;
	}
}

static	int			countword(char *p, char c)
{
	int				res;

	res = 0;
	while (*p)
	{
		if (*p != c)
		{
			while (*p != c && *p != '\0')
				p++;
			res++;
			p--;
		}
		p++;
	}
	return (res);
}

char				**ft_strsplit(char const *s, char c)
{
	int				words;
	char			**res;

	if (s == NULL)
		return (NULL);
	words = countword((char *)s, c);
	res = (char **)malloc(sizeof(char *) * (words + 1));
	if (res == NULL)
		return (NULL);
	maker(res, c, s);
	res[words] = (char *)malloc(sizeof(char) * 1);
	if (res == NULL)
		return (NULL);
	res[words] = NULL;
	return (res);
}
