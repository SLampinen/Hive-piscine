/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slampine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 13:52:46 by slampine          #+#    #+#             */
/*   Updated: 2022/06/30 11:46:25 by slampine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_is_negative(int n)
{
	if (n<0)
	{		
		ft_putchar('N');
		ft_putchar('/n');
	}
	else
	{
		ft_putchar('P');
		ft_putchar('/n');
	}
}
