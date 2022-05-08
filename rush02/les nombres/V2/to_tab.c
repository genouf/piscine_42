/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   to_tab.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchesnea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 16:15:58 by hchesnea          #+#    #+#             */
/*   Updated: 2022/02/20 11:35:48 by tmejri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

char	**to_tab(char *nbr, char **tab, int len)
{
	int	i;
	int	j;
	int	k;
	int	l;

	l = ft_strlen(nbr) - 1;
	i = 1;
	j = 0;
	k = 1;
	if (len == 1)
	{
		tab[0] = malloc(sizeof(char) * 2);
		tab[0][0] = nbr[0];
		tab[0][1] = '\0';
		j++;
	}
	if (nbr[l - 1] == '1' && nbr[l] != '0')
	{
		tab[j] = malloc(sizeof(char) * 3);
		tab[0][0] = nbr[l - 1];
		tab[0][1] = nbr[l];
		tab[0][2] = '\0';
		k = 3;
		j++;
		l = l - 2;
	}
	while (j < len)
	{	
		if (k == 3)
		{
			if (nbr[l] != '0')
			{
				tab[j] = ft_mutnbr(3, tab[j]);
				j++;
				tab[j] = malloc(sizeof(char) * (1 + 1));
				tab[j][0] = nbr[l];
				j++;
			}
			l--;
			if (l >= 0)
			{
				tab[j] = ft_mutnbr(i + 1, tab[j]);
				j++;
			}
			k = 1;
		}
		else if (k == 2)
		{
			if (nbr[l] != '0')
			{
				tab[j] = malloc(sizeof(char) * (2 + 1));
				tab[j][0] = nbr[l];
				tab[j][1] = '0';
				tab[j][2] = '\0';
				j++;
			}
			k = 3;
			l--;
		}
		else if (k == 1)
		{
			if (nbr[l] != '0')
			{
				tab[j] = malloc(sizeof(char) * (1 + 1));
				tab[j][0] = nbr[l];
				j++;
			}
			l--;
			k = 2;
		}
		i++;
	}
	tab[j] = '\0';
	return (tab);
}
