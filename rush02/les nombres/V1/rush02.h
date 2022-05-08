/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchesnea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 14:50:46 by hchesnea          #+#    #+#             */
/*   Updated: 2022/02/19 14:50:48 by hchesnea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define RUSH02_H

#include <unistd.h>
#include <stdlib.h>

#include <stdio.h>

void		ft_putstr(char *str);

int			ft_pow(int i);

long int	ft_atoi(char *str);

int			*to_tab(long int nbr, int *tab, int len);

int			tab_len(long int nbr);

# endif

