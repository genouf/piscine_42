/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 09:50:22 by genouf            #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2022/02/22 13:00:43 by genouf           ###   ########.fr       */
=======
/*   Updated: 2022/02/22 17:31:49 by aselnet          ###   ########.fr       */
>>>>>>> 5d1300b9b5624d39dbc7f7e0a32dad70b785712f
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

/* GENERIQUE */
# include<stdlib.h>
# include<fcntl.h>
# include<unistd.h>
# include <stdio.h> // a enlever (printf)

/* STRUCT */
typedef struct s_coord
{
	int row;
	int col;
}	t_coord;

typedef struct s_map_ID
{
	int		lines;
	int		columns;
	char	empty;
	char	pillar;
	char	full;
}	t_map_ID;
/* BASIC FUNCTIONS */
int		len(char *str);
void	ft_putstr(int fd, char *str);

/* MAP PARSING */
char	*ft_strcpy(char *dest, char *src);
char	*ft_strdup(char *src, int size);
char	**initialize_grid(int col, int line, int fd);
char	**map_parsing(int line, int col);

/* MAP VALIDITY */
int		ft_count_map_columns(char *map);
int		ft_count_map_lines(char *map);
void	ft_fetch_map_charbase(char *map, char *base);
char	*ft_fetch_first_line(char *map,char *line0);
int		ft_check_map_charbase(char *map, char *base);
int		ft_check_map_validity(char *map);
void	ft_make_base(char *line0, char *base);
int		ft_lines_are_equal(char *map, int line_size);
int		ft_format_is_valid(char *map);

#endif
