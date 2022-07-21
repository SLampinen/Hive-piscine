/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slampine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 10:53:05 by slampine          #+#    #+#             */
/*   Updated: 2022/07/05 14:37:13 by slampine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	cmp_pos(char *str)
{
	int	res;
	int	index;

	res = 0;
	index = 0;
	while (str[index] != '\0')
	{
		if(res != '0' && (str[index] < '0' || str[index] > '9'))
		return(res);
		if (str[index] < '0' || str[index] > '9')
			index++;
		else
			{
			res = res * 10 + (str[index] + '0' -96);
			index++;
			}
	}
	return (res);
}

int	cmp_neg(char *str)
{
	int	res;
	int	index;

	res = 0;
	index = 1;
	while (str[index] != '\0')
	{
		if (str[index] < '0' || str[index] > '9')
			index++;
		else
			{
				res = res * 10 + (str[index] + '0' -96);
			index++;
			}
	}
	return (res);
}

int	ft_atoi(char *str)
{
	int	res;
	int	index;

	res = 0;
	index = 0;
	if (str[0] != '-')
	{
		res = cmp_pos(str);
	}
	else
	{
		res = cmp_neg(str);
		res = res * -1;
	}
	return (res);
}
