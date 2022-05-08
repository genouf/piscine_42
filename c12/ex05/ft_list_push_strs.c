/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 18:58:45 by genouf            #+#    #+#             */
/*   Updated: 2022/02/24 11:41:08 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*elem1;

	elem1 = ft_create_elem(data);
	if (*begin_list != 0)
		elem1->next = *begin_list;
	*begin_list = elem1;
}

t_list	*ft_list_push_strs(int size, char **strs)
{
	t_list	*elem1;
	int		i;

	if (size == 0)
		return (0);
	i = 0;
	elem1 = ft_create_elem(strs[i]);
	while (i < size - 1)
	{
		i++;
		ft_list_push_front(&elem1, strs[i]);
	}
	return (elem1);
}

/*#include <stdlib.h>
#include <stdio.h>

t_list	*ft_create_elem(void *data)
{
	t_list	*elem1;
	
	elem1 = malloc(sizeof(t_list));
	elem1->data = data;
	elem1->next = 0;
	return (elem1);	
}

void	ft_print_all_elem(t_list *elem)
{
	while (elem)
	{
		printf("%s\n", (char *)elem->data);
		elem = elem->next;
	}
}

int	main()
{
	char *strs[]= {"hvjh", "jhuh"};
	t_list *elem;

	elem = ft_list_push_strs(0, 0);	
	ft_print_all_elem(elem);
}*/
