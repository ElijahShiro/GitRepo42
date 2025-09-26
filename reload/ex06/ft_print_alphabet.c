void	ft_print_alphabet(void)
{
	int		i;
	char	let;

	i = 97;
	while(i <= 122)
	{
		let = i;
		ft_putchar(let);
		i++;
	}
}
