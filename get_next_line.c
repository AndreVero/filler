/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averemiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 14:00:56 by averemiy          #+#    #+#             */
/*   Updated: 2018/05/21 14:29:21 by averemiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char				*my_new_joinstr(char *s1, char *s2)
{
	int				j;
	char			*cat;

	j = ft_strlen(s1) + ft_strlen(s2);
	cat = (char *)malloc(sizeof(char) * (j + 1));
	if (!(cat))
		return (NULL);
	ft_strcpy(cat, s1);
	ft_strcat(cat, s2);
	cat[j] = '\0';
	return (cat);
}

int					from_fd_to_arr(char **saver, char **arr, int fd, int size)
{
	char			*save;
	int				i;

	i = 0;
	while (saver[fd][i] != '\n' && saver[fd][i] != '\0')
		i++;
	if (saver[fd][i] == '\n')
	{
		*arr = ft_strsub(saver[fd], 0, i);
		save = ft_strsub(saver[fd], i + 1, ft_strlen(saver[fd]));
		free(saver[fd]);
		saver[fd] = ft_strdup(save);
		free(save);
		return (1);
	}
	if (saver[fd][i] == '\0')
	{
		if (size == BUFF_SIZE)
			return (get_next_line(fd, arr));
		*arr = ft_strsub(saver[fd], 0, i);
		free(saver[fd]);
		saver[fd] = NULL;
	}
	return (1);
}

int					get_next_line(const int fd, char **arr)
{
	static char		*saver[4000];
	char			*save;
	char			buf[BUFF_SIZE + 1];
	int				ret;
	int				ret2;

	ret = 0;
	ret2 = 0;
	if (fd < 0 || !arr || read(fd, buf, 0) < 0)
		return (-1);
	while ((ret = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[ret] = '\0';
		if (!saver[fd])
			saver[fd] = ft_strnew(1);
		save = my_new_joinstr(saver[fd], buf);
		free(saver[fd]);
		saver[fd] = save;
		ret2 = ret;
		if (ft_strchr(saver[fd], '\n'))
			break ;
	}
	if (!saver[fd] || ft_strlen(saver[fd]) <= 0)
		return (0);
	return (from_fd_to_arr(saver, arr, fd, ret));
}
