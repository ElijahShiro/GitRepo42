void	ft_print_name(char *nb)
{
	while (*nb != '\0')
	{
		ft_putchar(*nb);
		nb++;
	}
	ft_putchar('\n');
}

int	main(int argc, char *argv[])
{
	int	i;

	if (argc < 2)
		return (0);
	i = 1;
	while (argv[i])
	{
		ft_print_name(argv[i]);
		i++;
	}
	return (0);
}
