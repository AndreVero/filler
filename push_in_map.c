/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_in_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averemiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/13 17:13:12 by averemiy          #+#    #+#             */
/*   Updated: 2018/05/21 14:30:05 by averemiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

static int	find_count_of_point(int y, int x, t_filler *f)
{
	int		i;
	int		j;
	int		res;

	i = -1;
	res = 0;
	while (++i < f->pi_y)
	{
		j = -1;
		while (++j < f->pi_x)
		{
			if (f->piece[i][j] == '*')
			{
				if (i + y >= f->map_y || j + x >= f->map_x)
					return (0);
				if (f->map[y + i][x + j] == f->e ||
						f->map[y + i][x + j] == f->be)
					return (0);
				if (f->map[y + i][x + j] == f->p ||
						f->map[y + i][x + j] == f->bp)
					res++;
			}
		}
	}
	return (res);
}

int			push_in_map(int y, int x, t_filler *f)
{
	int		count_of_point;

	count_of_point = find_count_of_point(y, x, f);
	if (count_of_point == 0 || count_of_point > 1)
		return (0);
	else
		return (1);
}
