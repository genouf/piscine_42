/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   core.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 09:23:31 by genouf            #+#    #+#             */
/*   Updated: 2022/02/18 13:57:57 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	init_operator(char *str)
{
	str[0] = '+';
	str[1] = '-';
	str[2] = '*';
	str[3] = '/';
	str[4] = '%';
	str[5] = '\0';
}

void	init_fonctions(t_operation *tab)
{
	tab[0] = &add;
	tab[1] = &minus;
	tab[2] = &multiply;
	tab[3] = &divide;
	tab[4] = &modulo;
}

int	process_nbr(char *str, int i, int j)
{
	int	nbr;
	int	m;

	nbr = 0;
	m = 1;
	while (i >= j)
	{
		nbr += ((str[i] - 48) * m);
		m *= 10;
		i--;
	}
	return (nbr);
}

int	ft_atoi(char *str)
{
	int	i;
	int	j;
	int	p_n;

	p_n = 1;
	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			p_n = -p_n;
		i++;
	}
	if (str[i] >= '0' && str[i] <= '9')
	{
		j = i;
		while (str[i] >= '0' && str[i] <= '9')
			i++;
		return (process_nbr(str, i - 1, j) * p_n);
	}
	return (0);
}
