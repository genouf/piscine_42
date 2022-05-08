/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_validity2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselnet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 10:50:40 by aselnet           #+#    #+#             */
/*   Updated: 2022/02/22 18:13:44 by aselnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_make_base(char *line0, char *base)
{
	int	i;

	i = len(line0) - 3;
	base[0] = line0[i];
	base[1] = line0[i + 1];
	base[2] = line0[i + 2];
	base[3] = 0;
	free(line0);
}

int	ft_format_is_valid(char *map)
{
	int		lines;
	int		columns;

	lines = ft_count_map_lines(map);
	columns = ft_count_map_columns(map);
	if (columns < 1)
		return (0);
	if (lines < 1)
		return (0);
	if (ft_lines_are_equal(map, columns) < 1)
		return (0);
	return (1);
}

int	ft_lines_are_equal(char *map, int line_size)
{
	char	buffer[1];
	int		re;
	int		fd;
	int		count;

	re = 1;
	fd = open(map, O_RDONLY);
	buffer[0] = 0;
	while (buffer[0] != '\n' && re)
		re = read(fd, buffer, 1);
	re = read(fd, buffer, 1);
	while (re)
	{
		count = 0;
		while (buffer[0] != '\n' && re)
		{
			re = read(fd, buffer, 1);
			count++;
		}
		if (count != line_size)
			return (0);
		re = read(fd, buffer, 1);
	}
	close(fd);
	return (1);
}
