/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   to_tab.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchesnea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 16:15:58 by hchesnea          #+#    #+#             */
/*   Updated: 2022/02/19 16:16:00 by hchesnea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int *to_tab(long int nbr, int *tab, int len)
{
	int i;
	int j;
	int k;
	
	i = 1;
	j = len - 1;
	k = 1;
	if (nbr <= 9)
	{
		tab[len - 1] = nbr;
		return (&tab[len - 1]);
	}
	while (j >= 0 && nbr > 0)
	{
		if (k == 3) 
		{
			if (nbr % 10 != 0)
			{
				tab[j] = 100;
				j--;
				tab[j] = nbr % 10;
				j--;
				}	
				nbr = nbr / 10;
			if (nbr > 0)
			{
				tab[j] = ft_pow(i);
				j--;
			}
			k = 1;
		}
		else if (k == 2)
		{
			if (nbr % 10 != 0)
			{
				tab[j] = (nbr % 10) * 10;
				j--;
			}
			k = 3;
			nbr = nbr / 10;
		}
		else if (k == 1)
		{
			if (nbr % 10 != 0)
			{
				tab[j] = nbr % 10;
				j--;
			}
			nbr = nbr / 10;
			k = 2;
		}
		i++;
	}
		return (&tab[j + 1]);
}
