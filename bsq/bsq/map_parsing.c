/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_parsing.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 17:37:11 by genouf            #+#    #+#             */
/*   Updated: 2022/02/22 17:29:03 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		if (src[i] != '\n')
			dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src, int size)
{
	char	*str;

	str = NULL;
	str = (char *)malloc(sizeof(char) * size);
	if (str == NULL)
		return (NULL);
	ft_strcpy(str, src);
	return (str);
}

char	**initialize_grid(int col, int line, int fd)
{
	char	buf[1];
	char	*buffer;
	char	**grid;
	int		ret;
	int		i;

	while (buf[0] != '\n')
		read(fd, buf, 1);
	grid = (char **)malloc(sizeof(char *) * (line + 1));
	buffer = (char *)malloc(sizeof(char) * (col + 2));
	i = 0;
	ret = read(fd, buffer, col + 1);
	while (ret)
	{
		buffer[ret] = '\0';
		grid[i] = ft_strdup(buffer, col + 1);
		ret = read(fd, buffer, col + 1);
		i++;
	}
	free(buffer);
	grid[i] = '\0';
	return (grid);
}

char	**map_parsing(int line, int col)
{
	int		fd;
	char	**grid;
	int		i;

	fd = open("map", O_RDONLY);
	grid = initialize_grid(line, col, fd);
	/*i = 0;
	while (i < 5)
	{
		//printf("%s\n", grid[i]);
		i++;
	}
	//printf("%c", grid[4][4]);
	*/
	close(fd);
	return (grid);
}
