/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_doublon.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npetitpi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 12:13:57 by npetitpi          #+#    #+#             */
/*   Updated: 2022/02/13 19:40:26 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_check_doublon_row(int **grid, int row, int col, int value)
{
	int	i;
	int	j;

	i = 1;
	grid[col][row] = value;
	while (i < 4)
	{
		j = i + 1;
		while (j < 5)
		{
			if ((grid[row][i] == grid[row][j]) && grid[row][i] != 0)
				return (0);
			j++;
		}
		i++;
	}
	grid[col][row] = 0;
	return (1);
}

int	ft_check_doublon_col(int **grid, int row, int col, int value)
{
	int	i;
	int	j;

	i = 1;
	grid[col][row] = value;
	while (i < 4)
	{
		j = i + 1;
		while (j < 5)
		{
			if ((grid[i][col] == grid[j][col]) && grid[i][col] != 0)
				return (0);
			j++;
		}
		i++;
	}
	grid[col][row] = 0;
	return (1);
}

#include <stdio.h>
int	ultimate_check(int **grid, int row, int col, int value)
{
	int	i;

	i = 0;
	//i += left_check_value(grid, row);
	//i += right_check_value(grid, row);
	//i += up_check_value(grid, row);
	//i += down_check_value(grid, row);
	i += ft_check_doublon_row(grid, row, col, value);
	i += ft_check_doublon_col(grid, row, col, value);
	if (i == 2)
		return (1);
	else
		return (0);
}
