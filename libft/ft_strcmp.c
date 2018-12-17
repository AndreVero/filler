/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averemiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/22 15:40:32 by averemiy          #+#    #+#             */
/*   Updated: 2018/04/02 19:15:01 by averemiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(const char *s1, const char *s2)
{
	unsigned char *p2;
	unsigned char *p1;

	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	while (*p1 != '\0' || *p2 != '\0')
	{
		if (*p1 > *p2)
			return (*p1 - *p2);
		if (*p2 > *p1)
			return (-1 * (*p2 - *p1));
		p1++;
		p2++;
	}
	return (0);
}
