/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averemiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/09 14:26:04 by averemiy          #+#    #+#             */
/*   Updated: 2018/05/16 18:31:38 by averemiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLER_H
# define FILLER_H

# include <stdlib.h>
# include <unistd.h>
# include "get_next_line.h"
# include "./libft/libft.h"

typedef struct		s_filler
{
	int				map_x;
	int				map_y;
	char			**map;
	int				pi_x;
	int				pi_y;
	char			**piece;
	char			p;
	char			bp;
	char			e;
	char			be;
	int				distance;
	int				res_x;
	int				res_y;
}					t_filler;

void				find_player(char **split, t_filler *pl);
void				create_map(char **str, t_filler *f, int fd);
void				create_piece(char **str, t_filler *f, int fd);
int					get_next_line(const int fd, char **arr);
int					push_in_map(int y, int x, t_filler *f);
int					find_distance(int y, int x, t_filler *f);
void				find_best_coord(t_filler *f);

#endif
