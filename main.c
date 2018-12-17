/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averemiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/09 14:43:40 by averemiy          #+#    #+#             */
/*   Updated: 2018/05/21 14:29:28 by averemiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

int			main(void)
{
	t_filler		fill;
	char			*l;
	char			**str;

	while (get_next_line(0, &l) > 0)
	{
		str = ft_strsplit(l, ' ');
		if (!ft_strcmp(str[0], "$$$"))
			find_player(str, &fill);
		if (!ft_strcmp(str[0], "Plateau"))
			create_map(str, &fill, 0);
		if (!ft_strcmp(str[0], "Piece"))
			create_piece(str, &fill, 0);
		if (l)
			free(l);
	}
	return (0);
}
