/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 16:44:18 by genouf            #+#    #+#             */
/*   Updated: 2022/02/16 09:23:46 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_unvalid(char c);
int	ft_strlen(char *str);
int	check_base(char *str);
int	is_in(char *str, char c);
int	find_index(char *str, char c);

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	m;
	int	nb;

	i = 0;
	m = 1;
	nb = 0;
	while (is_unvalid(str[i]))
	{
		if (str[i] == '-')
			m = -m;
		i++;
	}
	while (is_in(base, str[i]))
	{
		nb = nb * ft_strlen(base) + find_index(base, str[i]);
		i++;
	}
	return (nb * m);
}

void	rev_string(char *str)
{
	int	i;
	int	j;
	int	temp;
	int	size;

	size = ft_strlen(str);
	i = 0;
	j = size - 1;
	while (i < size / 2)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++;
		j--;
	}
}

int	ft_convert(long nb, char *final_nbr, char *base_to)
{
	int	i;

	i = 0;
	if (nb == 0)
	{
		final_nbr[i] = base_to[0];
		return (i);
	}
	while (nb != 0)
	{
		final_nbr[i] = base_to[nb % ft_strlen(base_to)];
		nb /= ft_strlen(base_to);
		i++;
	}
	return (i);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		i;
	long	nb;
	char	*final_nbr;

	if (check_base(base_from) && check_base(base_to))
	{
		nb = ft_atoi_base(nbr, base_from);
		if (nb < 0)
			nb = -nb;
		final_nbr = (char *)malloc(sizeof(char) * 40);
		if (!final_nbr)
			return (NULL);
		i = ft_convert(nb, final_nbr, base_to);
		if (ft_atoi_base(nbr, base_from) < 0)
			final_nbr[i] = '-';
		final_nbr[++i] = '\0';
		rev_string(final_nbr);
		return (final_nbr);
	}
	else
		return (NULL);
}

/*#include <stdio.h>
int	main()
{
	char nbr[] = "-2147483648";
	char base1[] = "0123456789";
	char base2[] = "01";

	printf("%s", ft_convert_base(nbr, base1, base2));
	return (0);
}*/
