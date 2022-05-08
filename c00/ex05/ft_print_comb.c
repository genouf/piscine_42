/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 08:15:35 by genouf            #+#    #+#             */
/*   Updated: 2022/02/02 15:09:56 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	int	n1;
	int	n2;
	int	n3;

	n1 = 0;
	while (n1 != 8)
	{
		n2 = n1 + 1;
		while (n2 != 9)
		{
			n3 = n2 + 1;
			while (n3 != 10)
			{
				ft_putchar(n1 + '0');
				ft_putchar(n2 + '0');
				ft_putchar(n3 + '0');
				if (n1 != 7)
					write(1, ", ", 2);
				n3++;
			}
			n2++;
		}
		n1++;
	}
}
