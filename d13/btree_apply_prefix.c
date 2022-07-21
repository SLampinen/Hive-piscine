/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_prefix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slampine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 14:41:17 by slampine          #+#    #+#             */
/*   Updated: 2022/07/14 14:44:13 by slampine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_btree.h"

void btree_apply_prefix(t_btree *root, void (*applyf)(void *))
{
if(btree)
	{
	applyf(root->data);
	applyf(root->left);
	applyf(root->right);
	}
}