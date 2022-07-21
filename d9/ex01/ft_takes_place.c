/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slampine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 11:01:39 by slampine          #+#    #+#             */
/*   Updated: 2022/07/07 11:26:03 by slampine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_takes_place(int hour)
{
	int		hourend;
	char	hourstdef;
	char	hourenddef;

	hourend = hour + 1;
	hourstdef = 'A';
	hourenddef = 'P';
	if (hour == 12)
	{
	hourend = hourend % 12;
	}
	else if (hour < 12)
	{
	hour = hour % 12;
	hourend = hourend % 12;
	hourenddef = 'A';
		if (hourend == 11)
		hourenddef = 'P';
	}
	else if (hour > 12)
	{
	hour = hour % 12;
	hourend = hourend % 12;
	hourstdef = 'P';
	}
	printf("THE FOLLOWING TAKES PLACE BETWEEN");
	printf(" %i %c.M AND %i %c.M.\n", hour, hourstdef, hourend, hourenddef);
}
