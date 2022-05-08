/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 18:33:58 by genouf            #+#    #+#             */
/*   Updated: 2022/02/15 11:13:20 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	cut(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	count_word(char *str, char *charset)
{
	int	i;
	int	word;
	int	check;

	word = 0;
	i = 0;
	while (str[i])
	{
		if (cut(str[i], charset))
			check = 1;
		else
			check = 0;
		if (check == 0 && ((cut(str[i + 1], charset) || str[i + 1] == '\0')))
			word++;
		i++;
	}
	return (word);
}

int	count_size(int i, char *str, char *charset)
{
	int	size;

	size = 1;
	while (!cut(str[i], charset) && str[i])
	{
		size++;
		i++;
	}
	return (size);
}

char	**ft_split(char *str, char *charset)
{
	char	**finals_str;
	int		i;
	int		j;
	int		x;

	finals_str = (char **)malloc(sizeof(char *) * count_word(str, charset) + 1);
	i = -1;
	x = -1;
	while (str[++i])
	{
		if (!cut(str[i], charset))
		{
			x += 1;
			j = -1;
			finals_str[x] = malloc(sizeof(char) * count_size(i, str, charset));
		}
		i -= 1;
		while (!cut(str[++i], charset) && str[i])
			finals_str[x][++j] = str[i];
		if (!cut(str[i - 1], charset) && x != -1)
			finals_str[x][j + 1] = '\0';
	}
	finals_str[x + 1] = '\0';
	return (finals_str);
}

/*#include <stdio.h>
int	main()
{
	char **str;

	str = ft_split("##This#djfk####@&a&$#test##!", "#$&@");
	printf("%s\n", str[0]);
	printf("%s\n", str[1]);
	printf("%s\n", str[2]);
	printf("%s\n", str[3]);
	printf("%s\n", str[4]);
}*/
