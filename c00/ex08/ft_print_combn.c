/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 19:03:56 by genouf            #+#    #+#             */
/*   Updated: 2022/02/03 11:06:20 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	initialize(int n, int *tab)
{
	int	i;

	i = 0;
	while (i != n)
	{
		tab[i] = i;
		i++;
	}
}		

void	ft_print_combn(int n)
{
	int	tab[10];
	int	i;
	int	ok;

	initialize(n, tab);
	while (tab[0] != (11 - n))
	{
		i = -1;
		ok = 0;
		while (++i != n)
		{
			ft_putchar('0' + tab[i]);
			if (ok == 1)
				tab[i] = tab[i - 1] + 1;
			if (tab[i + 1] == (11 - (n - i)) && ok == 0)
			{
				tab[i]++;
				ok = 1;
			}
		}
		if (ok == 0)
			tab[n - 1]++;
		if (tab[0] != (11 - n))
			write(1, ", ", 2);
	}
}
