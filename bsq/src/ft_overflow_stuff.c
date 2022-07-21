/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_overflow_stuff.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsankola <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 18:26:47 by tsankola          #+#    #+#             */
/*   Updated: 2022/07/20 18:37:12 by tsankola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef INT_MAX
# define INT_MAX 2147483647
#endif
#ifndef INT_MIN
# define INT_MIN -2147483648
#endif

int	detect_overflow_addition(int a, int b)
{
	if (b > 0 && a > INT_MAX - b)
		return (1);
	if (b < 0 && a < INT_MIN - b)
		return (-1);
	return (0);
}

int	detect_overflow_multiplication(int a, int b)
{
	if (b != 0 && a > INT_MAX / b)
		return (1);
	if (b != 0 && a < INT_MIN / b)
		return (-1);
	return (0);
}
