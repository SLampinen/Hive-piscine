/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stdin_to_list.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofoto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 16:52:23 by jofoto            #+#    #+#             */
/*   Updated: 2022/07/16 18:09:41 by jofoto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "ft_list.h"
void ft_putstr(char *text);
void ft_putchar(char c);
void	ft_list_push_back(t_list **begin_list, void *data);
t_list	*ft_create_elem(void *data);
void    print_list(t_list *list)
{
    while (list)
    {
        ft_putstr(list->data);
        list = list->next;
    }
}
int	main()
{
	char	*x;
	int	ret = 1;
	t_list *list = NULL;
	int i=0;
	while(i<5)
	{
		//ft_list_push_back(&list,i);
		ft_putchar(i+'0');
		i++;
	}
	ft_putchar('\n');
	while (ret)
	{
		ret = read(0, x, 1);				//read 1 char from stdinput, save it to x
		ft_putchar(x);
		ft_putchar('\n');
		ft_list_push_back(&list,x);			// pass x as argument to be the value of the next node in the list
		//print_list(list);
	}
	/*************** test *****************/
	print_list(list);
}
