/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 11:42:02 by genouf            #+#    #+#             */
/*   Updated: 2022/02/24 11:53:55 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list	*list_ptr;

	list_ptr = begin_list;
	while (list_ptr)
	{
		(*f)(list_ptr->data);
		list_ptr = list_ptr->next;
	}
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
	t_list	*elem1 = ft_create_elem("lol");
	t_list	*elem2 = ft_create_elem("bsq");	
	t_list	*elem3 = ft_create_elem("stdin");
	t_list	*elem4 = ft_create_elem("trauma");	

	elem1->next = elem2;
	elem2->next = elem3;
	elem3->next = elem4;
	printf("%s", (char *)ft_list_at(elem1, 4));
	//ft_print_all_elem(elem1);
}*/
