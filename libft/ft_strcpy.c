/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averemiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/21 15:04:49 by averemiy          #+#    #+#             */
/*   Updated: 2018/04/02 19:12:10 by averemiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strcpy(char *res, const char *from)
{
	char *p;

	p = res;
	while (*from)
	{
		*p = *from;
		p++;
		from++;
	}
	*p = '\0';
	return (res);
}
