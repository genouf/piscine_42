/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 17:11:07 by genouf            #+#    #+#             */
/*   Updated: 2022/02/13 18:28:06 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_error(void);
int		ft_strlen(char *str);
int		check_string(char *str);
int		left_check_value(int **grid, int row);
int		right_check_value(int **grid, int row);
int		up_check_value(int **grid, int row);
int		down_check_value(int **grid, int row);
int		ft_check_doublon_row(int **grid, int row, int col, int value);
int		ft_check_doublon_col(int **grid, int row, int col, int value);
int		ultimate_check(int **grid, int row, int col, int value);
void	ft_atoi_rush(char *str, int *tab);
int		**initialize_grid(void);
int		initialize_value_row(int **grid, int *tab, int i);
void	initialize_value_col(int **grid, int *tab, int i);
int		is_valid(int **grid, int row, int col);
void	ft_print(int **grid);
