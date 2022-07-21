/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slampine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 18:30:22 by slampine          #+#    #+#             */
/*   Updated: 2022/07/02 19:16:56 by slampine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_recursive_power(int nb, int power);

int	ft_recursive_power(int nb, int power)
{
	if (power > 0)
	{
		nb = nb * ft_recursive_power(nb, power - 1);
		return (nb);
	}
	else if (power == 0)
		return (1);
	else
		return (0);
}
