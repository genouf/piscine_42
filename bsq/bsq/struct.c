/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselnet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 14:02:25 by aselnet           #+#    #+#             */
/*   Updated: 2022/02/22 17:05:30 by aselnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

t_map_ID	ft_create_map_ID(char *map)
{
	char		*line0;
	char		*base;
	int			i;
	t_map_ID	map_ID;
	
	i = -1;
	line0 = malloc(sizeof(char) * 14);
	base = malloc(sizeof(char) * 4);
	while (i < 14)
		line0[++i] = 0;
	line0 = ft_fetch_first_line(map, line0);
	ft_make_base(line0, base);
	free(line0);
	map_ID.lines = ft_count_map_lines(map);
	map_ID.columns = ft_count_map_columns(map);
	map_ID.empty = base[0];
	map_ID.pillar = base[1];
	map_ID.full = base[2];
	free(base);
	return(map_ID);
}
