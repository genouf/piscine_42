/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 11:48:36 by genouf            #+#    #+#             */
/*   Updated: 2022/02/19 12:14:19 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

typedef void	(*t_operation)(int, int);
void	init_operator(char *str);
void	init_fonctions(t_operation *tab);
int		proces_nbr(char *str, int i, int j);
int		ft_atoi(char *str);
void	add(int a, int b);
void	minus(int a, int b);
void	multiply(int a, int b);
void	divide(int a, int b);
void	modulo(int a, int b);
void	ft_putchar(char c);
void	ft_putnbr(int nb);

#endif
