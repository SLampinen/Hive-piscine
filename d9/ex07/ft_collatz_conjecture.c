/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slampine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 17:07:38 by slampine          #+#    #+#             */
/*   Updated: 2022/07/07 18:13:45 by slampine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>//Remove before pushing
unsigned int	ft_collatz_conjecture(unsigned int base)
{
	int	res;

	res = 0;
	if (base == 1)
		return (res);
	else if (base % 2 == 0)
		res = ft_collatz_conjecture(base / 2);
	else if (base % 2 == 1)
		res = ft_collatz_conjecture(base * 3 + 1);
	else if (base == 0)
		return (base);
	res++;
	return (res);
}
