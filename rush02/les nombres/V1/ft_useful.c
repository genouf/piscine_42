/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_useful.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchesnea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 14:58:44 by hchesnea          #+#    #+#             */
/*   Updated: 2022/02/19 14:58:46 by hchesnea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_pow(int k)
{
	int nb;
	
	nb = 1;
	while (k > 0)
	{
		nb = nb * 10;
		k--;
	}
	return (nb);
}

long int	ft_atoi(char *str)
{
	int			i;
	int			minus;
	long int	nb;

	i = 0;
	minus = 0;
	nb = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			minus++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10;
		nb = nb + str[i] - 48;
		i++;	
	}
	if (str[i])
		return (-1);
	if (minus == 1)
		nb = -nb;
	
	return (nb);
}
