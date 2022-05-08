/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 11:59:18 by genouf            #+#    #+#             */
/*   Updated: 2022/02/10 08:11:54 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	m;

	m = nb;
	if (power < 0)
		return (0);
	if ((nb == 0 && power == 0) || power == 0)
		return (1);
	while (power > 1)
	{
		nb *= m;
		power--;
	}
	return (nb);
}

/*#include <stdio.h>
int main()
{
	printf("%d", ft_iterative_power(2, 4));
}*/
