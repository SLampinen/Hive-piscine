/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slampine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 10:53:05 by slampine          #+#    #+#             */
/*   Updated: 2022/07/04 19:43:47 by slampine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_atoi(char *str)
{
	int	res;
	int	index;

	res = 0;
	index = 0;
	if (str[0] == '-')
	{
		while (str[index] != '\0')
		{
		res = res * 10 + (str[index] + '0' -96);
		index++;
		}
	}
	else
	{
		index = 1;
		while (str[index] != '\0')
		{
		res = res * 10 + (str[index] + '0' -96);
		index++;
		}
		res = res * -1;
	}
	return (res);
}
