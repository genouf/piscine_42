/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchesnea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 14:57:01 by hchesnea          #+#    #+#             */
/*   Updated: 2022/02/20 11:41:13 by tmejri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	char	*nbr;
	char	**tab;
	int		len;

	if (argc < 2 || argc > 3)
	{
		ft_putstr("Error\n");
		return (0);
	}
	len = 0;
	if (argc == 2)
	{
		len = ft_strlen(argv[1]);
		nbr = malloc(sizeof(char) * len + 1);
		nbr = mutatoi(argv[1]);
	}
	else if (argc == 3)
	{
		len = ft_strlen(argv[2]);
		nbr = malloc(sizeof(char) * len + 1);
		nbr = mutatoi(argv[2]);
	}
	if (nbr[0] == 'n')
	{
		ft_putstr("Error\n");
		return (0);
	}		
	len = 0;
	len = tab_len(nbr);
	tab = malloc(sizeof(char *) * (len + 1));
	to_tab(nbr, tab, len);
	free(nbr);
/*
	int	l = 0;
	while (l < len)
	{
		printf("%s   ", tab[l]);
		l++;
	}
	printf("\n");
//up is just debugg*/

/* From here, **tab stocks all the values to search into the dict
			note : it must be read from the end to the start
	len, is the number of string contained into **tab */
*/
	free(tab);
	return (0);
}
