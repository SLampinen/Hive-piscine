/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsankola <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 15:03:09 by tsankola          #+#    #+#             */
/*   Updated: 2022/07/20 19:10:05 by slampine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef BSQ_H
# define BSQ_H

typedef struct bsq_object
{
	int		height;
	int		width;
	char	empty;
	char	obstacle;
	char	full;
	char	*map;
}			t_bsq_obj;

typedef struct square_object
{
	int	x;
	int	y;
	int	side;
}		t_sqr_obj;

t_bsq_obj	*construct_bsq_object(void);

void		destruct_bsq_object(t_bsq_obj **bsq_obj);

int			set_map(t_bsq_obj *bsq_obj, char *map);

void		fill_space_at(t_bsq_obj *bsq_obj, int x, int y);

t_sqr_obj	*constr_sqr(int x, int y, int side);

void		destruct_square(t_sqr_obj *sqr_obj);

t_sqr_obj	*pick_sqr(t_sqr_obj *sq1, t_sqr_obj *sq2);

char		get_char_at(t_bsq_obj *bsq_obj, int x, int y);

int			get_size_of_square_drawn_at(t_bsq_obj *bsq_obj, int x, int y);

t_sqr_obj	*get_biggest_square_brute_force(t_bsq_obj *bsq_obj);

int			ft_linelen(char *str);

void		ft_initialize_array(int ar[], int length);

int			detect_overflow_addition(int a, int b);

int			detect_overflow_multiplication(int a, int b);

#endif
