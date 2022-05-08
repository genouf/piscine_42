/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 14:04:40 by genouf            #+#    #+#             */
/*   Updated: 2022/02/19 15:37:42 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

#include <stdio.h>
int	main(int argc, char**argv)
{
	FILE* file = NULL;
	char	str[52];
	char **tmp;
	int i;

	tmp = (char **)malloc(sizeof(char *) * 2);
	file = fopen("dict.txt", "r");

	if (file != NULL)
	{
		fgets(str, 52, file);
		tmp = ft_split(str, " :");
		fclose(file);
		printf("%s", tmp[0]);
		printf("%s", tmp[1]);
	}
	else
		return (1);	

	return (0);
}
