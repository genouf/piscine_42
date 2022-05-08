/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 10:12:44 by genouf            #+#    #+#             */
/*   Updated: 2022/02/19 12:30:02 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_sort_string_tab(char **tab)
{
	int		i;
	int		size;
	char	*tmp;

	i = 0;
	size = ft_strlen(tab);
	while (i < size - 1)
	{
		if (ft_strcmp(tab[i], tab[i + 1]) > 0)
		{
			tmp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = tmp;
			i = -1;
		}
		i++;
	}
}

/*#include <stdio.h>
int	main()
{
	char *str[4];
	
	str[0] = "b";
	str[1] = "c";
	str[2] = "a";
	str[3] = '\0';

	ft_sort_string_tab(str);
	printf("%s", str[0]);
	printf("%s", str[1]);
	printf("%s", str[2]);
}*/
