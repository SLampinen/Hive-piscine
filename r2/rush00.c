/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akurusio <akurusio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 10:53:04 by jvuorenm          #+#    #+#             */
/*   Updated: 2022/07/03 11:55:52 by akurusio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	write_columns0(int x)
{
	int	column;

	column = 1;
	while (column < x + 1)
	{
		if (column == 1 || column == x)
		{
			ft_putchar('o');
			if (column == x)
				ft_putchar('\n');
		}
		else
		{
			ft_putchar('-');
		}
		column++;
	}
}

void	write_lines0(int x)
{
	int	column;

	column = 1;
	while (column < x + 1)
	{
		if (column == 1 || column == x)
		{
			ft_putchar('|');
			if (column == x)
				ft_putchar('\n');
		}
		else
		{
			ft_putchar(' ');
		}
		column++;
	}
}

void	rush00(int x, int y)
{
	int	line;

	line = 1;
	while (line < y + 1)
	{
		if (line == 1 || line == y)
			write_columns0(x);
		else
			write_lines0(x);
		line++;
	}
}
