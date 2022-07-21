/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sqr_object.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsankola <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 15:34:24 by tsankola          #+#    #+#             */
/*   Updated: 2022/07/19 15:39:29 by tsankola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "bsq.h"
#include <stdlib.h>
#include <unistd.h>

t_sqr_obj	*constr_sqr(int x, int y, int side)
{
	t_sqr_obj	*sqr_obj;

	sqr_obj = malloc(sizeof(t_sqr_obj));
	if (sqr_obj != NULL)
	{
		sqr_obj->x = x;
		sqr_obj->y = y;
		sqr_obj->side = side;
	}
	return (sqr_obj);
}

void	destruct_sqr(t_sqr_obj *sqr_obj)
{
	if (sqr_obj != NULL)
		free(sqr_obj);
}

t_sqr_obj	*pick_sqr(t_sqr_obj *sq1, t_sqr_obj *sq2)
{
	if (sq1 == NULL || sq2->side > sq1->side || sq2->y < sq1->y
		|| (sq1->y == sq2->y && sq2->x < sq1->x))
	{
		destruct_sqr(sq1);
		return (sq2);
	}
	else if (sq1->side > sq2->side || sq1->y < sq2->y
		|| (sq1->y == sq2->y && sq1->x < sq2->x))
	{
		destruct_sqr(sq2);
		return (sq1);
	}
	write(2, "Could not choose sqr\n", 24);
	exit(128);
}
