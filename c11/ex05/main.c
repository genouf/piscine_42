/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 08:39:07 by genouf            #+#    #+#             */
/*   Updated: 2022/02/19 12:15:49 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "header.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long	i;

	i = nb;
	if (i < 0)
	{
		ft_putchar('-');
		i *= -1;
	}
	if (i > 9)
		ft_putnbr(i / 10);
	ft_putchar('0' + (i % 10));
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	find_index(char *av, char *str)
{
	int	i;

	if (ft_strlen(av) != 1)
		return (-1);
	i = 0;
	while (i < 5)
	{
		if (str[i] == av[0])
			return (i);
		i++;
	}
	return (-1);
}

int	main(int argc, char **argv)
{
	char		str[5];
	t_operation	tab[5];
	int			a;
	int			b;
	int			index;

	if (argc != 4)
		return (1);
	else
	{
		init_operator(str);
		init_fonctions(tab);
		a = ft_atoi(argv[1]);
		b = ft_atoi(argv[3]);
		index = find_index(argv[2], str);
		if (index == -1)
		{
			write(1, "0", 1);
			ft_putchar('\n');
			return (1);
		}
		(tab[index])(a, b);
	}
	return (0);
}
