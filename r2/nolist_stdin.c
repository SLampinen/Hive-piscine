/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nolist_stdin.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 20:18:15 by thuynguy          #+#    #+#             */
/*   Updated: 2022/07/17 18:55:54 by slampine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>
#include "ft_list.h"
#include "ft_strall.c"
#define BUF_SIZE 1

int	main()
{
	char	*str1;
	char	*str2;
	char 	buf[BUF_SIZE+1];
	int	i;
	int	x;

	i = 1;
	x = 1;
	while (read(0, buf, BUF_SIZE))
	{
		if (x == 1)
		{
			str1 = (char*)malloc(sizeof(char) * i + 1);
			if (str2)
			{
				ft_strcpy(str1, str2);
			}
				ft_strcat(str1,buf);
				free(str1);
		}
		if (x == -1)
		{
			str2 = (char*)malloc(sizeof(char) * i + 1);
			ft_strcpy(str2, str1);
			ft_strcat(str2,buf);
			free(str2);
		}
			i++;
				x = x * (-1);
	}
	ft_putstr(str1);
	return (0);
}
//begin: str1 malloc to have 2 byte, 1 is from reading stdin, x = -1, i = 2, start new loop

//malloc str2 to have 3 byte,copy str1 to str2, now str2 has 2 bytes from reading stdin, free str1, x = 1, start new loop

//str1 malloc 3bytes, i = 3, copy str2 to str1 and free str2, due to the copy str1 now has 2byte stdin, read 1 more byte, 
//now it has 3b from stdin, x = -1, start new loop...
