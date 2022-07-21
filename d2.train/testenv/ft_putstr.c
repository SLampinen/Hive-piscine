/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slampine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 10:02:42 by slampine          #+#    #+#             */
/*   Updated: 2022/07/06 18:23:50 by slampine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
int ft_putchar (char c);
void ft_putstr(char *text)
{
int index;

index=0;

while(text[index] != '\0')
    {
        ft_putchar(text[index]);
        index++;
    }
}
