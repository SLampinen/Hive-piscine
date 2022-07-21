/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slampine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 11:36:58 by slampine          #+#    #+#             */
/*   Updated: 2022/07/07 11:37:01 by slampine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char **ft_split_whitespaces(char *str)
{
    int index;
    int indexst;
    int indexend;
    char *newstr;

    index = 0;
    indexst = 0;
    while(str[index] != '\0')
    {
        if(str[index] == '32' || str[index] == '\n')
        {
        indexend = index;
        index = indexst;
        while(index  < indexend)
        {
        newstr[index] = str[indexst];
        index++;
        indexst++;
        }
        }
        else
        index++;
    }
}