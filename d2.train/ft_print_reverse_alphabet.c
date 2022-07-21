void	ft_print_reverse_alphabet(void)
{
	char 	i;
	i = 'z';
	while (i >= 'a')
		{
		ft_putchar(i);
		i = i - 1;
		}
	ft_putchar('\n');
}