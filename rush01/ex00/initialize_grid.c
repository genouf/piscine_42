/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize_grid.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 15:29:22 by genouf            #+#    #+#             */
/*   Updated: 2022/02/13 17:48:41 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "header.h"

void	ft_atoi_rush(char *str, int *tab)
{	
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 31)
	{
		tab[j] = str[i] - 48;
		i += 2;
		j++;
	}
}

int	**initialize_grid(void)
{
	int	**grid;
	int	row;
	int	col;

	grid = (int **)malloc(sizeof(int *) * 6);
	row = 0;
	while (row < 6)
	{
		grid[row] = (int *)malloc(sizeof(int) * 6);
		col = 0;
		while (col < 6)
		{
			grid[row][col] = 0;
			col++;
		}
		row++;
	}
	return (grid);
}

int	initialize_value_row(int **grid, int *tab, int i)
{
	int	row;
	int	col;

	row = 0;
	while (row < 6)
	{
		col = 1;
		while (col < 5)
		{
			grid[row][col] = tab[i];
			col++;
			i++;
		}
		row += 5;
	}
	return (i);
}

void	initialize_value_col(int **grid, int *tab, int i)
{
	int	row;
	int	col;

	col = 0;
	while (col < 6)
	{
		row = 1;
		while (row < 5)
		{
			grid[row][col] = tab[i];
			row++;
			i++;
		}
		col += 5;
	}
}
