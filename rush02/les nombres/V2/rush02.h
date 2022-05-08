/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchesnea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 14:50:46 by hchesnea          #+#    #+#             */
/*   Updated: 2022/02/20 11:42:08 by tmejri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define RUSH02_H

# include <unistd.h>
# include <stdlib.h>

# include <stdio.h>

void	ft_putstr(char *str);
char	*mutatoi(char *str);
char	**to_tab(char *nbr, char *tab[], int len);
int		tab_len(char *nbr);
int		ft_strlen(char *str);
char	*ft_mutnbr(int i, char tab[]);

#endif
