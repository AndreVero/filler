/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averemiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/24 12:57:19 by averemiy          #+#    #+#             */
/*   Updated: 2018/04/02 19:08:13 by averemiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *str, size_t l)
{
	int		lenght2;
	char	*str1;
	int		lenght1;
	int		i;
	int		j;

	i = 0;
	str1 = (char *)str;
	lenght1 = ft_strlen(dst);
	j = lenght1;
	lenght2 = ft_strlen((char *)str);
	while (*str && i < (int)l - lenght1 - 1)
	{
		dst[j] = *str;
		str++;
		i++;
		j++;
	}
	dst[j] = '\0';
	if (((int)l - lenght1 - 1) < 0)
		return (l + lenght2);
	return (lenght1 + lenght2);
}
