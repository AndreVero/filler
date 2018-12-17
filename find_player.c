/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_player.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averemiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/09 15:54:36 by averemiy          #+#    #+#             */
/*   Updated: 2018/05/21 14:29:05 by averemiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

void		find_player(char **split, t_filler *pl)
{
	if (ft_strstr(split[4], "averemiy") && !ft_strcmp(split[2], "p1"))
	{
		pl->p = 'o';
		pl->bp = 'O';
		pl->e = 'x';
		pl->be = 'X';
	}
	else
	{
		pl->p = 'x';
		pl->bp = 'X';
		pl->e = 'o';
		pl->be = 'O';
	}
}
