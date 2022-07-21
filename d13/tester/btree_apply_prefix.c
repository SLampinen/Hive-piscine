/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_prefix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slampine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 14:41:17 by slampine          #+#    #+#             */
/*   Updated: 2022/07/14 15:20:55 by slampine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_btree.h"

void	btree_apply_prefix(t_btree *root, void (*applyf)(void *))
{
	if (root)
	{
		applyf(root->data);
		applyf(root->left);
		applyf(root->right);
	}
}
