/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averemiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/23 16:48:41 by averemiy          #+#    #+#             */
/*   Updated: 2018/04/02 18:50:39 by averemiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	if (s1 == NULL || s2 == NULL)
		return (0);
	if (ft_strlen(s1) != ft_strlen(s2))
		return (0);
	if (ft_strcmp(s1, s2) == 0)
		return (1);
	return (0);
}
