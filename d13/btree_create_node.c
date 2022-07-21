/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slampine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 12:33:48 by slampine          #+#    #+#             */
/*   Updated: 2022/07/14 14:40:59 by slampine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "ft_btree.h"
t_btree *btree_create_node(void *item)
{
	t_btree* tmp;
	tmp = NULL;
	tmp=(t_btree *)malloc(sizeof(t_btree));
	tmp->left=NULL;
	tmp->right=NULL;
	tmp->data=item;
	return(tmp);
}

