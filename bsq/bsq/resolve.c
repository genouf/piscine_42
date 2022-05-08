/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resolve.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 10:22:44 by genouf            #+#    #+#             */
/*   Updated: 2022/02/22 19:29:57 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	check_solution(char **grid, int row, int col, int count, t_coord *sol)
{
	int verif;

	verif = 1;
	while (verif < count)
	{
		row++;
		//printf("g:%d", grid[row][col] - 48);
		//printf("c:%d", count);
		if (grid[row][col] < count + 48)
		{
			return(count);
		}
		else
			verif++;
	}
	sol->row = row;
	sol->col = col;
	return (count + 1);
}

int	find_solution(char **grid, int max_row, int max_col, t_coord *sol)
{
	int 			col;
	int 			row;
	int				count;
	
	count = 1;
	row = 0;
	while (row < max_row)
	{
		col = 0;
		while (col < max_col)
		{
			//printf("g:%d", grid[row][col] - 48);
			//printf("c:%d", count);
			if ((grid[row][col] - 48) >= count && row <= (max_row - count))
			{
				count = check_solution(grid, row, col, count, sol);
				//printf("%d", count);
			}
			col++;	
		}
		row++;
	}
	return (count);
}

char	**set_grid(char **grid, char empty, char full, int max_row, int max_col)
{
	int	col;
	int	row;
	int count;
	
	row = 0;
	while (row < max_row)
	{
		count = 0;
		col = 0;
		while (col < max_col)
		{
			if (grid[row][col] == empty)
				count++;
			else
				count = 0;
			grid[row][col] = count + 48;
			col++;
		}
		row++;
	}
	return (grid);
}

#define T 100

int	main(int argc, char **argv)
{
	char **grid;
	t_coord	solution;
	int	i;

	(void)argc;
	solution.row = 0;
	solution.col = 0;
	grid = map_parsing(T, T);
	grid = set_grid(grid, '.', 'o', T, T);
	printf("  c:%d ", find_solution(grid, T, T, &solution) - 1);
	printf("r:%d ", solution.row);
	printf("c:%d \n", solution.col);
}
