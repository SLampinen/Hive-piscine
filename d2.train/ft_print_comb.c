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

void ft_print_comb(void)
{
    int a;

    int b;
    
    int c;

    a=0;
    b=0;
    c=0;
    while(a<8)
    {
        if(c<10)
        {
            if(a!=b && a!=c && b!=c)
            {
                    ft_putchar(a);
                    ft_putchar(b);
                    ft_putchar(c);
            }
                c++;
        }
        else
        {
            c=0;
            if(b<10)
            {
            b++;
            }
            else
            {
            b=0;
            a++;
            }
        }
    }
}