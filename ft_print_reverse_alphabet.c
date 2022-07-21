/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slampine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 11:54:35 by slampine          #+#    #+#             */
/*   Updated: 2022/06/29 12:18:06 by slampine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_reverse_alphabet(void);

int ft_putchar(char c)
{
	write (1, &c, 1);
	return (0);
}

int main(void)
{
	int 	i;

	i = 122;
	while (i > 96)
	{
		ft_putchar(i);
	i = i - 1;
	}
	ft_putchar('\n');
	return (0);
}