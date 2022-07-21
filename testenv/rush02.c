/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slampine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 11:49:37 by slampine          #+#    #+#             */
/*   Updated: 2022/07/02 17:18:41 by slampine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void	check_coord(int x, int width, int y, int height)
{
	if (y == 1 && (x == 1 || x == width))
	{
		ft_putchar('A');
	}
	else if (y == height && (x == 1 || x == width))
	{
		ft_putchar('C');
	}
	else if (x == 1 || x == width || y == 1 || y == height)
	{
		ft_putchar('B');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rush(int width, int height)
{
	int	x;
	int	y;

	x = 1;
	y = 1;
	while (y <= height)
	{
		while (x <= width)
		{
			check_coord(x, width, y, height);
			x++;
		}	
		y++;
		x = 1;
		ft_putchar('\n');
	}
}
