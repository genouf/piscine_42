/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 19:44:45 by genouf            #+#    #+#             */
/*   Updated: 2022/02/03 19:59:15 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	c;

	i = -1;
	while (++i != size - 1)
	{
		j = i + 1;
		while (j != size)
		{
			if (tab[i] > tab[j])
			{
				c = tab[i];
				tab[i] = tab[j];
				tab[j] = c;
			}
			j++;
		}
	}
}

/*#include <stdio.h>
int	main()
{
	int	tab[10] = {4, 2, 12, 15, 1, 3};
	int i;
	
	ft_sort_int_tab(tab, 6);
	i = -1;
	while (++i != 6)
	{
		printf("%d,", tab[i]);
	}
}*/
