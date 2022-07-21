/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvuorenm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 11:45:04 by jvuorenm          #+#    #+#             */
/*   Updated: 2022/07/03 11:54:16 by jvuorenm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	write_columns3(int column, int x)
{
	while (column < x + 1)
	{
		if (column == 1 || column == x)
		{
			if (column == 1)
			{
				ft_putchar('A');
			}
			else if (column == x)
			{
				ft_putchar('C');
				ft_putchar('\n');
			}
			if (x == 1)
			{
				ft_putchar('\n');
			}
		}
		else
		{
			ft_putchar('B');
		}
		column++;
	}
	return (column);
}

int	write_lines3(int column, int x)
{
	while (column < x + 1)
	{
		if (column == 1 || column == x)
		{
			ft_putchar('B');
			if (column == x)
			{
				ft_putchar('\n');
			}
		}
		else
		{
			ft_putchar(' ');
		}
		column++;
	}
	return (column);
}

void	rush03(int x, int y)
{
	int	line;
	int	column;

	line = 1;
	column = 1;
	while (line < y + 1)
	{
		if (line == 1 || line == y)
		{
			column = write_columns3(column, x);
		}
		else
		{
			column = write_lines3(column, x);
		}
		column = 1;
		line++;
	}
}
