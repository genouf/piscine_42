/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 12:18:26 by genouf            #+#    #+#             */
/*   Updated: 2022/02/23 09:43:10 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	free_dict(char ***final_dict)
{
	int line;
	int x;
	int j;

	line = count_line();
	x = 0;
	while (x < line + 1)
	{
		j = 0;
		while (j < 2)
		{
			free(final_dict[x][j];
			j++;
		}
		free(final_dict[x]);
		x++;
	}
	free(final_dict);
}
