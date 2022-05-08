/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 12:36:13 by genouf            #+#    #+#             */
/*   Updated: 2022/02/15 09:52:56 by genouf           ###   ########.fr       */
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

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*str;

	str = NULL;
	str = (char *)malloc(sizeof(*str) * (ft_strlen(src) + 1));
	if (str == NULL)
		return (NULL);
	ft_strcpy(str, src);
	return (str);
}

/*#include <stdio.h>
int	main()
{
	char 	str1[] = "Gab";
	char	*str2;

	//printf("%s", str2);
	str2 = ft_strdup(str1);
	printf("%s", str2);
}*/
