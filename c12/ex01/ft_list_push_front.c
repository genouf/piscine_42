/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 12:11:48 by genouf            #+#    #+#             */
/*   Updated: 2022/02/24 11:40:18 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_list.h"
#include <stdlib.h>

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*elem1;

	elem1 = ft_create_elem(data);
	if (*begin_list != 0)
		elem1->next = *begin_list;
	*begin_list = elem1;
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
	ft_print_all_elem(*begin_list);
}*/
