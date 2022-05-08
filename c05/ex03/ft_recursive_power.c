/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 12:15:53 by genouf            #+#    #+#             */
/*   Updated: 2022/02/10 08:21:09 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if ((nb == 0 && power == 0) || power == 0)
		return (1);
	else
		return (nb * ft_recursive_power(nb, power - 1));
	return (nb);
}

/*#include <stdio.h>
int main()
{
	printf("%d", ft_recursive_power(2, 4));
}*/
