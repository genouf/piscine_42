/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 09:57:02 by genouf            #+#    #+#             */
/*   Updated: 2022/02/16 09:20:30 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	strlen_all(char **strs, int size, char *sep)
{
	int	i;
	int	size_sep;
	int	total_size;

	i = -1;
	total_size = 0;
	size_sep = ft_strlen(sep);
	while (++i < size)
		total_size = total_size + ft_strlen(strs[i]) + size_sep;
	return (total_size - size_sep);
}

char	*strcat_all(char *dest, char **strs, int size, char *sep)
{
	int	i;
	int	j;
	int	x;

	i = 0;
	x = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			dest[x++] = strs[i][j++];
		j = 0;
		while (sep[j] && i != size -1)
			dest[x++] = sep[j++];
		i++;
	}
	dest[x] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;

	if (size <= 0)
	{
		dest = (char *)malloc(sizeof(char));
		if (!dest)
			return (NULL);
		*dest = '\0';
	}
	else
	{
		dest = malloc(sizeof(char) * strlen_all(strs, size, sep) + 1);
		if (!dest)
			return (NULL);
		dest = strcat_all(dest, strs, size, sep);
	}
	return (dest);
}

/*int	main(int argc, char **argv)
{
	printf("output___said___this___is___a___success :\n");
	printf("%s\n",  ft_strjoin(argc, argv, "---"));
}*/
