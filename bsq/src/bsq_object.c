/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq_object.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsankola <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 15:02:52 by tsankola          #+#    #+#             */
/*   Updated: 2022/07/20 19:30:28 by slampine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "bsq.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

char	get_char_at(t_bsq_obj *bsq_obj, int x, int y)
{
	if (y <= bsq_obj->height && x <= bsq_obj->width && y >= 0 && x >= 0)
		return (*(bsq_obj->map + y * (bsq_obj->width + 1) + x));
	else
		return ('\0');
}

void	fill_space_at(t_bsq_obj *bsq_obj, int x, int y)
{
	if (y < bsq_obj->height && x < bsq_obj->width && y >= 0 && x >= 0)
	{
		if ((*(bsq_obj->map + y * (bsq_obj->width + 1) + x)) == bsq_obj->empty)
			*(bsq_obj->map + y * (bsq_obj->width + 1) + x) = bsq_obj->full;
		else
		{
			printf("failed fill with x%i y%i against width %i and height %i\n", x, y, bsq_obj->width, bsq_obj->height);
			exit(128);
		}
	}
	else
	{
		printf("2 failed fill with x%i y%i\n", x, y);
		exit(129);
	}
}

int	validate_map(t_bsq_obj *bsq_obj, char *map)
{
	int		i;
	int		j;
	char	cur_char;
	int		res;

	res = 1;
	i = 0;
	if (map == NULL)
		res = 0;
	while (i < bsq_obj->height)
	{
		j = 0;
		while (j < bsq_obj->width)
		{
			cur_char = map[i * (bsq_obj->width + 1) + (j++)];
			if (cur_char != bsq_obj->empty && cur_char != bsq_obj->obstacle)
				res = 0;
		}
		cur_char = map[i * (bsq_obj->width + 1) + (j++)];
		if (cur_char != '\n')
			res = 0;
		i++;
	}
	cur_char = map[i * (bsq_obj->width + 1)];
	if (cur_char != '\0')
		res = 0;
	if (res == 0)
		write (2, "map error\n", 10);
	return (res);
}

int	set_map(t_bsq_obj *bsq_obj, char *map)
{
	if (map != NULL)
	{
		bsq_obj->width = ft_linelen(map);
		bsq_obj->map = map;
		if (!validate_map(bsq_obj, map))
			return (0);
		else
			return (1);
	}
	return (0);
}

t_bsq_obj	*construct_bsq_object(void)
{
	t_bsq_obj	*bsq_obj;

	bsq_obj = malloc(sizeof(t_bsq_obj));
	if (!bsq_obj)
		return (0);
	bsq_obj->height = 0;
	bsq_obj->width = 0;
	bsq_obj->empty = '\0';
	bsq_obj->obstacle = '\0';
	bsq_obj->full = '\0';
	bsq_obj->map = NULL;
	return (bsq_obj);
}

void	destruct_bsq_object(t_bsq_obj **bsq_obj)
{
	(*bsq_obj)->height = 0;
	(*bsq_obj)->width = 0;
	(*bsq_obj)->empty = '\0';
	(*bsq_obj)->obstacle = '\0';
	(*bsq_obj)->full = '\0';
	if ((*bsq_obj)->map != NULL)
	{
		free((*bsq_obj)->map);
		(*bsq_obj)->map = NULL;
	}
	free((*bsq_obj));
	(*bsq_obj) = NULL;
}
