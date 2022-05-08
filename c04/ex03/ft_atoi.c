/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 14:21:46 by genouf            #+#    #+#             */
/*   Updated: 2022/02/10 14:32:54 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	process_nbr(char *str, int i, int j)
{
	int	nbr;
	int	m;

	nbr = 0;
	m = 1;
	while (i >= j)
	{
		nbr += ((str[i] - 48) * m);
		m *= 10;
		i--;
	}
	return (nbr);
}

int	ft_atoi(char *str)
{
	int	i;
	int	j;
	int	p_n;

	p_n = 1;
	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			p_n = -p_n;
		i++;
	}
	if (str[i] >= '0' && str[i] <= '9')
	{
		j = i;
		while (str[i] >= '0' && str[i] <= '9')
			i++;
		return (process_nbr(str, i - 1, j) * p_n);
	}
	return (0);
}

/*#include <stdio.h>
int	main()
{
	char	str[]= "120";

	printf("%d", ft_atoi(str));
	return (0);
}*/
