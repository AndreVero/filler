/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averemiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/21 14:03:07 by averemiy          #+#    #+#             */
/*   Updated: 2018/03/28 12:58:35 by averemiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void				*ft_memcpy(void *s1, const void *s2, size_t l)
{
	unsigned char	*ms1;
	unsigned char	*ms2;

	ms1 = (unsigned char *)s1;
	ms2 = (unsigned char *)s2;
	while (l > 0)
	{
		*ms1 = *ms2;
		ms1++;
		ms2++;
		l--;
	}
	return (s1);
}
