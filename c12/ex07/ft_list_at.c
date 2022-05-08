/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 10:40:27 by genouf            #+#    #+#             */
/*   Updated: 2022/02/24 11:38:00 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	while (begin_list && nbr)
	{
		begin_list = begin_list->next;
		nbr--;
	}
	return (begin_list);
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
