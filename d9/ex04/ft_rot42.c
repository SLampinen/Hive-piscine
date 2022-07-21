/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slampine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 14:01:24 by slampine          #+#    #+#             */
/*   Updated: 2022/07/07 14:01:35 by slampine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_rot42(char *str)
{
    int index;
    int rotindex;
    char *res = "Textfile";
    
    index = 0;
    while(str[index] != '\0')
        {
        if (str[index] == ' ')
        {
            str++;
            index++;
            res++;
        }
        else if((str[index] > 64 && str[index] < 73) || (str[index] > 96 && str[index] < 105))
        {
            //*res = *str + 16;
            str++;
            index++;
        }
        else if((str[index] > 72 && str[index] < 91) || (str[index] > 104 && str[index] < 123))
        {
            //res[index] = str[index];
            str++;
            index++;
        }
        }
        return (res);
}