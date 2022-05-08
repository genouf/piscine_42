/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 09:20:53 by genouf            #+#    #+#             */
/*   Updated: 2022/02/08 18:26:09 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count])
	{
		count++;
	}
	return (count);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	size_to_f;

	size_to_f = ft_strlen(to_find);
	if (!(*to_find))
		return (str);
	i = -1;
	while (str[++i])
	{
		j = 0;
		while (to_find[j] == str[j + i] && to_find[j])
			j++;
		if (j == size_to_f)
			return (str += i);
	}
	return (0);
}

/*#include <stdio.h>
#include <bsd/string.h>
int	main()
{
	char	str[] = "";
	char 	str1[] = "fffd";

	printf("1:%s\n", ft_strstr(str, str1));
	printf("2:%s", strstr(str, str1));
}*/
