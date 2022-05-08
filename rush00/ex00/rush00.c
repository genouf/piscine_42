/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 11:59:17 by jthuysba          #+#    #+#             */
/*   Updated: 2022/02/05 18:36:06 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_line(int x, char a, char b)
{
	int	i;

	i = 0;
	ft_putchar(a);
	while (++i < x - 1)
		ft_putchar(b);
	if (x != 1)
		ft_putchar(a);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;

	i = 0;
	while (++i <= y)
	{
		if (x <= 0 || y <= 0)
			break ;
		if (i == 1 || i == y)
			print_line(x, 'o', '-');
		else
			print_line(x, '|', ' ');
	}
}
