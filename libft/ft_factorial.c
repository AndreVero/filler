/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_factorial.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averemiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 15:11:29 by averemiy          #+#    #+#             */
/*   Updated: 2018/04/05 15:13:28 by averemiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_factorial(int nb)
{
	int res;

	if (nb > 12)
		return (0);
	res = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		res = res * nb;
		nb--;
	}
	return (res);
}
