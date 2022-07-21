/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slampine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 16:47:05 by slampine          #+#    #+#             */
/*   Updated: 2022/07/17 18:26:26 by slampine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
void	rush01(int x, int y);
int main(int argc, char **argv)
{
    int i=atoi(argv[2]);
    int j=atoi(argv[1]);
    rush01(i,j);
    return(0);
}