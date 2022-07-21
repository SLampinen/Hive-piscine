/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stdin_to_list.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofoto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 16:52:23 by jofoto            #+#    #+#             */
/*   Updated: 2022/07/17 14:23:53 by slampine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "ft_list.h"
void ft_list_push_back(t_list **begin_list, void *data);
t_list	*ft_create_elem(void *data);

/*int	main()
{
	char	*x;
	t_list	*curr_node=NULL;
	t_list	*new_node=NULL;
	t_list	**root=NULL;

	read(0, x, 1);
	curr_node = ft_create_elem(x);
	if (curr_node == NULL)
		exit (1);
	printf("%s",curr_node->data);
	root = &curr_node;
	while (read(0, x, 1) == 1)
	{
		new_node = ft_create_elem(x);
		if (new_node == NULL)
			exit(1);
		printf("%s",curr_node->data);
		curr_node->next = new_node;
		curr_node = curr_node->next;
	}
	curr_node = *root;
	printf("%s\n",*curr_node);
	//printf("%s", curr_node->data);
	// test                  */
	/*while (curr_node != NULL)
	{
		printf("Looping");
		printf("%s", curr_node->data);
		curr_node = curr_node->next;
	}
}*/

int	main()
{
	char	*x;
	t_list	*curr_node=NULL;
	t_list	*new_node=NULL;
	t_list	**root=NULL;

	read(0, x, 1);
	curr_node = ft_create_elem(x);
	if (curr_node == NULL)
		exit (1);
	printf("%s\n",curr_node->data);
	root = &curr_node;
	printf("%s\n",root);
	printf("%s\n",*curr_node);
	while (read(0, x, 1) == 1)
	{
		ft_list_push_back(root, x);
		printf("%s",curr_node->data);
	}
	curr_node = *root;
	printf("%s\n",*curr_node);
	//printf("%s", curr_node->data);
	/* ************** test **************** */
	while (curr_node != NULL)
	{
		printf("Looping");
		printf("%s", curr_node->data);
		curr_node = curr_node->next;
	}
}
