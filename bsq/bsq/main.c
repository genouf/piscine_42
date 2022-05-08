/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselnet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 17:40:03 by aselnet           #+#    #+#             */
/*   Updated: 2022/02/22 19:46:20 by aselnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "header.h"

int	ft_arg_validity(char *argv)
{
	int fd;

	fd = open(argv, O_RDONLY);
	if (fd == -1)
	{
		close(fd);
		return (0);
	}
	close(fd);
	return(1);
}

void	ft_create_temp_file(void)
{
	char	buffer[1];
	int		re;
	int		fd;

	fd = open("map", O_WRONLY | O_APPEND | O_CREAT);
	re = 1;
	while (re)
	{
		re = read(0, buffer, 1);
		write(fd, buffer, 1);
	}
	close(fd);
}

int	main(int argc, char **argv)
{
	int i;

	i = 1;
	if (argc == 1)
	{
		ft_create_temp_file();
		if (ft_check_map_validity("map") < 1 || ft_arg_validity("map") < 1)
			ft_putstr(2, "map error\n");
	}

	while (argv[i])
	{
		if (ft_check_map_validity(argv[i]) < 1 || ft_arg_validity(argv[i]) < 1)
			ft_putstr(2, "map error\n");
		i++;
	}

	return (0);
}
