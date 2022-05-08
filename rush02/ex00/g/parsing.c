/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 16:25:40 by genouf            #+#    #+#             */
/*   Updated: 2022/02/20 18:26:17 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
		i++;
	return (s1[i] - s2[i]);
}

int	size_buf(int fd)
{
	int		count;
	int		ret;
	char	bufs[2];

	ret = read(fd, bufs, 1);
	count = 1;
	while (ret)
	{
		bufs[ret] = '\0';
		if (ft_strcmp(bufs, "\n") == 0)
			return (count);
		count++;
		ret = read(fd, bufs, 1);
	}
}

int	count_line(void)
{
	int		fd;
	int		ret;
	char	*buf;
	int		size_b;
	int		count;

	count = 0;
	fd = open("dict.txt", O_RDONLY);
	if (fd == -1)
		return (0);
	while (ret)
	{
		size_b = size_buf(fd);
		ret = read(fd, buf, size_b);
		if (size_b > 1)
			count++;
	}
	if (close(fd) == -1)
		return (0);
	return (count);
}

char	***transform(int fd, int fd2, int x)
{
	int		ret;
	int		size_b;
	char	buf[1000];
	char	buf1[2];
	char	***final_dict;

	final_dict = (char ***)malloc(sizeof(char **) * (count_line() + 1));
	size_b = 1;
	while (size_b)
	{
		size_b = size_buf(fd);
		if (size_b > 1)
		{
			ret = read(fd2, buf, size_b);
			buf[ret] = '\0';
			/*if (check_line(buf) != 3)
			{
				final_dict[1] = '\0';
				return (final_dict);
			}*/
			final_dict[x] = ft_split_rush(buf);
			x++;
		}
		else
			read(fd2, buf1, 1);
	}
	final_dict[x] = '\0';
	return (final_dict);
}

char	***dict_parsing(void)
{
	int		fd;
	int		fd2;
	char	***final_dict;

	fd = open("dict.txt", O_RDONLY);
	fd2 = open("dict.txt", O_RDONLY);
	if (fd == -1 || fd2 == -1)
		ft_putstr("open() failed\n");
	final_dict = transform(fd, fd2, 0);
	if (close(fd) == -1 || close(fd2) == -1)
		ft_putstr("close() failed\n");
	return (final_dict);
}

int	main(void)
{
	char	***final_dict;
	int i;

	final_dict = dict_parsing();
	i = 0;
	/*while (i < 41)
	{
		printf("%s", final_dict[i][0]);
	}*/
	printf("%s", final_dict[0][0]);
	free(final_dict);
}
