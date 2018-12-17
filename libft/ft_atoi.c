/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averemiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/21 18:46:18 by averemiy          #+#    #+#             */
/*   Updated: 2018/04/02 19:03:21 by averemiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int			getlong(long long int a)
{
	int i;

	i = 0;
	while (a > 0)
	{
		a /= 10;
		i++;
	}
	if ((i + 1) >= 19)
		return (1);
	return (0);
}

int					ft_atoi(const char *st)
{
	long long int	k;
	long long int	res;

	k = 1;
	res = 0;
	while (*st == 32 || *st == 10 || *st == 9 || *st == 12 || *st == 11 ||
			*st == 13)
		st++;
	if (*st == '+' || *st == '-')
	{
		if (*st == '-')
			k = -1;
		st++;
	}
	while (*st >= '0' && *st <= '9')
	{
		if (getlong(res) && k > 0)
			return (-1);
		if (getlong(res) && k < 0)
			return (0);
		res = (res * 10) + (long long int)(*st - '0');
		st++;
	}
	return (res * k);
}
