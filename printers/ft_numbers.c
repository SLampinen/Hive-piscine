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
#include <unistd.h>
#include <stdio.h>

void print(int n);

int ft_putchar(char c)
{
	write (1, &c, 1);
	return (0);
}

void ft_is_negative(int n)
{
	if (n<0)
	{		
		ft_putchar('N');
	}
	else
	{
		ft_putchar('P');
	}

}

int main(int argc, char **argv)
{
    printf("%s", argv[1]);
	ft_is_negative(argv[1]);
	ft_putchar('\n');
    return(0);
}
