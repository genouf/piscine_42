/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 18:24:59 by genouf            #+#    #+#             */
/*   Updated: 2022/02/21 08:41:03 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*r_tab;
	int	i;

	r_tab = (int *)malloc(sizeof(int) * length);
	i = -1;
	while (++i < length)
		r_tab[i] = (*f)(tab[i]);
	return (r_tab);
}
