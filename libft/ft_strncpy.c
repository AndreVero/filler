/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averemiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/21 16:11:32 by averemiy          #+#    #+#             */
/*   Updated: 2018/04/02 19:12:38 by averemiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strncpy(char *res, const char *from, int l)
{
	int		i;
	char	*p;

	i = 0;
	p = res;
	while (i < l && (int)ft_strlen((char *)from) >= i)
	{
		p[i] = from[i];
		i++;
	}
	while (i < l)
	{
		p[i] = '\0';
		i++;
	}
	return (res);
}
