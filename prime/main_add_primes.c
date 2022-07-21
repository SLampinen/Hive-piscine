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
int is_prime(int candidate);
int main(int argc, char **argv)
{
    int candidate;
    int num;
    int res;

    res = 0;
    num = 0;
    candidate= atoi(argv[1]);
    if(argc==2)
    {
        while(num <= candidate)
        {
            if(is_prime(num))
            {
                res = res + num;
            }
            num++;
        }
    }
    printf("Sum of all primes <= %i is %i\n",candidate, res);
    return(0);
}