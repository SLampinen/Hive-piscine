/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slampine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 09:58:27 by slampine          #+#    #+#             */
/*   Updated: 2022/07/14 16:22:58 by slampine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_BTREE_H
# define FT_BTREE_H

typedef struct s_btree
{
	struct s_btree	*parent;
	struct s_btree	*right;
	struct s_btree	*left;
	void			*data;
}					t_btree;

t_btree	*btree_create_node(void	*item);
#endif
