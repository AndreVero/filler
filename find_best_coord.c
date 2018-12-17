/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_best_coord.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averemiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/13 16:38:33 by averemiy          #+#    #+#             */
/*   Updated: 2018/05/21 14:28:55 by averemiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

static void	print_cord(int x, int y)
{
	ft_putnbr(y);
	write(1, " ", 1);
	ft_putnbr(x);
	write(1, "\n", 1);
}

void		find_best_coord(t_filler *f)
{
	int		i;
	int		j;
	int		test;

	i = -1;
	test = 0;
	while (++i < f->map_y)
	{
		j = -1;
		while (++j < f->map_x)
		{
			if (push_in_map(i, j, f))
			{
				test = find_distance(i, j, f);
				if (f->distance == 0 || test < f->distance)
				{
					f->distance = test;
					f->res_x = j;
					f->res_y = i;
				}
			}
		}
	}
	print_cord(f->res_x, f->res_y);
}
