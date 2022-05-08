/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutatoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchesnea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 20:58:39 by hchesnea          #+#    #+#             */
/*   Updated: 2022/02/20 11:38:32 by tmejri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

char	*mutatoi(char *str)
{
	int		i;
	char	*nb;
	int		len;
	int		j;

	len = ft_strlen(str);
	nb = malloc(sizeof(char) * len + 1);
	i = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		{
			nb[0] = 'n';
			return (&nb[0]);
		}
		i++;
	}
	if (!(str[i] >= '0' && str[i] <= '9'))
	{
		nb[0] = 'n';
		return (&nb[0]);
	}
	j = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb[j] = str[i];
		j++;
		i++;
	}
	if (str[i] == '.')
	{
		nb[0] = 'n';
		return (&nb[0]);
	}
	return (nb);
}
