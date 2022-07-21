/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_linelen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsankola <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 15:03:02 by tsankola          #+#    #+#             */
/*   Updated: 2022/07/19 15:03:04 by tsankola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_linelen(char *str)
{
	int	count;

	count = 0;
	while (*str != '\n' && *str != '\0')
	{
		str++;
		count++;
	}
	if (*str == '\0')
		return (-1);
	return (count);
}