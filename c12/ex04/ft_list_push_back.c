/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 15:03:12 by genouf            #+#    #+#             */
/*   Updated: 2022/02/24 11:40:01 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*elem;
	t_list	*tmp;

	elem = ft_create_elem(data);
	if (*begin_list == 0)
	{
		*begin_list = elem;
		return ;
	}
	tmp = *begin_list;
	while (tmp->next)
	{
		tmp = tmp->next;
	}
	tmp->next = elem;
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
	t_list	*elem1 = ft_create_elem("lol");
	t_list	*elem2 = ft_create_elem("bsq");	
	t_list	*elem3 = ft_create_elem("stdin");
	t_list	*elem4 = ft_create_elem("trauma");	

	elem1->next = elem2;
	elem2->next = elem3;
	elem3->next = elem4;
	ft_list_push_back(&elem1, "mdr");
	ft_print_all_elem(elem1);
}*/
