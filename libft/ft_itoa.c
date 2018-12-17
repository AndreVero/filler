/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averemiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/24 14:44:40 by averemiy          #+#    #+#             */
/*   Updated: 2018/03/28 12:55:40 by averemiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int			sch(int n)
{
	int				i;

	i = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

static	void		smth(char *s, int n, int l)
{
	int				res;
	int				del;
	int				n1;

	res = 0;
	while (l > 0)
	{
		del = l - 1;
		n1 = n;
		res = n1;
		while (del > 0)
		{
			res = n1 / 10;
			n1 = n1 / 10;
			del--;
		}
		res = res % 10;
		*s = res + '0';
		l--;
		s++;
	}
	*s = '\0';
}

static	char		*memus(int i, int n)
{
	char			*res;
	int				size;
	char			*p;

	if (i > 1)
	{
		size = sch(-1 * n);
		res = ft_strnew(size + 1);
		if (res == NULL)
			return (NULL);
		p = res;
		*res = '-';
		res++;
		smth(res, (-1 * n), size);
	}
	else
	{
		size = sch(n);
		res = ft_strnew(size);
		if (res == NULL)
			return (NULL);
		p = res;
		smth(res, n, size);
	}
	return (p);
}

char				*ft_itoa(int n)
{
	char			*res;
	char			*p;

	res = NULL;
	if (n == -2147483648)
	{
		res = (char *)malloc(sizeof(char) * (sch(-1 * n) + 2));
		if (res == NULL)
			return (NULL);
		p = res;
		*p = '-';
		p++;
		*p = '2';
		p++;
		smth(p, 147483648, sch(147483648));
	}
	else if (n < 0)
		res = memus(2, n);
	else
		res = memus(1, n);
	return (res);
}
