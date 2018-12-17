/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averemiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/21 13:51:02 by averemiy          #+#    #+#             */
/*   Updated: 2018/03/26 18:09:10 by averemiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void				ft_bzero(void *s, size_t n)
{
	unsigned char	*p;
	int				i;

	i = (int)n;
	p = (unsigned char *)s;
	while (i > 0)
	{
		*p = '\0';
		i--;
		p++;
	}
}
