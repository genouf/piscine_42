/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operator_fonctions.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 09:47:37 by genouf            #+#    #+#             */
/*   Updated: 2022/02/19 12:16:17 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "header.h"

void	add(int a, int b)
{
	int	print;

	print = a + b;
	ft_putnbr(print);
	ft_putchar('\n');
}

void	minus(int a, int b)
{
	int	print;

	print = a - b;
	ft_putnbr(print);
	ft_putchar('\n');
}

void	multiply(int a, int b)
{
	int	print;

	print = a * b;
	ft_putnbr(print);
	ft_putchar('\n');
}

void	divide(int a, int b)
{
	int	print;

	if (b != 0)
	{
		print = a / b;
		ft_putnbr(print);
		ft_putchar('\n');
	}
	else
	{
		write(1, "Stop : division by zero", 23);
		ft_putchar('\n');
	}
}

void	modulo(int a, int b)
{
	int	print;

	if (b > 0)
	{
		print = a % b;
		ft_putnbr(print);
		ft_putchar('\n');
	}
	else
	{
		write(1, "Stop : modulo by zero", 23);
		ft_putchar('\n');
	}
}
