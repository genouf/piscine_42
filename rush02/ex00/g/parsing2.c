/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 18:29:04 by genouf            #+#    #+#             */
/*   Updated: 2022/02/20 18:21:56 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	key_size(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != ':')
	{
		count++;
		i++;
	}
	return (count);
}

int	word_size(char *str, int i)
{
	int	count;

	count = 0;
	while (str[i])
	{
		count++;
		i++;
	}
	return (count);
}

char	*ft_atoi_string(char *str)
{
	int	i;

	i = 0;
	while (str[i] >= '0' && str[i] <= '9')
		i++;
	str[i] = '\0';
	return (str);
}

char	**ft_split_rush(char *str)
{
	char	**result;
	int		i;
	int		j;
	int		count;

	result = (char **)malloc(sizeof(char *) * 3);
	result[0] = (char *)malloc(sizeof(char) * (key_size(str)+ 1));
	i = -1;
	j = 0;
	while (i++ < key_size(str) - 1)
		result[0][j++] = str[i];
	result[0][j] = '\0';
	result[0] = ft_atoi_string(result[0]);
	//printf("%c", str[i]);
	while (str[i] == ' ' || str[i] == ':')
		i++;
	
	result[1] = (char *)malloc(sizeof(char) * (word_size(str, i) + 1));
	j = 0;
	count = word_size(str, i);
	while (j <= count)
		result[1][j++] = str[i++];
	result[1][j] = '\0';
	result[2] = '\0';
	return (result);
}

/*#include <stdio.h>
int	main(void)
{
	char **result;
	char str[] = "0: zero";

	result = ft_split_rush(str);
	printf("%s\n", result[0]);
	printf("%s", result[1]);
}*/
