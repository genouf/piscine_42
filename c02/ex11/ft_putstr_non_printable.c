/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 20:04:34 by genouf            #+#    #+#             */
/*   Updated: 2022/02/07 08:46:01 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	to_hexa(unsigned char c)
{
	const char	str[] = "0123456789abcdef";

	ft_putchar(str[c / 16]);
	ft_putchar(str[c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (*str < 32 || *str > 126)
		{
			ft_putchar('\\');
			to_hexa(*str);
		}
		else
			ft_putchar(*str);
		str++;
	}
}

/*int main()
{
	//char	str[] = {7, 127, 86, 128, 8, 110, 46, 96};
	char	str[] = {7, -12, -11};
	
	ft_putstr_non_printable(str);
	return (0);
}*/
