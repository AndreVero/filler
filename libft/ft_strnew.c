/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averemiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/23 14:57:30 by averemiy          #+#    #+#             */
/*   Updated: 2018/03/27 15:34:04 by averemiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnew(size_t size)
{
	char	*p;

	p = (char *)malloc(size + 1);
	if (p == NULL)
		return (NULL);
	ft_bzero(p, size + 1);
	return (p);
}
