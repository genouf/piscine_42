/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchesnea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 14:57:01 by hchesnea          #+#    #+#             */
/*   Updated: 2022/02/19 14:57:04 by hchesnea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"
#include <stdlib.h>

int main(int argc, char *argv[])
{
	long int	nbr;
	int			*tab;
	int			len;
	
	if (argc < 2 || argc > 3)
	{
		ft_putstr("Error\n");
		return (0);
	}

	if(argc == 2)
		nbr = ft_atoi(argv[1]);
	else if(argc == 3)
		nbr = ft_atoi(argv[2]);
	if(nbr < 0 || nbr > 4294967295)
	{
		ft_putstr("Error\n");
		return (0);
	}
	len = 0;
	len = tab_len(nbr);
	tab = malloc(sizeof(int) * len);
	to_tab(nbr, tab, len);	
	
	
	int l = 0;
	while (l < len)
	{
		printf("%d  ", tab[l]);	
		l++;
	}
	printf("\n");
	free(tab);
	return (0);
}
