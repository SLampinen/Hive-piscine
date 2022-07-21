/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slampine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 18:28:39 by slampine          #+#    #+#             */
/*   Updated: 2022/06/30 18:28:41 by slampine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void ft_putnbr(int i);
void ft_putchar(char c);
void    ft_print_digits(void)
{
    int i=0;
   while(i<=9)
   {
    ft_putnbr(i);
    i++;
   }
    ft_putchar('\n');
}