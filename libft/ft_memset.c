/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averemiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 16:13:14 by averemiy          #+#    #+#             */
/*   Updated: 2018/03/26 18:08:31 by averemiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void				*ft_memset(void *arr, int smth, size_t l)
{
	unsigned char	*p;
	unsigned char	c1;

	p = (unsigned char *)arr;
	c1 = smth;
	while (l > 0)
	{
		*p = c1;
		p++;
		l--;
	}
	return (arr);
}
