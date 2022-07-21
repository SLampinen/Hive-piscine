/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slampine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 18:58:26 by slampine          #+#    #+#             */
/*   Updated: 2022/07/17 18:58:40 by slampine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>
int main(int argc, char **argv)
{
    int index=1;
    //int num = 10;
    int num=atoi(argv[1]);
    if (argc==2)
    {
        while(index<num)
        {
            if((num % index) == 0)
            {
                printf("%i\n",index);
            }
            index++;
        }
    }
}