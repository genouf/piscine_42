/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 18:39:11 by genouf            #+#    #+#             */
/*   Updated: 2022/02/03 19:41:14 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	c;

	j = size - 1;
	size /= 2;
	i = -1;
	while (++i < size)
	{
		c = tab[i];
		tab[i] = tab[j];
		tab[j] = c;
		j--;
	}	
}

/*#include <stdio.h>
int	main()
{
	int tab[10] = {1, 2, 3, 4, 5};
	int i = 0;

	ft_rev_int_tab(tab, 5);
	while (i != 5)
	{
		printf("%d", tab[i]);
		i++;
	}
}*/
