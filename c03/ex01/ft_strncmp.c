/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 12:39:11 by genouf            #+#    #+#             */
/*   Updated: 2022/02/08 10:00:24 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (n == 0)
		return (0);
	i = 0;
	while (s1[i] == s2[i] && s1[i] && i < n - 1 && s2[i])
		i++;
	return (s1[i] - s2[i]);
}

/*#include <stdio.h>
int	main()
{
	char	str[] = "A";
	char	str1[] = "C";

	printf("%d", ft_strncmp(str, str1, 1));
	return (0);
}*/
