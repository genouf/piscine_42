/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_value.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 14:16:57 by genouf            #+#    #+#             */
/*   Updated: 2022/02/13 18:17:54 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	left_check_value(int **grid, int row)
{
	int	nb;
	int	skyc;
	int	i;

	i = 1;
	nb = 1;
	skyc = grid[row][1];
	if (skyc == 0)
		return (1);
	while (++i < 5)
	{
		if (grid[row][i] > skyc)
		{
			skyc == grid[row][i];
			nb++;
		}
	}
	if (grid[row][0] == nb)
		return (1);
	else
		return (0);
}

int	right_check_value(int **grid, int row)
{
	int	nb;
	int	skyc;
	int	i;

	i = 4;
	nb = 1;
	skyc = grid[row][4];
	if (skyc == 0)
		return (1);
	while (--i > 0)
	{
		if (grid[row][i] > skyc)
		{
			skyc == grid[row][i];
			nb++;
		}
	}
	if (grid[row][5] == nb)
		return (1);
	else
		return (0);
}

int	up_check_value(int **grid, int col)
{
	int	nb;
	int	skyc;
	int	i;

	i = 1;
	nb = 1;
	skyc = grid[1][col];
	if (skyc == 0)
		return (1);
	while (++i < 5)
	{
		if (grid[i][col] > skyc)
		{
			skyc == grid[i][col];
			nb++;
		}
	}
	if (grid[0][col] == nb)
		return (1);
	else
		return (0);
}

int	down_check_value(int **grid, int col)
{
	int	nb;
	int	skyc;
	int	i;

	i = 4;
	nb = 1;
	skyc = grid[4][col];
	if (skyc == 0)
		return (1);
	while (--i > 0)
	{
		if (grid[i][col] > skyc)
		{
			skyc == grid[i][col];
			nb++;
		}
	}
	if (grid[5][col] == nb)
		return (1);
	else
		return (0);
}
