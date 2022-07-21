/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvuorenm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 12:28:04 by jvuorenm          #+#    #+#             */
/*   Updated: 2022/07/03 12:39:16 by jvuorenm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	check_position4(int column, int line, int x, int y)
{
	if (column == 1 && line == 1)
	{
		ft_putchar('A');
	}
	else if (column == x && line == 1)
	{
		ft_putchar('C');
		ft_putchar('\n');
	}
	else if (column == 1 && line == y)
	{
		ft_putchar('C');
	}
	else if (column == x && line == y)
	{
		ft_putchar('A');
		ft_putchar('\n');
	}
	if (x == 1)
	{
		ft_putchar('\n');
	}
}

int	write_columns4(int column, int x, int line, int y)
{
	while (column < x + 1)
	{
		if (column == 1 || column == x)
		{
			check_position4(column, line, x, y);
		}
		else
		{
			ft_putchar('B');
		}
		column++;
	}
	return (column);
}

int	write_lines4(int column, int x)
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

void	rush04(int x, int y)
{
	int	line;
	int	column;

	line = 1;
	column = 1;
	while (line < y + 1)
	{
		if (line == 1 || line == y)
		{
			column = write_columns4(column, x, line, y);
		}
		else
		{
			column = write_lines4(column, x);
		}
		column = 1;
		line++;
	}
}
