/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akurusio <akurusio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 12:28:04 by jvuorenm          #+#    #+#             */
/*   Updated: 2022/07/03 13:46:50 by akurusio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
int		write_lines(int column, int x);

void	check_position1(int column, int line, int x, int y)
{
	if (column == 1 && line == 1)
	{
		ft_putchar('/');
	}
	else if (column == x && line == 1)
	{
		ft_putchar('\\');
		ft_putchar('\n');
	}
	else if (column == 1 && line == y)
	{
		ft_putchar('\\');
	}
	else if (column == x && line == y)
	{
		ft_putchar('/');
		ft_putchar('\n');
	}
	if (x == 1)
	{
		ft_putchar('\n');
	}
}

int	write_columns1(int column, int x, int line, int y)
{
	while (column < x + 1)
	{
		if (column == 1 || column == x)
		{
			check_position1(column, line, x, y);
		}
		else
		{
			ft_putchar('*');
		}
		column++;
	}
	return (column);
}

int	write_lines1(int column, int x)
{
	while (column < x + 1)
	{
		if (column == 1 || column == x)
		{
			ft_putchar('*');
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

void	rush01(int x, int y)
{
	int	line;
	int	column;

	line = 1;
	column = 1;
	while (line < y + 1)
	{
		if (line == 1 || line == y)
		{
			column = write_columns1(column, x, line, y);
		}
		else
		{
			column = write_lines1(column, x);
		}
		column = 1;
		line++;
	}
}
