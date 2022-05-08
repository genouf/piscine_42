/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 14:44:20 by genouf            #+#    #+#             */
/*   Updated: 2022/02/24 11:39:40 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int	count;

	count = 0;
	while (begin_list)
	{
		begin_list = begin_list->next;
		count++;
	}
	return (count);
}

/*#include <stdio.h>

void	ft_print_all_elem(t_list *elem)
{
	while (elem)
	{
		printf("%s\n", (char *)elem->data);
		elem = elem->next;
	}
}

t_list	*ft_create_elem(void *data)
{
	t_list	*elem1;
	
	elem1 = malloc(sizeof(t_list));
	elem1->data = data;
	elem1->next = 0;
	return (elem1);	
}

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *elem1;

	elem1 = ft_create_elem(data);
	if (*begin_list != 0)
		elem1->next = *begin_list;
	*begin_list = elem1;
}

int	main()
{
	t_list	**begin_list;

	t_list	*elem1 = ft_create_elem("lol");
	t_list	*elem2 = ft_create_elem("bsq");	
	t_list	*elem3 = ft_create_elem("stdin");
	t_list	*elem4 = ft_create_elem("trauma");	

	begin_list = malloc(sizeof(t_list*));
	*begin_list = elem1;
	elem1->next = elem2;
	elem2->next = elem3;
	elem3->next = elem4;
	ft_list_push_front(begin_list, "mdr");
	*begin_list = 0;
	ft_print_all_elem(*begin_list);
	printf("%d", ft_list_size(*begin_list));
}*/
