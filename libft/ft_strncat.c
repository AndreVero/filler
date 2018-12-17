/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averemiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/21 17:59:56 by averemiy          #+#    #+#             */
/*   Updated: 2018/03/22 13:08:27 by averemiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strncat(char *str1, const char *str2, size_t n)
{
	char	*p;
	int		j;

	p = str1;
	j = ft_strlen(str1);
	while (*str2 && n > 0)
	{
		str1[j] = *str2;
		j++;
		str2++;
		n--;
	}
	str1[j] = '\0';
	return (p);
}
