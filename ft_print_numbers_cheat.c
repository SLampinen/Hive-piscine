/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slampine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 11:54:35 by slampine          #+#    #+#             */
/*   Updated: 2022/06/29 13:47:30 by slampine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int main()
{
	ft_putchar('0');
	ft_putchar('1');
	ft_putchar('2');
	ft_putchar('3');
	ft_putchar('4');
	ft_putchar('5');
	ft_putchar('6');
	ft_putchar('7');
	ft_putchar('8');
	ft_putchar('9');
	ft_putchar('\n');
	return (0);
}
