/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_len.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchesnea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 18:38:55 by hchesnea          #+#    #+#             */
/*   Updated: 2022/02/19 18:38:58 by hchesnea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	tab_len(long int nbr)
{
	int			i;
	long int	save;
	int			k;
	
	k = 1;
	i = 0;
	if (nbr == 0)
		return (1);
	save = nbr;
	while (save > 0)
	{
		if (save % 10 != 0)
			i++;
		save = save / 10;
	}
	while (nbr > 0)
	{
		if (k != 3)
		{
			k++;
			nbr = nbr / 10;
		}
		else  
		{
			if (nbr % 10 != 0)
				i++;
			nbr = nbr / 10;
			if (nbr > 0)
				i++;
			k = 1;
		}
	}
	return (i);
}
