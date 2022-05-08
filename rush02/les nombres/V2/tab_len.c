/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_len.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchesnea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 18:38:55 by hchesnea          #+#    #+#             */
/*   Updated: 2022/02/20 11:34:43 by tmejri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	tab_len(char *nbr)
{
	int	length;
	int	k;
	int	j;

	k = 1;
	j = 0;
	length = 0;
	while (nbr[j])
	{
		if (nbr[j] != '0')
			length++;
		j++;
	}
	if (nbr[j - 2] == '1' && nbr[j - 1] != '0')
		length--;
	j--;
	while (j >= 0)
	{
		if (k != 3)
		{
			k++;
			j--;
		}
		else
		{
			if (nbr[j] != '0')
				length++;
			j--;
			if (j > 0)
				length++;
			k = 1;
		}
	}
	return (length);
}
