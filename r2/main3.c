/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slampine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 16:47:05 by slampine          #+#    #+#             */
/*   Updated: 2022/07/16 16:47:54 by slampine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
void	rush03(int x, int y);
int main(int argc, char **argv)
{
    int i=atoi(argv[2]);
    int j=atoi(argv[1]);
    rush03(i,j);
    return(0);
}