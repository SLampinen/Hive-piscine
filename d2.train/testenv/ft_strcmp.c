/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slampine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 13:08:11 by slampine          #+#    #+#             */
/*   Updated: 2022/07/06 13:52:11 by slampine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	res;
	int	index;

	res = 0;
	index = 0;
	while (s1[index] != '\0' || s2[index] != '\0')
	{
		if (s1[index] == s2[index])
		index++;
		else if (s1[index] < s2[index])
		{
			res = -1;
			return (res);
		}
		else if (s1[index] > s2[index])
		{
			res = 1;
			return (res);
		}
	}
	return (res);
}
