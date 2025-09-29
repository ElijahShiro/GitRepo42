void	ft_print_numbers(void)
{
	int		i;
	char	let;

	i = 0;
	while (i <= 9)
	{
		let = i + '0';
		ft_putchar(let);
		i++;
	}
}
