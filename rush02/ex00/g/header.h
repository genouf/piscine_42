/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 14:48:22 by genouf            #+#    #+#             */
/*   Updated: 2022/02/20 17:42:28 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

/* GENERIQUE */
# include<unistd.h>
# include<stdlib.h>
# include<fcntl.h>

/* DISPLAY */
void	ft_putstr(char *str);
void	ft_putchar(char c);
void	ft_putnbr(int nb);
int		ft_strlen(char ***str);

/* PARSING */
int		ft_strcmp(char *s1, char *s2);
int		size_buf(int fd);
int		count_line(void);
char	***transform(int fd, int fd2, int x);
char	***dict_parsing(void);

/* PARSING 2 */
int		key_size(char *str);
int		word_size(char *str, int i);
char	*ft_atoi_string(char *str);
char	**ft_split_rush(char *str);

/* CHECK_DICT */
int		check_line(char *str);
int		check_line_end(char *str, int i, int check);

#endif
