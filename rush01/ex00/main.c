/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucien <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 15:51:27 by jlucien           #+#    #+#             */
/*   Updated: 2022/02/13 18:28:28 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "header.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	int **grid;
	int	tab[16];
	int i;
	int row;
	int col;

	i = 0;
	if (check_string(argv[1]) && argc == 2)
	{
		ft_atoi_rush(argv[1], tab);
		grid = initialize_grid();
		i = initialize_value_row(grid, tab, i);
		initialize_value_col(grid, tab, i);
		is_valid(grid, 1, 1);
		//ft_print(grid);
	}
	else
	{
		ft_error();
		return (1);
	}	
	return (0);
}
/*		row = 0;
		while (row < 6)
		{
			col = 0;
			while (col < 6)
			{
				printf("%d ", grid[row][col]);
				col++;
			}
			printf("\n");
			row++;
		}
*/
