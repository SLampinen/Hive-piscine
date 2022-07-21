/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slampine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 11:53:00 by slampine          #+#    #+#             */
/*   Updated: 2022/07/15 11:53:02 by slampine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
btree_create_node(void *item);
void btree_insert_data(t_btree **root, void *item, int (*cmpf)(void *, void *))
{
    if(!(*root))
    {
        btree_create_node(*item);
    }
if(item < (*root)->item)
{
    btree_insert_data(&(*root)->left,item);
}
else if(item >= (*root)->item)
{
    btree_insert_data(&(*root)->right,item);
}
}