/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_dict.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 12:28:46 by genouf            #+#    #+#             */
/*   Updated: 2022/02/20 17:27:26 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	check_line_end(char *str, int i, int check)
{
	while (str[i] && (str[i] == ' '))
		i++;
	if (str[++i])
		check++;
	return (check);
}

int	check_line(char *str)
{
	int	i;
	int	check;

	i = 0;
	check = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			check++;
			break ;
		}
		i++;
	}
	while (str[i])
	{
		if (str[i] == ':')
		{
			check++;
			break ;
		}
		i++;
	}
	return (check_line_end(str, i + 1, check));
}
