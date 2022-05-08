/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 10:11:24 by genouf            #+#    #+#             */
/*   Updated: 2022/02/11 09:44:02 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb == 0 || nb == 1 || nb < 0)
		return (0);
	i = nb / 2;
	while (i > 1)
	{
		if (nb % i == 0)
			return (0);
		if (i % 2 == 0)
			i--;
		else
			i -= 2;
	}
	return (1);
}

/*#include <stdio.h>
int	main()
{
	printf("%d", ft_is_prime(10));
	//printf("%f", ft_sqrt(35));
}*/
