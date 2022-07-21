/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofoto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 19:03:11 by jofoto            #+#    #+#             */
/*   Updated: 2022/07/13 22:33:55 by jofoto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"
#include <stdio.h>

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*new_node;
	t_list	*curr_node;

	new_node = ft_create_elem(data);
	curr_node = *begin_list;
	if (new_node == NULL)
		{
		printf("Failed");
			exit(1);
		}
		while (curr_node->next != NULL)
		{
			curr_node = curr_node->next;
		}
		curr_node->next = new_node;
}
