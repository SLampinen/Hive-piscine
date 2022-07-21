/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slampine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 09:58:27 by slampine          #+#    #+#             */
/*   Updated: 2022/07/14 15:19:30 by slampine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
typedef struct		s_btree
{
	struct s_btree 	*parent;
	struct s_btree 	*right;
	struct s_btree 	*left;
	void			*data;

}					t_btree;
