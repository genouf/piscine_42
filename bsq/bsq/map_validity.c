/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_validity.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselnet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 16:25:34 by aselnet           #+#    #+#             */
/*   Updated: 2022/02/22 18:13:17 by aselnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_count_map_columns(char *map)
{
	char	buffer[1];
	int		re;
	int		size;
	int		fd;

	fd = open(map, O_RDONLY);
	if (fd == -1)
		return (0);
	re = 1;
	size = 0;
	buffer[0] = 0;
	while (buffer[0] != '\n' && re)
		re = read(fd, buffer, 1);
	re = read(fd, buffer, 1);
	while (buffer[0] != '\n' && re)
	{
		re = read(fd, buffer, 1);
		size ++;
	}
	close (fd);
	return (size);
}

int	ft_count_map_lines(char *map)
{
	char	buffer[1];
	int		re;
	int		size;
	int		fd;

	fd = open(map, O_RDONLY);
	if (fd == -1)
		return (0);
	re = 1;
	size = 0;
	buffer[0] = 0;
	while (re)
	{
		re = read(fd, buffer, 1);
		if (buffer[0] == '\n')
			size ++;
	}
	close (fd);
	return (size - 2);
}

char	*ft_fetch_first_line(char *map, char *line0)
{
	char	buffer[1];
	int		re;
	int		fd;
	int		i;

	fd = open(map, O_RDONLY);
	if (fd == -1)
		return (0);
	i = -1;
	re = 1;
	buffer[0] = 0;
	while (buffer[0] != '\n' && re)
	{
		re = read(fd, buffer, 1);
		line0[++i] = buffer[0];
	}
	if (len(line0) > 0)
		line0[len(line0) - 1] = 0;
	close (fd);
	return (line0);
}

int	ft_check_map_charbase(char *map, char *base)
{
	char	buffer[1];
	int		re;
	int		fd;

	buffer[0] = 0;
	if ((base[0] == base[1]) || (base[0] == base[2])
		|| (base[1] == base[2]) || (base[0] < 32) || (base[0] == 127)
		|| (base[1] < 32) || (base[1] == 127) || (base[2] < 32)
		|| (base[2] == 127))
		return (0);
	fd = open(map, O_RDONLY);
	while (buffer[0] != '\n')
		re = read(fd, buffer, 1);
	while (re)
	{
		re = read(fd, buffer, 1);
		if ((buffer[0] != '\n') && (buffer[0] != 0) && (buffer[0] != base[0])
			&& (buffer[0] != base[1]) && (buffer[0] != base[2]))
			return (0);
	}
	close (fd);
	return (1);
}

int	ft_check_map_validity(char *map)
{
	char	*line0;
	char	*base;
	int		i;

	if (ft_format_is_valid(map) < 1)
		return (0);
	line0 = malloc(sizeof(char) * 14);
	if (!line0)
		return (-1);
	base = malloc(sizeof(char) * 4);
	if (!base)
		return (-1);
	i = -1;
	while (i < 13)
		line0[++i] = 0;
	ft_fetch_first_line(map, line0);
	ft_make_base(line0, base);
	if (len(base) != 3)
		return (0);
	if (ft_check_map_charbase(map, base) == 0)
		return (0);
	free (base);
	return (1);
}
