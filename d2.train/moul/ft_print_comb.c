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
void    ft_print_comb(void)
{
        int a;

        int b;
    
        int c;

    a=48;
    b=48;
    c=48;
    while(a<56)
    {
        if(c<58)
        {
            if(a!=b && a!=c && b!=c)
            {
                    ft_putchar(a);
                    ft_putchar(b);
                    ft_putchar(c);
                    ft_putchar(', ');
            }
                c++;
        }
        else
        {
            c=48;
            if(b<57)
            {
            b++;
            }
            else
            {
            b=48;
            a++;
            }
        }
    }
    ft_putchar('\n');
}