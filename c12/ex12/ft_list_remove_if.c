/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 12:12:43 by genouf            #+#    #+#             */
/*   Updated: 2022/02/24 13:11:25 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)(),
void (*free_fct)(void *))
{
	t_list	*next;
	t_list	*current;
	t_list	*prev;

	current = *begin_list;
	next = current->next;
	prev = 0;
	while (current)
	{
		if ((*cmp)((char *)current->data, (char *)data_ref) == 0)
		{
			(*free_fct)(current->data);
			free(current);
			current = next;
			if (prev)
				prev->next = current;
			if (current)
				next = current->next;
		}
		else
		{
			current = next;
			if (current)
				next = current->next;
			prev = current;
		}
	}
}

#include <stdio.h>
void	free_fct(void *data)
{
	//free(data);
	printf("j'aime le pain");
}

int	ft_cmp(char *two, char *one)
{
	if (two[0] == one[0])
		return(0);
	else (1);
}

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
	t_list	*elem4 = ft_create_elem("lllll");	
	
	elem1->next = elem2;
	elem2->next = elem3;
	elem3->next = elem4;
	ft_list_remove_if(&elem1, "l", &ft_cmp, &free_fct);
	ft_print_all_elem(elem1);
}
