/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 16:57:04 by genouf            #+#    #+#             */
/*   Updated: 2022/02/03 17:05:29 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;

	c = *a / *b;
	*b = *a % *b;
	*a = c;
}

/*#include <stdio.h>
int	main()
{
	int a = 15;
	int b = 6;

	ft_ultimate_div_mod(&a, &b);
	printf("%d, %d", a, b);
}*/
