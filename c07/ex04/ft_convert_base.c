/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 11:47:13 by genouf            #+#    #+#             */
/*   Updated: 2022/02/14 17:32:13 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_unvalid(char c)
{
	if (c == '+' || c == '-' || c == ' ')
		return (1);
	else if (c >= 9 && c <= 13)
		return (1);
	else
		return (0);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	check_base(char *str)
{
	int	i;
	int	j;
	int	size;

	size = ft_strlen(str);
	i = 0;
	if (size == 0 || size == 1)
		return (0);
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (is_unvalid(str[i]) || is_unvalid(str[j]))
				return (0);
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	is_in(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (c == str[i])
			return (1);
		i++;
	}
	return (0);
}

int	find_index(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (c == str[i])
			return (i);
		i++;
	}
	return (0);
}
