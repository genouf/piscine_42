/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 15:36:16 by genouf            #+#    #+#             */
/*   Updated: 2022/02/24 16:16:19 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*tmp;
	void	*swap;
		
	if (!begin_list)
		return ;
	tmp = *begin_list;
	while (begin_list->next)
	{
		if ((*cmp)((*begin_list)->data, (*begin_list)->next->data) > 0)
		{
			swap = begin_list->data;
			(*begin_list)->data = (*begin_list)->next->data;
			(*begin_list)->next->data = swap;
			*begin_list = tmp;
		}
		else
			*begin_list = (*begin_list)->next;
	}
}

void	f_print_all(t_list *begin_list)
{
	while (begin_list)
	{
		printf("%s\n", (char *)begin_list->data);
		begin_list = begin_list->next;
	}
}

int	main()
{
	t_list *elem1;
	t_list *elem2;
	t_list *elem3;
	t_list *elem4;

	elem1->next = elem2;
	elem2->next = elem3;
	elem3->next = elem4;
	
}
