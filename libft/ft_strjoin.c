/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averemiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/23 17:18:57 by averemiy          #+#    #+#             */
/*   Updated: 2018/04/02 18:51:12 by averemiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	int		j;
	char	*cat;

	if (s1 == NULL)
		return (NULL);
	if (s2 == NULL)
		return ((char *)s1);
	j = ft_strlen((char *)s1) + ft_strlen((char *)s2);
	cat = (char *)malloc(sizeof(char) * (j));
	if (cat == NULL)
		return (NULL);
	ft_strcpy(cat, s1);
	ft_strcat(cat, s2);
	cat[j] = '\0';
	return (cat);
}
