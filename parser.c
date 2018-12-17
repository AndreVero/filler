/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averemiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/09 15:29:20 by averemiy          #+#    #+#             */
/*   Updated: 2018/05/21 14:29:34 by averemiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

char			**make_board(int plus, int y, int fd)
{
	int			i;
	char		*tmp;
	char		**res;

	i = 0;
	tmp = NULL;
	if (!(res = (char **)malloc(sizeof(char *) * y)))
		return (NULL);
	while (i < y)
	{
		get_next_line(fd, &tmp);
		res[i] = ft_strdup(tmp + plus);
		free(tmp);
		i++;
	}
	return (res);
}

void			create_map(char **str, t_filler *f, int fd)
{
	char		*t;

	t = NULL;
	f->map_x = ft_atoi(str[2]);
	f->map_y = ft_atoi(str[1]);
	get_next_line(fd, &t);
	if (t)
		free(t);
	f->map = make_board(4, f->map_y, fd);
}

void			create_piece(char **str, t_filler *f, int fd)
{
	f->pi_x = ft_atoi(str[2]);
	f->pi_y = ft_atoi(str[1]);
	f->piece = make_board(0, f->pi_y, fd);
	f->distance = 0;
	f->res_x = 0;
	f->res_y = 0;
	find_best_coord(f);
}
