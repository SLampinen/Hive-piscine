/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq_operations.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsankola <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 15:02:58 by tsankola          #+#    #+#             */
/*   Updated: 2022/07/20 19:12:47 by slampine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "bsq.h"
#include <stdlib.h>
#include <stdio.h>

int	try_to_make_square(t_bsq_obj *bsq_obj, int x, int y, int side)
{
	int	x1;
	int	y1;

	x1 = x + side - 1;
	y1 = y + side - 1;
	while (x <= x1)
	{
		if (x >= bsq_obj->width
			|| get_char_at(bsq_obj, x, y1) == bsq_obj->obstacle)
			return (0);
		x++;
	}
	while (y <= y1)
	{
		if (y >= bsq_obj->height
			|| get_char_at(bsq_obj, x1, y) == bsq_obj->obstacle)
			return (0);
		y++;
	}
	return (side);
}

int	get_size_of_square_drawn_at(t_bsq_obj *bsq_obj, int x, int y)
{
	int	size;

	size = 1;
	if (!(get_char_at(bsq_obj, x, y) == bsq_obj->obstacle || x < 0 || y < 0
			|| x > bsq_obj->width || y > bsq_obj->height))
	{
		while (try_to_make_square(bsq_obj, x, y, size))
			size++;
	}
	return (size - 1);
}

void	draw_square(t_bsq_obj *bsq_obj, t_sqr_obj *sqr_obj)
{
	int	y;
	int	x;

	y = sqr_obj->y;
	while (y < sqr_obj->y + sqr_obj->side)
	{
		x = sqr_obj->x;
		while (x < sqr_obj->x + sqr_obj->side)
		{
			fill_space_at(bsq_obj, x, y);
			x++;
		}
		y++;
	}
}

t_sqr_obj	*get_biggest_square_brute_force(t_bsq_obj *bsq_obj)
{
	int			x;
	int			y;
	int			max_size;
	t_sqr_obj	*max_sqr_obj;

	max_sqr_obj = NULL;
	y = 0;
	max_size = -1;
	while (y < bsq_obj->height)
	{
		x = 0;
		while (x < bsq_obj->width)
		{
			if (get_size_of_square_drawn_at(bsq_obj, x, y) > max_size)
			{
				max_size = get_size_of_square_drawn_at(bsq_obj, x, y);
				max_sqr_obj = pick_sqr(max_sqr_obj, constr_sqr(x, y, max_size));
			}
			x++;
		}
		y++;
	}
	draw_square(bsq_obj, max_sqr_obj);
	return (max_sqr_obj);
}
