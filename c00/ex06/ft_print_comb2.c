/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 15:11:14 by genouf            #+#    #+#             */
/*   Updated: 2022/02/02 18:24:11 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a != 99)
	{
		b = a + 1;
		while (b != 100)
		{
			ft_putchar('0' + (a / 10));
			ft_putchar('0' + (a % 10));
			write(1, " ", 1);
			ft_putchar('0' + (b / 10));
			ft_putchar('0' + (b % 10));
			if (a != 98)
				write(1, ", ", 2);
			b++;
		}
		a++;
	}
}
