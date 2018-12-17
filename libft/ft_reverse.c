/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averemiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 20:19:32 by averemiy          #+#    #+#             */
/*   Updated: 2018/04/02 20:42:58 by averemiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_reverse(char *s)
{
	int		size;
	char	*res;
	char	*res2;

	if (s == NULL)
		return (NULL);
	size = ft_strlen(s);
	res = (char *)malloc(sizeof(char) * (size + 1));
	if (!(res))
		return (NULL);
	res2 = res;
	while (size - 1 >= 0)
	{
		*res2 = s[size - 1];
		size--;
		res2++;
	}
	*res2 = '\0';
	return (res);
}
