/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_distance.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averemiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/13 17:35:53 by averemiy          #+#    #+#             */
/*   Updated: 2018/05/21 14:29:00 by averemiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

int			find_distance(int y, int x, t_filler *f)
{
	int		i;
	int		j;
	int		dis;
	int		res_x;
	int		res_y;

	i = -1;
	dis = 0;
	while (++i < f->map_y)
	{
		j = -1;
		while (++j < f->map_x)
		{
			if (f->map[i][j] == f->e || f->map[i][j] == f->be)
			{
				res_x = ((y - i) > 0) ? (y - i) : -(y - i);
				res_y = ((x - j) > 0) ? (x - j) : -(x - j);
				if (dis == 0 || dis > (res_x + res_y))
					dis = res_x + res_y;
			}
		}
	}
	return (dis);
}
