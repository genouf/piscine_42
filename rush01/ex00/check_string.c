/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_string.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucien <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 17:26:06 by jlucien           #+#    #+#             */
/*   Updated: 2022/02/13 18:02:01 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "header.h"

void	ft_error(void)
{
	write(1, "Error", 7);
	write(1, "\n", 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	check_string(char *str)
{
	int	i;

	if (ft_strlen(str) != 31)
	{
		ft_error();
		return (0);
	}
	i = 0;
	while (str[i])
	{
		if (i % 2 == 0 && (str[i] < '1' || str[i] > '4'))
		{
			ft_error();
			return (0);
		}
		if (i % 2 != 0 && str[i] != ' ')
		{
			ft_error();
			return (0);
		}
		i++;
	}
	return (1);
}

void	ft_print(int **grid)
{
	int	i;
	int	j;
	int d;

	i = 1;
	while(i < 5)
	{
		j = 1;
		while (j < 5)
		{
			d = grid[i][j] + '0';
			write(1, &d, 1);
			if (j < 4)
				write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
