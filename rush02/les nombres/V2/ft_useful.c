/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_useful.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchesnea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 14:58:44 by hchesnea          #+#    #+#             */
/*   Updated: 2022/02/20 11:28:08 by tmejri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_mutnbr(int i, char tab[])
{
	int	v;

	v = 1;
	tab = malloc(sizeof(char) * (i + 1));
	tab[0] = '1';
	while (v < i)
	{
		tab[v] = '0';
		v++;
	}
	tab[v] = '\0';
	return (&tab[0]);
}
