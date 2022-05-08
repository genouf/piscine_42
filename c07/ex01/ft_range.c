/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 13:11:42 by genouf            #+#    #+#             */
/*   Updated: 2022/02/15 09:53:36 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	size;
	int	i;

	tab = NULL;
	if (min >= max)
		return (NULL);
	size = -min + max;
	tab = (int *)malloc(sizeof(*tab) * size);
	if (tab == NULL)
		return (NULL);
	i = 0;
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (tab);
}

/*#include <stdio.h>
int	main()
{
	int i;
	int	*tab;
	
	i = 0;
	tab = ft_range(-10, 2);
	while (i < 12)
	{
		printf("%d ", tab[i]);
		i++;
	}
}*/
