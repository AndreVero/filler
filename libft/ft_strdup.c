/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averemiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/19 18:19:23 by averemiy          #+#    #+#             */
/*   Updated: 2018/04/02 19:11:42 by averemiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char		*ft_strdup(char *src)
{
	char	*p;
	char	*res;
	int		i;

	i = 0;
	res = NULL;
	while (src[i] != '\0')
		i++;
	res = (char *)malloc(sizeof(char) * (i + 1));
	if (res == NULL)
		return (NULL);
	p = res;
	while (*src)
	{
		*p = *src;
		src++;
		p++;
	}
	*p = '\0';
	return (res);
}
