/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averemiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/24 14:25:13 by averemiy          #+#    #+#             */
/*   Updated: 2018/03/24 14:34:18 by averemiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char const *s, int fd)
{
	char *str;

	str = (char *)s;
	while (*str)
	{
		ft_putchar_fd(*str, fd);
		str++;
	}
	ft_putchar_fd('\n', fd);
}
