/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 18:31:47 by genouf            #+#    #+#             */
/*   Updated: 2022/02/11 12:27:18 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count])
	{
		count++;
	}
	return (count);
}

int	check_base(char *str)
{
	int unsigned	i;
	int unsigned	j;

	if (ft_strlen(str) == 0 || ft_strlen(str) == 1)
		return (0);
	i = 0;
	while (i < ft_strlen(str) - 1)
	{
		j = i + 1;
		if (str[i] == '-' || str[i] == '+')
			return (0);
		while (j < ft_strlen(str))
		{
			if (str[j] == '-' || str[j] == '+' || str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long int	i;
	char		c;

	i = nbr;
	if (check_base(base) == 1)
	{
		if (nbr < 0)
		{
			write(1, "-", 1);
			i = -i;
		}
		if (i / ft_strlen(base) != 0)
			ft_putnbr_base(i / ft_strlen(base), base);
		c = base[i % ft_strlen(base)];
		write(1, &c, 1);
	}	
}

int main()
{
	ft_putnbr_base(-1238495930, "0123456789abcdef\t");
}
