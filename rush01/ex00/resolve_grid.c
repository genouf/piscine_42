/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resolve_grid.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 10:05:16 by genouf            #+#    #+#             */
/*   Updated: 2022/02/13 19:29:22 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include <stdio.h>

int	is_valid(int **grid, int row, int col)
{
	int i;
	
	printf("%i\n", col);	

	i = 0;
	if (row > 4)
		return (1);
	if (grid[row][col] != 0)
	{
		if (col == 4)
			return (is_valid(grid, row + 1, 1));
		else
			return (is_valid(grid, row, col + 1));
	}
	while (++i < 5)
	{
		ft_print(grid);
		printf("\n");
		printf("col:%d\n", col);
		if (ultimate_check(grid, row, col, i))
		{
			grid[row][col] = i;
			if (col == 4)
			{
				if (is_valid(grid, row + 1, 1))
					return (1);
			}
			else
			{
				if (is_valid(grid, row, col + 1))
					return (1);
			}
		}
	}
	grid[row][col] = 0;
	return (0);
}
