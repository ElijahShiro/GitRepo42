void	ft_printnumb(char num)
{
	int		div;
	int		res;
	char	c;

	div = num / 16;
	res = num % 16;
	if (div < 10)
		c = div + '0';
	else
		c = (div - 10) + 'a';
	write(1, &c, 1);
	if (res < 10)
		c = res + '0';
	else
		c = (res - 10) + 'a';
	write (1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int				i;
	unsigned char	c;

	i = 0;
	while (str[i] != '\0')
	{
		c = (unsigned char)str[i];
		if ((str[i] >= 0 && str[i] <= 31) || str[i] == 127)
		{
			write(1, "\\", 1);
			ft_printnumb(c);
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
}
