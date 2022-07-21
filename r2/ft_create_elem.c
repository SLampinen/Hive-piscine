/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofoto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 19:03:11 by jofoto            #+#    #+#             */
/*   Updated: 2022/07/16 17:30:19 by jofoto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list	*root;

	root = (t_list*)malloc(sizeof(t_list));
	root->data = data;
	root->next = NULL;
	return (root);
}

/*#include <stdio.h>

int main()
{
	t_list *root = ft_create_elem(5);
	printf("%i", root->data);
	return 0;
}*/
