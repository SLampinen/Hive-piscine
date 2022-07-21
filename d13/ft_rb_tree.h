/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rb_tree.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slampine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 10:09:22 by slampine          #+#    #+#             */
/*   Updated: 2022/07/14 11:20:04 by slampine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

enum e_rb_color
{
	RB_BLACK;
	RB_RED;
};

typedef struct		s_rb_node
{
	struct s_rb_node 	*parent;
	struct s_rb_node 	*right;
	struct s_rb_node 	*left;
	void 				data;
	enum e_rb_color		color;
}						t_rb_node;
