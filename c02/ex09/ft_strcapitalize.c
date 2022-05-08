/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 15:23:48 by genouf            #+#    #+#             */
/*   Updated: 2022/02/07 08:08:07 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_type(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (3);
	else if (c >= 'a' && c <= 'z')
		return (2);
	else if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	j = 0;
	while (str[j])
	{
		i = 0;
		while (is_type(str[j]) != 0)
		{	
			if (i++ == 0 && is_type(str[j]) == 2)
				str[j] -= 32;
			if (is_type(str[j]) == 3 && i != 1)
				str[j] += 32;
			j++;
		}
		j++;
	}
	return (str);
}

/*#include <stdio.h>
int main()
{
	char str[] = "salut, coMMent tu vas ? 42mots quarante-deux; cinquante+et+un";

	ft_strcapitalize(str);
	printf("%s", str);
	return(0);
}*/
