/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 12:57:07 by genouf            #+#    #+#             */
/*   Updated: 2022/02/16 17:38:56 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

void	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*s_tab;
	int					i;

	i = 0;
	s_tab = malloc(sizeof(*s_tab) * (ac + 1));
	while (i < ac)
	{
		s_tab[i].size = ft_strlen(av[i]);
		s_tab[i].str = av[i];
		s_tab[i].copy = malloc(sizeof(char) * (ft_strlen(av[i]) + 1));
		ft_strcpy(s_tab[i].copy, av[i]);
		i++;
	}
	s_tab[i].size = 0;
	s_tab[i].str = '\0';
	s_tab[i].copy = '\0';
	return (s_tab);
}
