/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averemiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/24 13:27:25 by averemiy          #+#    #+#             */
/*   Updated: 2018/03/26 17:17:13 by averemiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *smth;

	smth = (void *)malloc(size);
	if (smth == NULL)
		return (NULL);
	ft_bzero(smth, size);
	if (smth)
		return (smth);
	return (NULL);
}
