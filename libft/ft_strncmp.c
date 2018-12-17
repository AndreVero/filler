/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averemiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/22 17:22:31 by averemiy          #+#    #+#             */
/*   Updated: 2018/04/05 15:01:10 by averemiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int					ft_strncmp(const char *s1, const char *s2, size_t l)
{
	unsigned char	*p1;
	unsigned char	*p2;
	size_t			i;

	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	i = 0;
	while ((p1[i] != '\0' || p2[i] != '\0') && i < l)
	{
		if (p1[i] > p2[i])
			return (p1[i] - p2[i]);
		if (p2[i] > p1[i])
			return (-(p2[i] - p1[i]));
		i++;
	}
	return (0);
}
